#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> alph = { "I", "IV","V", "IX","X", "XL","L", "XC","C", "CD", "D", "DM", "M"};

	vector<int> num = { 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000 };

	int target;



	string roman = "";

	cout << "Enter an Int: ";
	cin >> target;

	while (target == 0) {

		cout << "Invalid Number. Please enter an Int: ";
		cin >> target;

	} // target == 0 check

	bool negative = (target < 0); // sign check
	target = abs(target);


	for (int i = size(alph) - 1; i > -1; --i) {
		if (target - num[i] >= 0) {
			roman += alph[i];
			target -= num[i];
			i++;
		}
	}
	if (negative) {
		roman = "-" + roman;

	} // don't forget the sign
	cout << "\t" << roman << endl;

}