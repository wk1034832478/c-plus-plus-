#include<iostream>

using namespace std;

class Animal{
public:
	char *kind; // 种类
	virtual void toString() = 0; // = 0 告诉编译器，函数没有主体，上面的虚函数是纯虚函数。
};
/**
* 类的声明
**/
class Cat: public Animal {
public:
	Cat() {
		kind="cat";
	}
	void toString() {
		cout << "I am cat" << endl;
	};
};

class Dog: public Animal {
public:
	Dog() {
		kind="dog";
	};
	void toString() {
		cout << "I am dog" << endl;
	};
};

int main(void) {
	
	Animal *an = new Cat(); // 返回的是对象的指针
	cout << an->kind << endl;

	an = new Dog();
	cout << an->kind << endl;

	an->toString();

	cout << " main function " << endl;

	return 0;
};
