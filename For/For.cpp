#include<iostream>
using namespace std;
void for1();
void for3();
void for10();
void for15();
void for20();

int main() {
	for20();
}
void for1() {
	int K, N, I=1;
	cout << "Enter numbers N and K:";
	cin >> K >> N;
	for (I; I <= N; I++) {
		cout << K<<endl;
	}
}
void for3() {
	int A, B;
	cout << "Enter numbers A-min B-max:";
	cout << "A:";
	cin >> A;
	cout << "B:";
	cin >> B;
	for (A += 1; A < B; ++A) {

		cout << A << endl;
	}
}
void for10() {
	int num1, num2 = 1;
	float sum = 0;
	cout << "Enter the number:";
	cin >> num1;
	for (num2; num2 <= num1; num2++) {
		sum += 1 /(float) num2;
	}
	cout << sum;
}
void for15() {
	int A, N, i=1, res=1;
	cout << "Enter the number:";
	cin >> A;
	cout << "Enter the exponent:";
	cin >> N;
	for(i;i<=N;i++){
		res *= A;

	}
	cout << res;
}
void for20() {
	using namespace std;
	int number, i = 1;
	cout << "Enter the number N:";
	cin >> number;
	long int factorial=0, number2=1;

	for (i; i <=number; ++i) {
		number2 = number2 * i;
		factorial += number2;
	}
	cout <<"1! + 2! + 3! + ... + N!="<< factorial;

}