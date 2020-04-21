#include <iostream>

using namespace std;

int main() {

setlocale(LC_ALL,"RU");

int widht, height;

 cout << "Введите ширину прямоугольника " << endl;

cin >> widht;

 cout << "Введите высоту прямоугольника " << endl;

cin >> height;


for (int i = 0 ; i < height; i++) {

 cout << "*";

for (int j = 0 ; j < widht; j++) {

 cout << "*";

  }

 cout << endl;

 }

 cout << endl;

}
