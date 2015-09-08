// RUN: %dragonegg -S %s -o - | FileCheck %s
// XFAIL: gcc-4.8, gcc-4.9, gcc-5.0, gcc-5.1, gcc-5.2, gcc-5.3, gcc-5.4

int qux;
void foo(void) __attribute__ ((alias ("qux")));
// CHECK: @foo = alias i32* @qux
