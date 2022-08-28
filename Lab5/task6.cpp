#include <cstdio>
#include <iostream>
#include <random>
using namespace std;
 
const int N = 10;
 
int main() {
    srand(time(NULL));
    int M[N];
    size_t i = rand()%N;
    size_t j = rand()%N;
    while (j == i)
        j = rand()%N;
    for (int j = 0; j < N; j++)
        M[j] = 0x44332211;
 
    cout << "До: ";
    for (int k = 0; k < N; k++)
        cout << hex << showbase << M[k] << " ";
    cout << endl;
 
    asm(
    "movl $65535, (%[M], %[I], 0x4)\n"
    "movb $0xFF, 0x-1(%[M], %[J], 0x4)\n"
    : [I] "+r"(i), [J] "+r"(j)
    : [M] "d"(M)
    : "memory"
    );
 
    cout << "После: ";
    for (int k = 0; k < N; k++)
        cout << hex << showbase << M[k] << " ";
    cout << endl;
}
