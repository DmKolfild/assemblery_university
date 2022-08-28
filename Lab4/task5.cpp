#include <stdio.h>
 
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
 
int main() {
    char str1[30];
    char str2[30];
    char str3[30];
    char x[1];
 
    scanf("%[^ ]s",str1);
    scanf("%[ ]",x); //избавляемся от пробела
    scanf("%[^|]s",str2); //ввод сроки, содержащей пробелы до '|'
    scanf("%[|]",x); //избавляемся от '|'
    scanf("%5c",str3); //ввод последовательности произвольных символов, ограниченной максимальной шириной поля ввода
    printf("***%s***\n", str1);
    printf("***%s***\n", str2);
    printf("***%s***\n", str3);
}
