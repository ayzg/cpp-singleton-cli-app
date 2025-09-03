// MyApp.cpp
#include "ISOApp.hpp"
#include <iostream>
using namespace std;

class myApp : public ISOApp {
	int run() override {
		cout << "Hello, myApp!\n";


		for (auto arg : args())
			cout << arg << endl;

		throw "alsflksjdflkja";
		return EXIT_SUCCESS;
	}
} myApp; // create a global instance of 'myApp