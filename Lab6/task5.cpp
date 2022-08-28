#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    const double a = 23;
    double x = 1, y;
    asm(
    "fldl   %[X]\n\t" // st(0) = %[X]
    "fsubl  %[A]\n\t" // st(0) = %[X] - %[A]
    "fstpl  %[Y]\n\t" // %[Y] = %[X] - %[A], стек пуст
    :[Y]"=m"(y)
    :[X]"m"(x), [A]"m"(a)
    :"cc"
    );
    cout << y;
    return 0;
}
