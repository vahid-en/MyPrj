#include <iostream>
#include "myclass.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "C++ Test Class" << endl;
	{
		MyClass mc(10, "Vahid");
		cout << "Hello " << mc.getName() << endl;
		mc.printInfo();
		cout << "Goodbye!" << endl;
	}	
	cout << "Test Class End." << endl;
	return 0;
}
