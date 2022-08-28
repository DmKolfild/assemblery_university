#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    unsigned int x =10, y = 3, z, w;
    asm (
    "movl   %[X], %%eax\n\t"
    "addl   $34, %%eax\n\t"
    "divl   %[Y]\n\t"
    :"=a"(z), "=d"(w)
    :[X]"m"(x), [Y]"m"(y)
    :"cc"
    );
    cout << "z = " << z << endl;
    cout << "w = " << w << endl << endl;
 
    cout << "C++: " << endl;
    z = (x + 34) / y;
    w = (x + 34) % y;
    cout << "z = " << z << endl;
    cout << "w = " << w << endl << endl;
    return 0;
}
