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
 
 
    signed int sd1 = m1 << 1;
    cout << endl
         << "Знаковый сдвиг влево на 1 бит, значение и результат для числа m и "
            "числа n:"
         << endl;
    cout << "m:" << endl;
    print16(&m1);
    cout << "result:" << endl;
    print16(&sd1);
    sd1 = n1 << 1;
    cout << "n:" << endl;
    print16(&n1);
    cout << "result:" << endl;
    print16(&sd1);
 
    unsigned int sd2 = m2 << 1;
    cout << endl
         << "Беззнаковый сдвиг влево на 1 бит, значение и результат для числа m и "
            "числа n:"
         << endl;
    cout << "m:" << endl;
    print16(&m2);
    cout << "result:" << endl;
    print16(&sd2);
    sd2 = n2 << 1;
    cout << "n:" << endl;
    print16(&n2);
    cout << "result:" << endl;
    print16(&sd2);
 
    signed int sd_right1 = m1 >> 1;
    cout << endl
         << "Знаковый сдвиг вправо на 1 бит, значение и результат для числа m и "
            "числа n"
         << endl;
    cout << "m:" << endl;
    print16(&m1);
    cout << "result:" << endl;
    print16(&sd_right1);
    sd_right1 = n1 >> 1;
    cout << "n:" << endl;
    print16(&n1);
    cout << "result:" << endl;
    print16(&sd_right1);
 
    unsigned int sd_right2 = m2 >> 1;
    cout << endl
         << "Беззнаковый сдвиг вправо на 1 бит, значение и результат для числа m и "
            "числа n::"
         << endl;
    cout << "m:" << endl;
    print16(&m2);
    cout << "result:" << endl;
    print16(&sd_right2);
    sd_right2 = n2 >> 1;
    cout << "n:" << endl;
    print16(&n2);
    cout << "result:" << endl;
    print16(&sd_right2);
 
 
    unsigned int ost = m2 & 15;
    cout << endl
         << "Рассчёт x & 15 для m и n, значение и результат для числа m "
            "и числа n:"
         << endl;
    cout << "m:" << endl;
    print16(&m2);
    cout << "result:" << endl;
    print16(&ost);
    ost = n2 & 15;
    cout << "n:" << endl;
    print16(&n2);
    cout << "result:" << endl;
    print16(&ost);
 
    unsigned int round = m2 & -16;
    cout << endl << "Рассчёт x & -16 для m и n, значение и результат для числа m "
            "и числа n:" << endl;
    cout << "m:" << endl;
    print16(&m2);
    cout << "result:" << endl;
    print16(&round);
    ost = n2 & -16;
    cout << "n:" << endl;
    print16(&n2);
    cout << "result:" << endl;
    print16(&round);
}
