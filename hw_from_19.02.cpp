#include <iostream>

using namespace std;

//функция для отражения числа
int mirror(int start, int obr, int a) {
	while (start > 0) {
		a = start % 10;
		start = start / 10;
		obr = obr * 10 + a;
	}
	return obr;
}

//функиця для поиска отрицательных чисел
int search(int number) {
	while 
}

int main(){
	int x;
	int y;
	int z;
	y = z = 0;
	cin >> x;
	cout << mirror (x, y, z) << endl;
	return 0;
}
