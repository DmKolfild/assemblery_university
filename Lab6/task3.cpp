#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    unsigned int C;
    // поддержке AVX соответствует единичное значение бита 28 регистра 𝑒𝑐𝑥
    // (отсутствию поддержки — нулевое значение бита)
    asm(
    "cpuid\n"
    : "=c"(C)
    : "a"(1)
    : "ebx", "edx");
    bool AVX_bit = (C & (1 << 28)) != 0;
    cout << AVX_bit << endl;
 
    // поддержке SSE соответствует единичное значение бита 25 регистра 𝑒d𝑥
    // (отсутствию поддержки — нулевое значение бита)
    unsigned int D;
    asm(
    "cpuid\n"
    : "=d"(D)
    : "a"(1)
    : "ebx", "ecx"
    );
    bool SSE_bit = (D & (1 << 25)) != 0;
    cout << SSE_bit << endl;
 
    // поддержке FPU соответствует единичное значение бита 0 регистра 𝑒d𝑥
    // (отсутствию поддержки — нулевое значение бита)
    unsigned int D0;
    asm(
    "cpuid\n"
    : "=d"(D0)
    : "a"(1)
    : "ebx", "ecx"
    );
    bool FPU_bit = (D0 & (1 << 0)) != 0;
    cout << FPU_bit << endl;
 
    return 0;
}
