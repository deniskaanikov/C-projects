#include <iostream>
#include <string>

using namespace std;

//функция для отражения числа
int mirror(int start) {
	int obr = 0;
	int a = 0;
	while (start > 0) {
		a = start % 10;
		start = start / 10;
		obr = obr * 10 + a;
	}
	return obr;
}

//функиця для поиска неположительных чисел
/*
int search(string number) {
	int counter = 0;
	string number = "  ";
	while (number != "") {
		cin >> number >> endl;
		int n = stoi(number);
		if (n <= 0) {
			counter = 1;
		}
	}
	return counter;
} 
*/

int main(){
	int x;
	cin >> x;
	cout << mirror (x) << endl;
	//cout << search(h, c);
	return 0;
}
