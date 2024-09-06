# tricks

1. 提交一个可以执行的动态库，就像ld.so;重点是entry point不是0,有_start和exit.
gcc -shared dyna_exec.c -o libdyna_exec.so

