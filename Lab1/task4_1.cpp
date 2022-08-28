#include <iostream>
#include <stdint.h>
#include <typeinfo>
#include <bitset>
#include <iomanip>
using namespace std;
 
void print32(void *p){
    unsigned int* i = reinterpret_cast<unsigned int *>(p);
    bitset<32> bitform(*i);
    cout<<"a) 16ричная: "<< hex << *i<<endl;
    cout<<"б) 2ичная: " << bitform <<endl;
    cout<<"в) 10ричная: "<< dec<< *i<<endl;
    int* c = reinterpret_cast< int *>(p);
    bitset<32> bitform2(*c);
    cout<<"г) 16ричная: "<< hex << *c<<endl;
    cout<<"д) 2ичная: " << bitform2<<endl;
    cout<<"е) 10ричная: "<< dec<< *c<<endl;
    float* b = reinterpret_cast< float *>(p);
    cout<<"ж) с плавающей запятой с фиксированным количеством цифр: " << dec << setprecision(50) << fixed << *b << endl;
    cout<<"з) с плавающей запятой в экспоненциальном представлении: " << dec << setprecision(3) << scientific << *b << endl << endl;
};
 
int main(){
    long p;
    p = 0;
    cout<<"мин цел без знака ="<< p <<endl;
    print32(&p);
 
    p = 4294967295;
    cout<<"макс цел без знака ="<< p <<endl;
    print32(&p);
 
    p = -2147483648;
    cout<<"мин цел со знаком ="<< p <<endl;
    print32(&p);
 
    p= 2147483647;
    cout<<"макс цел со знаком ="<< p <<endl;
    print32(&p);
 
    int *q = (int*)0x8A8B8C8D;
    cout<<"1. x ="<< dec << q << endl;
    print32(&q);
 
    p=6;
    cout<<"1. у ="<< p <<endl;
    print32(&p);
 
    p= -3;
    cout<<"1. z ="<< p <<endl;
    print32(&p);
 
    float *q2 = (float*)0x8A8B8C8D;
    cout<<"2. x =" << q2 << endl;
    print32(&q2);
 
    float p2;
    p2 = 6.0;
    cout<<"2.  y ="<< p2 <<endl;
    print32(&p2);
 
    p2 = -3.0;
    cout<<"2. float z ="<< p2 <<endl;
    print32(&p2);
}
