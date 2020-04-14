#include <iostream>

using namespace std;

int main() {

setlocale(LC_ALL,"RU");

float a,b,c;

cout << "Введите значения переменных a,b,c" << endl;

cin >> a >> b >> c;

cout << "Сумма переменных равна:" << a + b + c << endl;

cout << "Произведение переменных равно:" << a * b * c << endl;

cout << "Среднее арифметическое переменных:" << (a + b + c) / 3 << endl; 

cout << "Частное переменных равно:" << a/b/c << endl;

}
