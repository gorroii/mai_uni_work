#include <iostream>
using namespace std;

int main() {
	srand(time(0));
	int matrix[3][3] ={ 
		{ rand() % 11 , rand() % 11 , rand() % 11 },
		{ rand() % 11 , rand() % 11 , rand() % 11 },
		{ rand() % 11 , rand() % 11 , rand() % 11 }
	}; // Генерация случайной матрицы 3 x 3 ( 3-его порядка )
	float det; 
	for (int i = 0; i < 3;i++) {
		cout << "\n\t";
		for (int j = 0; j < 3; j++) {
			cout << "  " << matrix[i][j];
		}
	} // Вывод матрицы в консоль

	float diagmain = matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1]; 
	float diagother = matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2];
	det = diagmain - diagother;

	cout << "\n\t" << det; // Вывод значения Детерминанта ( Определителя )

	return 0;
	
}