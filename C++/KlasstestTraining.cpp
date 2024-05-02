#if 1
#include <iostream>
using namespace std;

class MyClass {
public:
	int myNum;
	static int myStaticNum;
	void myFunction() {
		cout << "Hello from MyClass!" << endl;
	}
	static void myStaticFunction() {
		cout << "Hello from MyClass static function!" << endl;
	}
};

int MyClass::myStaticNum = 0;

int main() {
	int x = 10;
	int* ptr = &x; // pointer variable
	int& ref = x; // reference variable

	cout << "x = " << x << endl; // x = 10
	cout << "ptr = " << ptr << endl; // ptr = 00000056B173F7E4
	cout << "ref = " << ref << endl; // ref = 10
	cout << "------------------------------------------------------------" << endl;

	*ptr = 20; // change the value of x using the pointer

	cout << "x = " << x << endl;
	cout << "ptr = " << ptr << endl;
	cout << "ref = " << ref << endl;
	cout << "------------------------------------------------------------" << endl;


	ref = 30; // change the value of x using the reference

	cout << "x = " << x << endl;
	cout << "ptr = " << ptr << endl;
	cout << "ref = " << ref << endl;
	cout << "------------------------------------------------------------" << endl;


	MyClass myObject;
	myObject.myNum = 15;
	MyClass::myStaticNum = 10;

	myObject.myFunction();
	MyClass::myStaticFunction();

	cout << "myObject.myNum: " << myObject.myNum << endl;
	cout << "MyClass::myStaticNum: " << MyClass::myStaticNum << endl;
	cout << "------------------------------------------------------------" << endl;

	MyClass myObj;
	MyClass* myPointer = &myObj;

	myPointer->myNum = 65;

	cout << "myObj.myNum: " << myObj.myNum << endl;
	cout << "------------------------------------------------------------" << endl;


	return 0;
}
#endif
