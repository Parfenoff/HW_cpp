#include <iostream>

using namespace std;

int main() {

setlocale (LC_ALL,"RU");

int symbolcount;

char symbol;

int linetype;

int index = 0;

cout << " Введите количество символов: " << endl;

cin >> symbolcount;

cout << " Введите символ: " << endl;

cin >> symbol;

cout << " Введите тип линии: " << endl << endl;
 
cout << " 1 - горизонтальный тип линии " << endl << endl ;

cout << " 2 - вертикальный тип линии " << endl << endl ;     

cin >> linetype;

while(index < symbolcount) {

if (linetype == 1) {

cout << symbol << endl;
 
  }

if (linetype == 2) {

cout <<  symbol;

  }

index++;

 }  

cout << endl << endl;

}
