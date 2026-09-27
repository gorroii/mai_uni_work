#include <iostream>
using namespace std;


void main(void) // Главный Метод
{
	// Инициализация переменных
	float D; // Значение Дискриминанта

	float a;
	float b;
	float c;

	float x1;// Первый Корень уравнения
	float x2;// Второй Корень уравнения

	cout << " Give values A, B and C, split the numbers with SPACE button:\t";
	cin >> a >> b >> c;
	while ((a or b or c)== 0) {
		cout << "\n Please choose values those are not 0. A, B and C is equal to = ";
		cin >> a >> b >> c;
	}
	cout << "\nA = " << a << "\t B = " << b << "\t C = " << c << endl;

	D = pow(b,2) - 4 * a * c; // Находим значение Дискриминанта

	cout << "Your Discriminant is  " << D << "\n\n" << endl;

	// Вывод значений корней Дискриминанта
	if (D >= 0)
	{
		if (D < 0)
		{
			x1 = -b / 2 * a;
			cout << "Your Discriminant is equal to zero which makes it have 1 roots \n\t x1 = " << x1 << endl;
		}
		else {

			x1 = (-b + pow(D, 0.5)) / 2;

			x2 = (-b - pow(D, 0.5)) / 2;

			cout << "Your Discriminant is bigger than zero which makes it have 2 roots \n\t x1 = " << x1 << "\t x2 = " << x2 << endl;
		}

	}
	else {
		cout << "Discriminant is less then zero, which makes the equation have zero roots";
	}




}