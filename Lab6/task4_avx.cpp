#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    double x = 14.6, y;
    asm (
    "vsubsd  %[Sub], %[X], %[X]\n\t"
    :"=x"(y)
    :[X]"x"(x), [Sub]"x"(23.0)
    :"cc"
    );
    cout << "y = " << y << endl;
    cout << endl;
    cout << "C++" << endl;
    cout << "y = " << (x-23.0);
}
