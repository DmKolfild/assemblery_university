#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    unsigned int x;
    bool z;
    cin >> x;
    asm (
    "cmp    %%eax, %%ebx\n\t"  // сравнение для целого беззнакового числа
    :"=@ccbe"(z)   //be - больше либо равно (eax >= ebx). 1 - больше, 2 - меньше
    :[X]"a"(x), [Y]"b"(2)
    :"cc"
    );
    cout << "z = " << z << endl;
    return 0;
}
