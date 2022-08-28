#include <iostream>
#include <stdint.h>
#include <typeinfo>
#include <bitset>
using namespace std;
 
void print16(void *p){
    unsigned short* i = reinterpret_cast<unsigned short *>(p);
    bitset<16> bitform(*i);
    cout<<"a) 16ричная: "<< hex << *i<<endl;
    cout<<"б) 2ичная: " << bitform <<endl;
    cout<<"в) 10ричная: "<< dec<< *i<<endl;
    short* c = reinterpret_cast< short *>(p);
    bitset<16> bitform2(*c);
    cout<<"г) 16ричная: "<< hex << *c<<endl;
    cout<<"д) 2ичная: " << bitform2<<endl;
    cout<<"е) 10ричная: "<< dec<< *c<<endl<<endl;
 
};
 
int main(){
    int p;
    p = 0;
    cout<<"мин цел без знака ="<< p <<endl;
    print16(&p);
 
    p = 65535;
    cout<<"макс цел без знака ="<< p <<endl;
    print16(&p);
 
    p = -32768;
    cout<<"мин цел со знаком ="<< p <<endl;
    print16(&p);
 
    p= 32767;
    cout<<"макс цел со знаком ="<< p <<endl;
    print16(&p);
 
    p=6;
    cout<<"у ="<< p <<endl;
    print16(&p);
 
    p= -3;
    cout<<"z ="<< p <<endl;
    print16(&p);
}
