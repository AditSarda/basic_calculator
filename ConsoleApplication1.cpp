#include <iostream>
using namespace std;

int main() {
	char op;
	double num1, num2;

	beginning:
	cout << "Enter the first number:" << endl;
	cin >> num1;

	cout << "Enter the second number:" << endl;
	cin >> num2;

	cout << "Enter the operator : + , - , * , / ." << endl;
	cin >> op;

	switch (op) {
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;
	case '/':
		cout << num1 << " / " << num2 << " = " << num1 / num2<<endl;
		break;
	default:
		cout << "You have typed the wrong character" << endl;
	}

	char decision;
	cout << "Do you want to continue that program?(Y/N)" << endl;
	cin >> decision;

	if (decision == 'Y'|| decision == 'y') {
		goto beginning;
	}
	else {
		system("cls");
		cout << "Program Ended";
	}

}
