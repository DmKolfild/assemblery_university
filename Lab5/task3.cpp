#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    unsigned int x =10, y = 3, z, w;
    asm (
    "xorl    %%edx, %%edx\n\t"
    "movl   (%[pX]), %%eax\n\t"
    "movl   (%[pY]), %%ebx\n\t"
    "add    $34, %%eax\n\t"
    "div    %%ebx"
    :"=a"(z), "=d"(w)
    :[pX]"r"(&x), [pY]"r"(&y)
    :"cc"
    );
    cout << "z = " << z << endl;
    cout << "w = " << w << endl << endl;
 
    return 0;
}
