#include <iostream>
#include "myclass.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Hello" << endl;
	{
		MyClass mc(10, "Vahid");
		cout << mc.getName() << endl;
		mc.printInfo();
	}	
	cout << "Goodbye" << endl;
	return 0;
}