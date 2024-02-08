#include <iostream>

using namespace std;

bool primeNum(int a, bool res) {
	
	for (int i = 2; i < 5; i++) {
		res = true;
		if (a % i == 0) {
			res = false;
			break;
		}
	}
	return res;
}

int main() {
	int a;
	bool res;
	string msg;

	do {
		cout << "Input your number";
		cin >> a;
	} while (a < 0);

	msg = primeNum(a, res) == true ? "It is prime number" : "It is not prime number";

	cout << msg;
	return 0;
}