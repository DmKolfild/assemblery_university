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
    char s1[9] = "abczklmn";
    printDump(&s1, sizeof s1);
 
    char s2[17] = "абвёклмн";
    printDump(&s2, sizeof s2);
}
