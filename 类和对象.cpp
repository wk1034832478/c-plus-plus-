#include<iostream>
#include<cmath>
using namespace std;
/**
* 定ht * breadth;
}义类型
**/
class Box {
	public:	
		Box(void) {
			cout << "Box's constructor function " << endl;
		};
		~Box() {
			cout << " final function " << endl;
		};
		double length; // 长度
		double breadth; // 宽度
		double height; // 高度
		double getVolume(void); // 定义，外部实现
		char* toString() {
			return "我是箱子";
		}
		void test() {
			cout << "测试输出" << endl;
		}
		// 重载运算符号
		void operator+( const Box b ) {
			cout << " + operator " << endl;
		}
		void operator-( const Box b ) {
			cout << " - operator " << endl;
		}
};


// 方法实现
double Box::getVolume(void) {
	return length * height * breadth;
}


/**
* 公有继承,一共有 public private protected
继承方式决定了继承的成员的在当前类的权限
**/
class BoxChild: public Box{
	
};

// 属性引用传参
void updateBoxLength( Box box ) {
	box.length = 110;
};
// 当前线程可用的变量（这个地方）
// abc = 520;


void test( void (*fun)()) {
	fun();
}


int main(void) {
	Box box1;
	box1 + box1;
	/**
	Box box1; // 不需要像java那样还需要new出来
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