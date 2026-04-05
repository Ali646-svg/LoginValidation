#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#pragma once
#include "C:\Users\ASUS\source\repos\ConsoleApplication1\ConsoleApplication1\Log In.hpp";

using namespace std;

int main() {
	string email = emailValidation();
	passwordValidation(email);
	return 0;
}

