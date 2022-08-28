#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    int x = -5, z;
    asm (
    "leal   0x0(,%%eax,4), %%eax\n\t"
    :"=a"(z)
    :[X]"a"(x)
    );
    cout << "z = " << z << endl;
    return 0;
}
