#include "add.h"  // add
#include "subtract.h"  // subtract
#include "multiply.h"  // multiply
#include "divide.h"  // divide

#include <iostream>  // cout, end
#include <stdlib.h>  // atof

using namespace std;

int main(int argc, char** argv) {
	double num1 = atof(argv[1]);
	char op = *argv[2];
	double num2 = atof(argv[3]);

	switch (op) {
		case '+':
			cout << add(num1, num2) << endl;
			break;
		case '-':
			// cout << subtract(num1, num2) << endl;
			break;
		case 'x':
			// cout << multiply(num1, num2) << endl;
			break;
		case '/':
			cout << divide(num1, num2) << endl;
			break;
	}

	return 0;
}