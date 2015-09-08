// RUN: %dragonegg -S %s -o - | FileCheck %s
// XFAIL: gcc-4.7, gcc-4.8, gcc-4.9, gcc-5.0, gcc-5.1, gcc-5.2, gcc-5.3

void use(int*);

void foo(int n, int i) {
// CHECK: foo
  int a[n];
// CHECK: alloca i8, i{{.*}}, align 16
  use(&a[i]);
}
