#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    double x;
    bool z;
    cin >> x;
    asm (
    "vcomisd    %[X], %[Y]\n\t" // сравнение для числа двойной точности (double)
    :"=@ccbe"(z)   //be - больше либо равно (x >= y). 1 - больше, 0 - меньше
    :[X]"x"(x), [Y]"x"(2.0)
    :"cc"
    );
    cout << "z = " << z << endl;
    return 0;
}
