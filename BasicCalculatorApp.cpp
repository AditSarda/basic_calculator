#include <iostream>
using namespace std;

int main() {

	char operation;
	double num1, num2;

	cout << "Enter operator: + , - , * , / :";
	cin >> operation;

	cout << "Enter the 1st Number:";
	cin >> num1;

	cout << "Enter the 2nd Number:";
	cin >> num2;

	switch (operation) {
	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2;
		break;
	case'-':
		cout << num1 << "-" << num2 << "=" << num1 - num2;
		break;
	case'*':
		cout << num1 << "*" << num2 << "=" << num1 * num2;
		break;
	case'/':
		cout << num1 << "/" << num2 << "=" << num1 / num2;
		 break;
	default:
		cout << "Error!Incorrect operation! Please enter an appropriate value to use the calculator";
		break;
	}


}
