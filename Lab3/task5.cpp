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
    unsigned int d = 32;
    unsigned int x = 88;
 
    cout << "Округление безpнакого целого числа вниз: " << x << endl;
    d = d - 1;  // вычитаем 1, чтобы применить конъюнкцию
    unsigned int remains =
        (x & d);  // получаем остаток от деления при помощи конъюнкции
    cout << "Результат: " << x - remains << endl;
    unsigned int q1  = x + remains + 1;
    print16(&q1);
    d = d + 1; //возвращение изначального значения d
    // Находим остаток от деления на d-1. Вычитаем из числа.
 
    cout << "Округление безpнакого целого числа вверх: " << x << endl;
    x = x - 1;
    d = d - 1;
    remains = ~(x & d);
    remains = (remains & d);
    cout << "Результат: " << x + remains + 1 << endl;
    unsigned int q2  = x + remains + 1;
    print16(&q2);
    // Наглядный пример. У нас есть два случая: 1) число является степенью
    // двойки, 2) число не является степенью дваойки.
    // Необходимо обработать два этих случае вместе одинаково. Пример для 1
    // случая: возьмём 100000. Вычтем 1. Получим 11111. Найдём остаток от
    // деления на 32. И возьмём отрицание каждого разряда операнда. Получим
    // 00000. Прибавим это значение значению, полученному в результате вычитания
    // единички. И получим искомое значение 100000. То есть получили 32. Для
    // 100100. Вычитаем 1 => 100011. Остаток = 00011. Отрицание остатка: 11100.
    // Прибавляем к 100011 остаток 11100 и 1. Получаем 1000000 = 64.
}
