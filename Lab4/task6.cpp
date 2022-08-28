#include <stdio.h>
 
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
 
void showShort(unsigned short arr[]) {
    for (int i = 0; i < 5; i++) printf("%25hd ", arr[i]);
    printf("\n");
    for (int i = 0; i < 5; i++) printf("%25hX ", arr[i]);
    printf("\n\n");
}
void showInt(unsigned int arr[]) {
    for (int i = 0; i < 5; i++) printf("%25d ", arr[i]);
    printf("\n");
    for (int i = 0; i < 5; i++) printf("%25X ", arr[i]);
    printf("\n\n");
}
void showLong(unsigned long arr[]) {
    for (int i = 0; i < 5; i++) printf("%25ld ", arr[i]);
    printf("\n");
    for (int i = 0; i < 5; i++) printf("%25lX ", arr[i]);
    printf("\n\n");
}
void showFloat(float arr[]) {
    for (int i = 0; i < 5; i++) printf("%25.8f ", arr[i]);
    printf("\n");
    for (int i = 0; i < 5; i++) printf("%25.5a ", arr[i]);
    printf("\n\n");
}
void showDouble(double arr[]) {
    for (int i = 0; i < 5; i++) printf("%25.8lf ", arr[i]);
    printf("\n");
    for (int i = 0; i < 5; i++) printf("%25.5la ", arr[i]);
    printf("\n\n");
}
 
int main() {
    unsigned short ms[] = {0xC0DE, 0xC0DE, 0xC0DE, 0xC0DE, 0xC0DE};
    unsigned int ml[] = {0xDEADBEEF, 0xDEADBEEF, 0xDEADBEEF, 0xDEADBEEF,
                         0xDEADBEEF};
    unsigned long mq[] = {0xBECACA01FFEDC0CA, 0xBECACA01FFEDC0CA,
                          0xBECACA01FFEDC0CA, 0xBECACA01FFEDC0CA,
                          0xBECACA01FFEDC0CA};
    float mfs[] = {exp(1), exp(1), exp(1), exp(1), exp(1)};
    double mfl[] = {exp(1), exp(1), exp(1), exp(1), exp(1)};
 
    showShort(ms);
    showInt(ml);
    showLong(mq);
    showFloat(mfs);
    showDouble(mfl);
}
