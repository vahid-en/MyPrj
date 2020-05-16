#include "myclass.h"

MyClass::MyClass(int _id, string _name) : 
	name(_name),
	id(_id) {
}
MyClass::~MyClass() {
	cout << "MyClass destructor" << endl;
}
string MyClass::getName() const {
	return name;
}
void MyClass::printInfo() const {
	cout << id << ": " << name << endl;
}