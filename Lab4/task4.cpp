#include <stdio.h>

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void showLong(unsigned long arr[]) {
    printf("Вывод массива в знаковом десятичном виде: \n");
    for (int i = 0; i < 5; i++) printf("%ld ", arr[i]);
    printf("\n");
    printf("Вывод массива в шестнадцатеричном виде: \n");
    for (int i = 0; i < 5; i++) printf("%lX ", arr[i]);
    printf("\n\n");
}


int main() {
    unsigned long mq[] = {0xBECACA01FFEDC0CA, 0xBECACA01FFEDC0CA,
                          0xBECACA01FFEDC0CA, 0xBECACA01FFEDC0CA,
                          0xBECACA01FFEDC0CA};
while(scanf("%lu %lu %lu %lu %lu", &mq[0], &mq[1], &mq[2], &mq[3], &mq[4]) !=5) {
    puts("Некорректный ввод, попробуйте снова:");
    while (getchar() != '\n');
}

showLong(mq);
}
