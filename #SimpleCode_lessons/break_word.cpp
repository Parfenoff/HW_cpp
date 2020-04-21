#include <iostream>

using namespace std;

int main() {

setlocale(LC_ALL,"RU");

cout << "начало цикла" << endl;

for ( int i = 0; i < 10; i++) {

cout << "переменная i = " << i << endl;

if (i == 5) {

break;

  }

 }

cout << "конец цикла" << endl;

}
