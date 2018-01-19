#include <iostream>
using namespace std;

int main() {
	int number;
	int resto;
	const int SIZE = 8;
	int binario[SIZE];
	int i = 0;

	cout << "DECIMALE A BINARIO" << endl;
	cout << "inserisci un numero da convertire (max 255):\t";
	cin >> number;

	for (; i < SIZE; i++)
	{
		binario[i] = number % 2;
		number /= 2;
		cout << binario[i];
		if (number == 1 || number == 0) {
			break;
		}
	}
	cout << endl;
	for (; i > -1; i--)
	{
		cout << binario[i];
	}
	cout << endl;

	system("pause");
	return 0;
}
