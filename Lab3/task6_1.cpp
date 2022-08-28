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
    unsigned int m = 564;
    m++;
    cout << "Инкремент целочисленной беззнаковой переменной m: " << endl;
    print32(&m);
 
    unsigned int n = -322;
    n++;
    cout << "Инкремент целочисленной беззнаковой переменной n: " << endl;
    print32(&n);
 
    signed int m2 = 564;
    m2++;
    cout << "Инкремент целочисленной знаковой переменной m: " << endl;
    print32(&m2);
   
    signed int n2 = -322;
    n2++;
    cout << "Инкремент целочисленной знаковой переменной n: " << endl;
    print32(&n2);
 
    float a = 0;
    a++;
    cout << "Инкремент переменной a с плавающей запятой: " << endl;
    print32(&a);
 
    float b = 1;
    b++;
    cout << "Инкремент переменной b с плавающей запятой: " << endl;
    print32(&b);
 
    float c = 12233445;
    c++;
    cout << "Инкремент переменной c с плавающей запятой: " << endl;
    print32(&c);
 
    float d = 122334455;
    d++;
    cout << "Инкремент переменной d с плавающей запятой: " << endl;
    print32(&d);
 
    int count1 = 0;
    count1++;
    cout << "Инкремент нуля: " << endl;
    print32(&count1);
 
    unsigned int count2 = 4294967295;
    count2++;
    cout << "Инкремент максимального целого 32-битного значения без знака: " << endl;
    print32(&count2);
 
    int count3 = -2147483648;
    count3++;
    cout << "Инкремент минимального целого 32-битного значения со знаком: " << endl;
    print32(&count3);
 
    unsigned int count4 = 2147483647;
    count4++;
    cout << "Инкремент максимального целого 32-битного значения со знаком: " << endl;
    print32(&count4);
 
}
