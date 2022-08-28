#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    float x;
    bool z;
    cin >> x;
    asm (
    "vcvtsd2ss  %[Y], %[Y], %[Y]\n\t" //преобразуем число в формат float
    "vcomiss    %%xmm0, %%xmm1\n\t" //be - больше либо равно (x >= 2). 1 - больше, 0 - меньше
    :"=@ccbe"(z)
    :[X]"x"(x), [Y]"x"(2.0)
    :"cc"
    );
    cout << "z = " << z << endl;
    return 0;
}
