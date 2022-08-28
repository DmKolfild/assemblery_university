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
    int x =  0x8A8B8C8D;
    printDump(&x, sizeof x);
    double y = 6;
    printDump(&y, sizeof y);
    long mas[] = {0x8A8B8C8D, 6, -3};
    printDump(&mas, sizeof mas);
}
