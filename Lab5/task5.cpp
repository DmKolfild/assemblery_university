#include <cstdio>
#include <iostream>
#include <random>
using namespace std;
 
const int N = 10;
 
int main() {
    srand(time(NULL));
    int M[N];
    size_t i = rand()%N;
    for (int j = 0; j < N; j++)
        M[j] = 0x44332211;
 
    cout << "До: ";
    for (int j = 0; j < N; j++)
        cout << hex << showbase << M[j] << " ";
    cout << endl;
 
    asm(
    "movl $65535, (%[M], %[I], 4)\n"
    : [I] "+r"(i)
    : [M] "d"(M)
    : "memory"
    );
 
    cout << "После: ";
    for (int j = 0; j < N; j++)
        cout << hex << showbase << M[j] << " ";
    cout << endl;
}
