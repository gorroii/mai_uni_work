#include <iostream>
using namespace std;

void main(void) {
	int x1;
	int x2;
	int x3;
	int x4;
	int x5;
	cout << " Enter 5 int values x1 x2 x3 x4 x5 = ";
	cin >> x1 >> x2 >> x3 >> x4 >> x5; // Выбор 5 переменных для сортировки

	int arr[5] = { x1,x2,x3,x4,x5 }; // Инициализация Array

	int n = size(arr); // Размер Array
	bool HasSwapped = false; // Переменная для определения того, отсортирован ли Array
	for (int i = 0; i < n-1; i++) {
		if ((arr[i]) > (arr[i + 1])) {
			int i1 = arr[i];
			int i2 = arr[i + 1];
			arr[i] = i2;
			arr[i + 1] = i1;
			HasSwapped = true;
		}

		if (i == n - 2) {
			if (HasSwapped)
			{
				HasSwapped = false;
				i = -1; // Возвращаемся в начало списка;
				
			}
			else
			{
				break;
			}
		} 
	}

	cout << "\n\n\t Sorted array = " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];

}