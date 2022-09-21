// Program that has user select a mathematical operation to perform
// then displays the result
// Repeats until user enters 0
// David Tinley
// 09/16/2022

#include <iostream>
#include <cmath> // Library for math functions
#include <cstdlib>

using namespace std;

int main() {

	int selection; // global variable to be used in do - while loop

	do {
		cout << "1. Absolute Value\n";
		cout << "2. Square Root\n";
		cout << "3. Floor\n";
		cout << "4. Power\n";
		cout << "0. To Quit\n";
		cout << "\n";
		cout << "Please select a mathematical operation to compute:\n";

		cin >> selection; // User input for computation selection
		cout << "\n";

		double input_number; // User input number to be computed

		if (selection != 4 && selection != 0) {

			if (selection == 1) { // Absolute Value computation
				cout << "Please enter a number to find it's absolute value:\n";
				cin >> input_number;
				input_number = abs(double(input_number));
				cout << "The absolute value is " << input_number << "\n";
				cout << "\n";
			}
			else if (selection == 2) { // Square Root computation
				cout << "Please enter a number to find it's square root:\n";
				cin >> input_number;
				input_number = sqrt(double(input_number));
				cout << "The square root is " << input_number << "\n";
				cout << "\n";
			}
			else if (selection == 3) { // Floor computation (rounding value down to previous whole number)
				cout << "Please enter a number with a decimal point to find it's floor:\n";
				cin >> input_number;
				input_number = floor(double(input_number));
				cout << "The floor is " << input_number << "\n";
				cout << "\n";
			}
			else {
				cout << "Invalid selection...\n";
				return 0;
			}
		}
		else if (selection != 0) { // Power or "Exponent" computation

			cout << "Please enter a base number:\n";
			cin >> input_number;

			cout << "Please enter an exponent:\n";
			double input_exponent;
			cin >> input_exponent;

			double output_number = pow(input_number, input_exponent);

			cout << "The result is " << output_number << "\n";
			cout << "\n";
		}
	} while (selection != 0); // When user enters 0 the loop terminates ending the program
	cout << "Good Bye!\n";
	return 0;
}