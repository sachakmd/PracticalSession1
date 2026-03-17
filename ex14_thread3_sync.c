#include <stdio.h>
#include <windows.h>

HANDLE semaphore;

DWORD WINAPI worker(LPVOID arg)
{
    int id = *(int *)arg;
    WaitForSingleObject(semaphore, INFINITE);
    printf("Thread %d entre dans la section critique\n", id);
    fflush(stdout);
    Sleep(2000);
    printf("Thread %d sort de la section critique\n", id);
    fflush(stdout);
    ReleaseSemaphore(semaphore, 1, NULL);
    return 0;
}

int main(void)
{
    HANDLE t1, t2, t3;
    int id1 = 1, id2 = 2, id3 = 3;
    semaphore = CreateSemaphore(NULL, 1, 1, NULL);
    t1 = CreateThread(NULL, 0, worker, &id1, 0, NULL);
    t2 = CreateThread(NULL, 0, worker, &id2, 0, NULL);
    t3 = CreateThread(NULL, 0, worker, &id3, 0, NULL);
    WaitForSingleObject(t1, INFINITE);
    WaitForSingleObject(t2, INFINITE);
    WaitForSingleObject(t3, INFINITE);
    CloseHandle(t1);
    CloseHandle(t2);
    CloseHandle(t3);
    CloseHandle(semaphore);
    return 0;
}
