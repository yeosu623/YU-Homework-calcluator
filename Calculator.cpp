#include "Calculator.h"
#include <iostream>
using namespace std;

double Calculator::Calculate(double x, char oper, double y) {
	if (oper == '+') {
		return x + y;
	}
	else if (oper == '-') {
		return x - y;
	}
	else if (oper == '*') {
		return x * y;
	}
	else if (oper == '/') {
		if (y == 0.0) {
			cout << "Error : can't devided by zero." << endl;
			return 0;
		}
		else {
			return x / y;
		}
	}
	else {
		cout << "Error : unknown operator. try again." << endl;
		return 0;
	}
}