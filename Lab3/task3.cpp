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
    signed short m1 = 564;
    unsigned short m2 = 564;
    signed short n1 = -322;
    unsigned short n2 = -322;
 
    signed int count1 = 2;
    signed int pr1 = m1 * count1;
    cout << endl
         << "Знаковое умножение m и n на 2, значение и результат для числа m и "
            "числа n:"
         << endl;
    cout << "m:" << endl;
    print16(&m1);
    cout << "result:" << endl;
    print16(&pr1);
    pr1 = n1 * count1;
    cout << "n:" << endl;
    print16(&n1);
    cout << "result:" << endl;
    print16(&pr1);
 
    unsigned int count2 = 2;
    unsigned int pr2 = m2 * count2;
    cout << endl
         << "Беззнаковое умножение m и n на 2, значение и результат для числа "
            "m и числа n:"
         << endl;
    cout << "m:" << endl;
    print16(&m2);
    cout << "result:" << endl;
    print16(&pr2);
    pr2 = n2 * count2;
    cout << "n:" << endl;
    print16(&n2);
    cout << "result:" << endl;
    print16(&pr2);
 
    signed int del1 = m1 / count1;
    cout << endl
         << "Знаковое деление m и n на 2, значение и результат для числа m и "
            "числа n:"
         << endl;
    cout << "m:" << endl;
    print16(&m1);
    cout << "result:" << endl;
    print16(&del1);
    del1 = n1 / count1;
    cout << "n:" << endl;
    print16(&n1);
    cout << "result:" << endl;
    print16(&del1);
 
    unsigned int del2 = m2 / count2;
    cout << endl
         << "Беззнаковое деление m и n на 2, значение и результат для числа m "
            "и числа n:"
         << endl;
    cout << "m:" << endl;
    print16(&m2);
    cout << "result:" << endl;
    print16(&del2);
    del2 = n2 / count2;
    cout << "n:" << endl;
    print16(&n2);
    cout << "result:" << endl;
    print16(&del2);
 
    count2 = 16;
    unsigned int ost = m2 % count2;
    cout << endl
         << "Беззнаковое деление m и n на 16, значение и результат для числа m "
            "и числа n:"
         << endl;
    cout << "m:" << endl;
    print16(&m2);
    cout << "result:" << endl;
    print16(&ost);
    ost = n2 % count2;
    cout << "n:" << endl;
    print16(&n2);
    cout << "result:" << endl;
    print16(&ost);
 
    unsigned int round = m2 - (m2 % count2);
    cout << endl << "Округление вниз до числа, кратного 16" << endl;
    cout << "m:" << endl;
    print16(&m2);
    cout << "result:" << endl;
    print16(&round);
    ost = n2 - (n2 % count2);
    cout << "n:" << endl;
    print16(&n2);
    cout << "result:" << endl;
    print16(&round);
}
