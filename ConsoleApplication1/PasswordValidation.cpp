#include <iostream>
#include <string>
#include <regex>

using namespace std;


void passwordValidation(string validateEmail) {
	string validatePassword;
	string confirmePassword;
	regex pattern(R"(^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*?&#^_])[A-Za-z\d@$!%*?&#^_]{8,}$)"); 
	int count = 3;
	
	for (int i = 0; i < 3; i++) {

		cout << "You have " << count << " chances only." << endl;
		count--;
		cout << "Enter Password, Must have"
			<< endl <<"[Uppercase, LowerCase, Numbers, Speacial Characters]: ";
		cin >> validatePassword;

		if (regex_match(validatePassword, pattern)) {

			cout << "Confirm password : ";
			cin >> confirmePassword;

			if (validatePassword == confirmePassword) {

				cout << "Email:   " << validateEmail << endl
					<< "Password: " << validatePassword;
				break;
			}
			else cout << "It doesn't match" << endl;
		}
		else cout << "Invaled Password, At Least 8 Character" << endl;
		
		//Passeord Confirmtion 
		if (i == 2) {
			cout << "Sorry, No more chances";
			return;
		}
	}
}