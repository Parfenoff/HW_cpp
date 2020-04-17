#include <iostream>

using namespace std;

int main() {

setlocale(LC_ALL,"RU");

int rangebegin, rangeend;

int sum = 0;

cout << " Введите начало диапазона: " << endl;

cin >> rangebegin;

cout << " Введите конец диапазона: " << endl;

cin >> rangeend;

do {

if (rangebegin % 2 != 0) {

 sum += rangebegin;

  }

rangebegin++;
 
 } while (rangebegin < rangeend);

cout << "Сумма всех целых нечетных чисел равна: " << sum << endl;

}
