#include <stdio.h>
#include <windows.h>

DWORD WINAPI helloThread(LPVOID arg)
{
    printf("Hello World depuis le thread\n");
    return 0;
}

int main(void)
{
    HANDLE thread;
    printf("Creation du thread\n");
    thread = CreateThread(
        NULL,
        0,
        helloThread,
        NULL,
        0,
        NULL
        );
    WaitForSingleObject(thread, INFINITE);
    CloseHandle(thread);
    printf("Fin du programme\n");
    return 0;
}
