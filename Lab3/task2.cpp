#include <bitset>
#include <iomanip>
#include <iostream>
#include <typeinfo>
using namespace std;
 
void print16(void *p) {
    unsigned short *i = reinterpret_cast<unsigned short *>(p);
    cout << setfill('0');
    cout << setw(4) << hex << *i << '/';
    bitset<16> bitform(*i);
    cout << setw(16) << bitform << '/';
    cout << setfill(' ') << setw(5) << dec << *i << '/';
    short *c = reinterpret_cast<short *>(p);
    cout << setfill(' ') << showpos << setw(6) << *c << '/';
    float *b = reinterpret_cast<float *>(p);
    cout << setfill(' ') << setw(55) << dec << setprecision(50) << fixed << *b
         << '/';
    cout << setfill(' ') << setw(10) << dec << setprecision(3) << scientific
         << *b << endl
         << endl;
};
 
void print32(void *p) {
    unsigned int *i = reinterpret_cast<unsigned int *>(p);
    cout << setfill('0');
    cout << setw(8) << hex << *i << '/';
    bitset<32> bitform(*i);
    cout << setw(32) << bitform << '/';
    cout << setfill(' ') << setw(10) << dec << *i << '/';
    int *c = reinterpret_cast<int *>(p);
    cout << setfill(' ') << showpos << setw(11) << *c << '/';
    float *b = reinterpret_cast<float *>(p);
    cout << setfill(' ') << setw(55) << dec << setprecision(50) << fixed << *b
         << '/';
    cout << setfill(' ') << setw(10) << dec << setprecision(3) << scientific
         << *b << endl
         << endl;
};
 
int main() {
    unsigned short m1 = 564;
    unsigned int n1 = static_cast<unsigned int>(m1);
    print16(&m1);
    print32(&n1);
    cout << "___" << endl;
 
    signed short m2 = 564;
    signed int n2 = static_cast<signed int>(m2);
    print16(&m2);
    print32(&n2);
    cout << "___" << endl;
 
    unsigned short m3 = -322;
    unsigned int n3 = static_cast<unsigned int>(m3);
    print16(&m3);
    print32(&n3);
    cout << "___" << endl;
 
    signed short m4 = -322;
    signed int n4 = static_cast<signed int>(m4);
    print16(&m4);
    print32(&n4);
    cout << "___" << endl;
}
