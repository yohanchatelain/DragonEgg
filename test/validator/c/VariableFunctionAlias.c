// RUN: %dragonegg -S %s -o - | FileCheck %s
// XFAIL: gcc-4.8, gcc-5.0, gcc-5.1, gcc-5.2

void qux(void) { };
extern int foo __attribute__ ((alias ("qux")));
// CHECK: @foo = alias void ()* @qux
