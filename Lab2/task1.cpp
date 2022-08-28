#include <iostream>
using namespace std;
 
int main()
{
    char i = '1';
    cout<<"char - " << sizeof(i)<<" byte "<<endl;
 
    cout<<"signed char - "<<sizeof((signed char)i)<<" byte "<<endl;
 
    cout<<"unsigned char - "<<sizeof((unsigned char)i)<<" byte "<<endl;
 
    cout<<"wchar_t - "<<sizeof((wchar_t)i)<<" byte "<<endl;
 
    cout<<"short - "<<sizeof((short)i)<<" byte "<<endl;
 
    cout<<"unsigned short - "<<sizeof((unsigned short)i)<<" byte "<<endl;
 
    cout<<"int - "<<sizeof((int)i)<<" byte "<<endl;
 
    cout<<"unsigned int - "<<sizeof((unsigned int)i)<<" byte "<<endl;
 
    cout<<"long - "<<sizeof((long)i)<<" byte "<<endl;
 
    cout<<"unsigned long - "<<sizeof((unsigned long)i)<<" byte "<<endl;
 
    cout<<"long long - "<<sizeof((long long)i)<<" byte "<<endl;
 
    cout<<"unsigned long long - "<<sizeof((unsigned long long)i)<<" byte "<<endl;
   
    cout<<"float - "<<sizeof((float)i)<<" byte "<<endl;
   
    cout<<"double - "<<sizeof((double)i)<<" byte "<<endl;
     
    cout<<"long double - "<<sizeof((long double)i)<<" byte "<<endl;
 
    cout<<"size_t - "<<sizeof((size_t)i)<<" byte "<<endl;
     
    cout<<"ptrdiff_t - "<<sizeof((ptrdiff_t)i)<<" byte "<<endl;
 
    void* p;
    cout<<"void* - "<<sizeof(p)<<" byte "<<endl;
 
    cout<<"char* - "<<sizeof((char*)p)<<" byte "<<endl;
 
    cout<<"int* - "<<sizeof((int*)p)<<" byte "<<endl;
 
    cout<<"unsigned int* - "<<sizeof((unsigned int*)p)<<" byte "<<endl;
}
