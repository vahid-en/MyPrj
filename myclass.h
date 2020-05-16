#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <iostream>
#include <string>
using namespace std;

class MyClass {
	private:
		int id;
		string name;
	public:
		MyClass(int, string);
		~MyClass();
		string getName() const;
		void printInfo() const;
};

#endif