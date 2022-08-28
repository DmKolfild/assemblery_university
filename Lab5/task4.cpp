#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    unsigned short x =10, y = 3, z, w;
    asm (
    "movw   %[X], %%ax\n\t"
    "addw   $34, %%ax\n\t"
    "divw   %[Y]\n\t"
    :"=a"(z), "=d"(w)
    :[X]"m"(x), [Y]"m"(y)
    :"cc"
    );
 
    cout << "z = " << z << endl;
    cout << "w = " << w << endl << endl;
}
