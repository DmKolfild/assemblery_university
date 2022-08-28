#include <stdio.h>
 
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
 
void showShort(unsigned short arr[]) {
    printf("Вывод массива в знаковом десятичном виде: \n");
    for (int i = 0; i < 5; i++) printf("%hd ", arr[i]);
    printf("\n");
    printf("Вывод массива в шестнадцатеричном виде: \n");
    for (int i = 0; i < 5; i++) printf("%hX ", arr[i]);
    printf("\n\n");
}
void showInt(unsigned int arr[]) {
    printf("Вывод массива в знаковом десятичном виде: \n");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    printf("Вывод массива в шестнадцатеричном виде: \n");
    for (int i = 0; i < 5; i++) printf("%X ", arr[i]);
    printf("\n\n");
}
void showLong(unsigned long arr[]) {
    printf("Вывод массива в знаковом десятичном виде: \n");
    for (int i = 0; i < 5; i++) printf("%ld ", arr[i]);
    printf("\n");
    printf("Вывод массива в шестнадцатеричном виде: \n");
    for (int i = 0; i < 5; i++) printf("%lX ", arr[i]);
    printf("\n\n");
}
void showFloat(float arr[]) {
    printf("Вывод массива в знаковом десятичном виде: \n");
    for (int i = 0; i < 5; i++) printf("%f ", arr[i]);
    printf("\n");
    printf("Вывод массива в шестнадцатеричном виде: \n");
    for (int i = 0; i < 5; i++) printf("%a ", arr[i]);
    printf("\n\n");
}
void showDouble(double arr[]) {
    printf("Вывод массива в знаковом десятичном виде: \n");
    for (int i = 0; i < 5; i++) printf("%lf ", arr[i]);
    printf("\n");
    printf("Вывод массива в шестнадцатеричном виде: \n");
    for (int i = 0; i < 5; i++) printf("%la ", arr[i]);
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
 
    int i = 2;
    scanf("%hu", &ms[i]); //считывание беззнакового целого 16 бит
    scanf("%du", &ml[i]); //считывание беззнакового целого 32 бита
    scanf("%lu", &mq[i]); //считывание беззнакового целого 64 бита
    scanf("%f", &mfs[i]); //считывание в формате float
    scanf("%lf", &mfl[i]); //считывание в формате double
 
    showShort(ms);
    showInt(ml);
    showLong(mq);
    showFloat(mfs);
    showDouble(mfl);
}
