#include<iostream>
using namespace std;

class Test {
	public:
		~Test() {
			cout << " test delete language" << endl;
		};
};

/**
* 内存分配
**/
int main(void) {

	double *dValue = NULL;
	dValue = new double; // 分配新的内存
	if ( !dValue ) {
		cout << " allocating storage failed " << endl;
	} else {
		cout << " allocated storage success " << endl;
	}
	
	// 使用delete回收内存（指针，回收地址需要直接知道地址）
	delete dValue;

	char* pvalue  = NULL;   // 初始化为 null 的指针
	pvalue  = new char[20]; // 为变量请求内存
	delete [] pvalue;  
	
	Test* ts = new Test[10]; // 返回的是一个指针，也就是头地址
	delete [] ts; // 释放

	cout << " dynamic storage allocate test " << endl;
	return 0;
}
  