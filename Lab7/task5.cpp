#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    cout << "Ассемблер: " << endl;
    double x, y;
    bool z;
    cin >> x;
    cin >> y;
    asm("vcmpsd $0b10, %%xmm0, %%xmm1, %%xmm0\n\t"  // $0b10 - непосредственная
                                                    // константа, указывающая
                                                    // какое сравнение нужно
                                                    // произвести(>=). Сравение
                                                    // xmm0 и xmm1 и запись
                                                    // результата в xmm0
        "vandpd %[A], %%xmm0, %%xmm0\n\t"  // Логическое "И" - избавление от
                                           // результата 11...111.
                                           // 1 - x больше y. 0
                                           // - x меньше y
        "vmovsd %%xmm0, %[Z]\n\t"
        : [Z] "=m"(z)
        : [X] "x"(x), [Y] "x"(y), [A] "x"(0b1)
        : "memory");
    cout << "z = " << hex << z << endl;
    return 0;
}
