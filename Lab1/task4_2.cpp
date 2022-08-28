#include <iostream>
#include <stdint.h>
#include <typeinfo>
#include <bitset>
#include <iomanip>
using namespace std;
 
void print64(void *p){
    unsigned long* i = reinterpret_cast<unsigned long *>(p);
    bitset<64> bitform(*i);
    cout<<"a) 16ричная: "<< hex << *i<<endl;
    cout<<"б) 2ичная: " << bitform <<endl;
    cout<<"в) 10ричная: "<< dec<< *i<<endl;
    long* c = reinterpret_cast< long *>(p);
    bitset<64> bitform2(*c);
    cout<<"г) 16ричная: "<< hex << *c<<endl;
    cout<<"д) 2ичная: " << bitform2<<endl;
    cout<<"е) 10ричная: "<< dec<< *c<<endl;
    double* b = reinterpret_cast< double *>(p);
    cout<<"ж) с плавающей запятой с фиксированным количеством цифр: " << dec << setprecision(50) << fixed << *b << endl;
    cout<<"з) с плавающей запятой в экспоненциальном представлении: " << dec << setprecision(3) << scientific << *b << endl << endl;
};
 
int main(){
    unsigned long p;
    p = 0;
    cout<<"мин цел без знака ="<< p <<endl;
    print64(&p);
 
    p = 18446744073709551615;
    cout<<"макс цел без знака ="<< p <<endl;
    print64(&p);
 
    long p2;
    p2 = -9223372036854775808;
    cout<<"мин цел со знаком ="<< p2 <<endl;
    print64(&p2);
 
    p2 = 9223372036854775807;
    cout<<"макс цел со знаком ="<< p2 <<endl;
    print64(&p2);
 
    long *q = (long*)0x8A8B8C8D;
    cout<<"1. x ="<< dec << q << endl;
    print64(&q);
 
    p2 = 6;
    cout<<"1. у ="<< p2 <<endl;
    print64(&p2);
 
    p2 = -3;
    cout<<"1. z ="<< p2 <<endl;
    print64(&p2);
 
    double *q2 = (double*)0x8A8B8C8D;
    cout<<"2. x =" << q2 << endl;
    print64(&q2);
 
    double p3;
    p3 = 6.0;
    cout<<"2.  y ="<< p3 <<endl;
    print64(&p3);
 
    p3 = -3.0;
    cout<<"2. float z ="<< p3 <<endl;
    print64(&p3);
}
