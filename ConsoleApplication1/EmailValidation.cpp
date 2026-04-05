#include <iostream>
#include <regex>
#include "Log In.hpp"

using namespace std;


string emailValidation() {
	string validateEmail;
	regex pattern(R"(^[\w\-\.]+@([\w\-]+\.)+[\w\-]{2,4}$)");
	int count = 3;

	for (int i = 0; i < 3; i++) {

		cout << "Warning, you have" << count << "chances only." << endl;
		count--;
		cout << "Enter your email: ";
		cin >> validateEmail;

		if (regex_match(validateEmail, pattern)) {

			cout << endl;
			break;
		}
		else cout << "Invalid Email" << endl;

		if (i == 2) {

			cout << "Sorry, No more chances";
			return validateEmail;
		}
	}
}