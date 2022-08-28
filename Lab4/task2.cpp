#include <stdio.h>
 
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
 
template <typename T>
T show(T arr[]) {
    printf("Вывод массива в знаковом десятичном виде: \n");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    printf("Вывод массива в шестнадцатеричном виде: \n");
    for (int i = 0; i < 5; i++) printf("%X ", arr[i]);
    printf("\n\n");
    return 0;
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
    show(ms);
    show(ml);
    show(mq);
}
