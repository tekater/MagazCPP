#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");

	//system("color B5");
	srand(time(NULL));
	int num1 = 1 + (rand() % 10);
	int num2 = 1 + (rand() % 10);
	bool otvet = false;
	int resh;
	do {
		cout << num1 << " * " << num2 << " = ?\n";
		cin >> resh;
		if ((num1 * num2) == resh) {
			cout << "Правильно!!!\n";
			otvet = true;
		}
		else {
			system("cls");
			cout << "Неверно решили\n";
		}
	} while (otvet != true);
	

}
