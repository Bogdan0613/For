#include <iostream>
#include<cmath>
using namespace std;
void while7();
void while10();
void while15();
void while17();
void while20();
int main() {
	while20();
}
void while7() {
	int N;
	int K = 0;
	cout << "Enter the number:";
	cin >> N;
	while (K * K <= N) {
		K++;
	}
	cout << "The smallest number in ^2 that is more than number you've entered is" << K;
}
void while15() {
	int firstDeposit = 1000;
	int P;
	int month = 0;
	cout << "Enter the month per cent for the deposit: ";
	cin >> P;
	while (firstDeposit < 1100) {
		firstDeposit = firstDeposit + firstDeposit * P / 100;
		month++;
	}
	cout << firstDeposit << endl;
	cout << month;
}
void while17() {
	long int number;
	cout << "Enter the number:";
	cin >> number;
	cout << "New number:" << endl;
	while (number != 0) {
		cout << number % 10;
		number = number / 10;
	}
}
void while10() {
	int N;
	int K = 1;
	double exponent = 0;
	cout << "Enter the number:";
	cin >> N;
	while (pow(3, K) < N) {
		K++;
	}
	K--;
	cout << "Max number k when 3^k < than the number you've entered: " << K;

}
void while20() {
	int number;
	int rest;
	int two = 0;
	cout << "Enter the number:";
	cin >> number;
	while (number != 0) {
		rest = number % 10;
		number = number / 10;
		if (rest == 2) {
			two = 1;

		}

	}if (two == 1) {
		cout << "The number you've entered has 2 in it!";
	}
	else {
		cout << "Your number doesn't have 2 in it";
	}
}