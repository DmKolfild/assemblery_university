#include <cstdio>
#include <iostream>
#include <ctime>
using namespace std;
const int N = 4;
 
void print_mas(double* mas)
{
    for (int i = 0; i < N; i++)
        cout << mas[i] << " ";
    cout << endl;
}
int main() {
 
    cout << "Ассемблер: " << endl;
    double x[4], y[4], z[4];
    for (int i = 0; i < N; i++)
    {
        x[i] = rand() % N + 1;
        y[i] = rand() % N + 5;
    }
    print_mas(x);
    print_mas(y);
 
    asm (
    "vmovupd    %[X], %%ymm1\n\t"
    "vmovupd    %[Y], %%ymm2\n\t"
    "vaddpd     %%ymm1, %%ymm2, %%ymm3\n\t"
    "vsubpd     %%ymm2, %%ymm1, %%ymm4\n\t"
    "vdivpd     %%ymm4, %%ymm3, %%ymm1\n\t"
    "vmovupd     %%ymm1, %[Z]"
    :[Z]"=m"(z)
    :[X]"m"(x), [Y]"m"(y)
    :"memory", "ymm1", "ymm2", "ymm3", "ymm4"
    );
    print_mas(z);
    cout << endl;
 
    cout << "С++: " << endl;
    print_mas(x);
    print_mas(y);
 
    for (int i = 0; i < N; i++)
        z[i] = (x[i]+y[i])/(x[i]-y[i]);
    print_mas(z);
}
