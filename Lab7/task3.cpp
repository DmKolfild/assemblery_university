#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    int x;
    bool z;
    cin >> x;
    asm (
    "cmp    %%eax, %%ebx\n\t" // сравнение для целого знакового числа
    :"=@ccle"(z)   //le - больше либо равно (eax >= ebx). 1 - больше, 2 - меньше
    :[X]"a"(x), [Y]"b"(2)
    :"cc"
    );
    cout << "z = " << z << endl;
    return 0;
}
