#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    unsigned int x =10, y = 3, z, w;
    asm (
    "addl   $34, %%eax\n\t"
    "divl   %[Y]\n\t"
    :"=a"(z), "=d"(w)
    :[X]"a"(x), [Y]"r"(y)
    :"cc"
    );
    cout << "z = " << z << endl;
    cout << "w = " << w << endl << endl;
 
    return 0;
}
