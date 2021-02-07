#include <iostream>

double divide(double num1, double num2) {
	if (num2 == 0.0) {
		std::cout << "Cannot divide by zero! Returning 0.0" << std::endl;
		return 0.0;
	}

	return num1 / num2;
}
