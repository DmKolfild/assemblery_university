#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    float x;
    const float y = 2.0;
    cin >> x;
    bool b = 1;
    asm(
    "flds %[x]\n\t" // в стеке: x   //   s / отсутствие - cуффикс размера (float)
    "flds %[y]\n\t" // в стеке: y, x
    "fucomi    %%st(1), %%st(0)" //сравнение: st(1) c st(0)
    :[B]"=@ccbe"(b) //st(1) >= st(0) = x >= y
    :[x]"m"(x), [y]"m"(y)
    :"cc"
    );
    cout << b;
    return 0;
}
