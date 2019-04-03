#include<iostream>
#include<string>

using std::cout;
using std::cerr;
using std::endl;

namespace first_space {
	void fun1() {
		cout << " first space " << endl;
	}
}

/**
* 类的模板
**/
template <class T>
class Stack {
	public:
		Stack() {	
			
		};
		void test ( T& t ) {
			cout << t << endl;
		}; 
};	

using namespace first_space;

int main() {
	
	fun1();
	first_space::fun1(); // 直接通过命名空间进行调用
	
	cerr <<"Variable x = "  << endl;


	int i;
	i =  520;
	try {
		Stack<int> stack ;
		stack.test( i );
	} catch( exception const& ex) {
		cerr << ex.what() << endl;
	}

	return 0;
}