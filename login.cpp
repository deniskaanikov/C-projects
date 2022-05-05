#include <iostream>
using namespace std;

int log(string login) {
	int time = 0;
	string supposedpassword;
	string password = "yalkvmom";
	while (time < 3) {
		cout << "enter password ";
		cin >> supposedpassword;
		if (supposedpassword == password) {
			cout << "sign in-done";
			time = 3;
		}
		else {
			cout << "wrong password " << "try again ";
			if (time == 2)
				throw "oops..";
		}
		time++;
	}
}

int main() {
	string login;
	cout << "welcome to out site. enter login " << " ";
	cin >> login;
	try {
		log(login);
	}
	catch (const char* fall) {
		cout << fall << " " << "enter password again in 10 minutes";
	}
}
