cmake_minimum_required(VERSION 3.16)
project(PracticalSession1 C)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(ex01_hello
    ex01_hello_main.c
    hello.c
)
add_executable(ex02_ifelse
    ex02_ifelse.c
)
add_executable(ex03_for
    ex03_for.c
)
add_executable(ex04_while
    ex04_while.c
)
add_executable(ex05_adresse
    ex05_adresse.c
)
add_executable(ex06_sum
    ex06_sum_main.c
    sum.c
)
add_executable(ex07_search
    ex07_search.c
)

add_executable(ex08_binary_search
    ex08_binary_search.c
)
add_executable(ex09_selection_sort
    ex09_selection_sort.c
)
add_executable(ex10_timing
    ex10_timing.c
)
add_executable(ex11_sleep
    ex11_sleep.c
)
add_executable(ex12_thread_hello
    ex12_thread_hello.c
)
add_executable(ex13_thread2_sync
    ex13_thread2_sync.c
)
add_executable(ex14_thread3_sync
    ex14_thread3_sync.c

)
add_executable(ex15_wcet
    ex15_wcet.c
)
