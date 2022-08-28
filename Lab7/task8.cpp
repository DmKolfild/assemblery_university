#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    long double x;
    const long double y = 2.0;
    cin >> x;
    bool b = 1;
    asm(
    "fldt %[x]\n\t" // в стеке: x   // t - cуффикс размера (long double)
    "fldt %[y]\n\t" // в стеке: y, x
    "fucomi    %%st(1), %%st(0)" //сравнение: st(1) c st(0)
    :[B]"=@ccbe"(b) //st(1) >= st(0) = x >= y
    :[x]"m"(x), [y]"m"(y)
    :"cc"
    );
    cout << b;
    return 0;
}
