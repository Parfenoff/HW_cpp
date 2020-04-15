#include <iostream>

using namespace std;

int main() {

setlocale(LC_ALL,"RU");

int a , t , choise;

cout << "Введите 2 числа:" << endl;

cin >> a >> t;

cout << "Выберете математическую операцию:" << endl;

cout << "1. Сложение" << " " << "2.Вычитание" << " " << "3.Умножение" << " " << "4.Деление" << endl;

cin >> choise;

switch(choise) {

case 1: 

cout << "Вы выбрали сложение:" << a + t << endl;

break;

case 2:

cout << "Вы выбрали вычитание:" << a - t << endl;

break;

case 3:

cout << "Вы выбрали умножение:" << a * t << endl;

break;

case 4:

cout << "Вы выбрали деление:" << a * t << endl;

break;

default:
  	
cout << "Ошибка! Такого пункта нет!" << endl;

break;

  }

}
