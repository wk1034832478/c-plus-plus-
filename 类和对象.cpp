#include<iostream>
#include<cmath>
using namespace std;
/**
* ��ht * breadth;
}������
**/
class Box {
	public:	
		Box(void) {
			cout << "Box's constructor function " << endl;
		};
		~Box() {
			cout << " final function " << endl;
		};
		double length; // ����
		double breadth; // ���
		double height; // �߶�
		double getVolume(void); // ���壬�ⲿʵ��
		char* toString() {
			return "��������";
		}
		void test() {
			cout << "�������" << endl;
		}
		// �����������
		void operator+( const Box b ) {
			cout << " + operator " << endl;
		}
		void operator-( const Box b ) {
			cout << " - operator " << endl;
		}
};


// ����ʵ��
double Box::getVolume(void) {
	return length * height * breadth;
}


/**
* ���м̳�,һ���� public private protected
�̳з�ʽ�����˼̳еĳ�Ա���ڵ�ǰ���Ȩ��
**/
class BoxChild: public Box{
	
};

// �������ô���
void updateBoxLength( Box box ) {
	box.length = 110;
};
// ��ǰ�߳̿��õı���������ط���
// abc = 520;


void test( void (*fun)()) {
	fun();
}


int main(void) {
	Box box1;
	box1 + box1;
	/**
	Box box1; // ����Ҫ��java��������Ҫnew����
	box1.length = 520;
	
	cout << box1.length << endl;
	cout << box1.getVolume() << endl;
	cout << box1.toString() << endl;

	*/
	
	// BoxChild bc1;
	// bc1.test();

	/*
	for( ; ; )
	{
		printf("This loop will run forever.\n");
	}
	for ( int i = 0; i < 100; i++ )
	{
		cout << " "<< i << " " ;
	}
	*/
	/*
	Box b;
	updateBoxLength( b );
	cout << b.length;
	*/
	
	/*
	cout << sin(1.57) << endl;
	cout << cos(1.57) << endl;
	cout << tan(1.57) << endl;
	cout << sqrt( 2 ) << endl;
	cout << abs( -4 ) << endl;
	*/

	cout << endl;
	return 0;
}