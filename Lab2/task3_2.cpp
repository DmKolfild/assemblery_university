#include <iostream>
#include <stdint.h>
#include <typeinfo>
#include <bitset>
#include <iomanip>
using namespace std;
 
void printDump(void *p, size_t N){
    cout << hex << setfill('0');
    for (size_t i = 0; i < N; i++)
        cout << ' ' << setw(2) << (int)reinterpret_cast<unsigned char *>(p)[i];
    cout << endl;
};
 
int main(){
    wchar_t *s1 = L"abczklmn";
    printDump(s1, 36);
 
    wchar_t *s2 = L"абвёклмн";
    printDump(s2, 36);
 
}
