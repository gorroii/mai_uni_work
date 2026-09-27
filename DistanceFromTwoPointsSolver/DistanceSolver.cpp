#include <iostream>
using namespace std;

int main() {

	// Инициализация переменных
	int x1;
	int x2;

	int y1;
	int y2;

	// Введение координат двух точек
	cout << "\tEnter X and Y coordinates of a first point: ";

	cin >> x1 >> y1;
	cout << "\n\nX1 = " << x1 << "\t Y1 = " << y1;

	cout << "\n\n\tEnter X and Y coordinates of a second point: ";

	cin >> x2 >> y2;
	cout << "\n\nX2 = " << x2 << "\t Y2 = " << y2;

	//Нахождение расстояния между двумя точками

	float dist;
	
	dist = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5); // корень суммы между квадратом разности двух X координат  точек и квадратом разности двух Y координат точек

	cout << "\n\n\tDistance from first point to second is  " << dist << endl;
	return 0;

}