#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    unsigned int x, y, z;
    cin >> x;   //x1 = 4294967295, y1 = 1 - переполнение
    cin >> y;   //x1 = 4294967295, y1 = 0 - нет переполнения - max(unsigned int)
    bool bo;
    asm (
    "add    %%ebx, %%eax\n\t"
    :"=a"(z), "=@ccc"(bo)   //1 - переполнение, 0 - нет беззнаковое переполения
    :[X]"a"(x), [Y]"b"(y)
    :"cc"
    );
    cout << "z = " << z << endl;
    cout << bo;
    return 0;
}
