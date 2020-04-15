#include <iostream>

using namespace std;

int main() {

setlocale(LC_ALL,"RU");

int a; 

int b = 2;

cout << "Введите число: " << " "; cin >> a;

if(a % b == 0 ) {

cout << "Введенное число" << " " << a << " " << "Четное" << endl;

 }

else {

cout << "Введенное число" << " " << a << " " << "Не четное" << endl;

 }

}
