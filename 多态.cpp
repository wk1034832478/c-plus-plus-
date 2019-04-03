#include<iostream>

using namespace std;

class Animal{
public:
	char *kind; // ����
	virtual void toString() = 0; // = 0 ���߱�����������û�����壬������麯���Ǵ��麯����
};
/**
* �������
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
	
	Animal *an = new Cat(); // ���ص��Ƕ����ָ��
	cout << an->kind << endl;

	an = new Dog();
	cout << an->kind << endl;

	an->toString();

	cout << " main function " << endl;

	return 0;
};
