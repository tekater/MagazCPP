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


	cout << "Задание 1\n\n";
	int number;
	cout << "Введите границу Первую границу:\n";
	int ot; cin >> ot;
	cout << "Введите границу Вторую границу:\n";
	int Do; cin >> Do;
	bool answer = false;
	do {
		cout << "Введите число" << endl;
		cin >> number;
		if (ot > Do) {
			if (number >= Do && number <= ot) {
				cout << "Число в границе\n";
				answer = true;
			}
			else {
				cout << "Число не в границе\n";
			}
		}

		if (Do > ot) {
			if (number >= ot && number <= Do) {
				cout << "Число в границе\n";
				answer = true;
			}
			else {
				cout << "Число не в границе\n";
			}
		}
	} while (answer != true);



	cout << "\nЗадание 2\n\n";
	
		int tovar;
		double chek = 0;
		int milk = 8;
		int bread = 5;
		int water = 5;
		int chocolate = 4;
		int YES;
		double skid;
		int client = 0;
		double full = 0;
		do {
		do {
			cout << "\nСписок товаров Новогодних товаров\n[1] - Молоко\n[2] - Хлеб\n[3] - Вода\n[4] - Шоколадка\n";
			cout << "[5] - Завершить покупу\n";
			cin >> tovar;
			switch (tovar) {
			case 1:
				system("cls");
				cout << "Молоко стоит 100р\n";
				if (milk != 0) {
					chek = chek + 100;
					cout << "Вы взяли молоко\n";
					milk--;
				}
				else {
					cout << "Молоко закончилось\n";
				}
				break;
			case 2:
				system("cls");
				cout << "Хлеб стоит 50р\n";
				if (bread != 0) {
					chek = chek + 50;
					cout << "Вы взяли хлеб\n";
					bread--;
				}
				else {
					cout << "хлеб закончился\n";
				}
				break;
			case 3:
				system("cls");
				cout << "Вода стоит 50р\n";
				if (water != 0) {
					cout << "Вы взяли воду\n";
					chek = chek + 50;
					water--;
				}
				else {
					cout << "Вода закончилась\n";
				}
				break;
			case 4:
				system("cls");
				cout << "Шоколадка стоит100р\n";
				if (chocolate != 0) {
					cout << "Вы взяли шоколадку\n";
					chek = chek + 100;
					chocolate--;
				}
				else {
					cout << "Шоколад закончился\n";
				}
				break;
			case 5:
				cout << "Сумма вашей покупки: " << chek << "руб\n";

				cout << "У вас есть скидка ?\n[1] - да\n[2] - нет\n";
				cin >> YES;

				if (YES == 1) {
					cout << "Введите вашу скидку:\n";
					cin >> skid;
					skid = skid / 100;
					chek = chek - (chek * skid);
					cout << "Со скидкой " << skid * 100 << "% к оплате " << chek << "руб.\n";

				}
				else if (YES == 2) {
					cout << "К оплате " << chek << "руб.\n";
				}
				else {
					cout << "Произошла ошибка";
				}
					full = full + chek;
				break;
			}

		} while (tovar != 5);
		chek = 0;
		cout << "Есть ещё клиент ?\n[1] - да\n[2] - нет\n";
		cin >> client;
		if (client == 2) {
			cout << "Вся выручка: " << full << "руб";
		}
	} while (client != 2);
}
