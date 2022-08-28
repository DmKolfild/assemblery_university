 
#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    int x = 2, y = 3, z;
    asm (
    "movl   %[X], %%eax\n\t"
    "subl   $1, %%eax\n\t"
    "movl   %[Y], %%ebx\n\t"
    "subl   $1, %%ebx\n\t"
    "imull  %%ebx\n\t"
    "imull  $-1, %%eax\n\t"
    "addl   $5, %%eax\n\t"
    "movl   %%eax, %0"
    :"=m"(z)
    :[X]"m"(x), [Y]"m"(y)
    :"cc", "eax", "ebx", "memory"
    );
    cout << "z = " << z << endl;
 
    return 0;
}
