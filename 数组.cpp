#include<iostream>
#include<string>
using namespace std;

/**
* C++ 把引用作为参数
**/
void swap( int& x, int& y);

// 函数实现，通过传递引用，改变实际的值
void swap(int& x, int& y)
{
   int temp;
   temp = x; /* 保存地址 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y  */
  
   return;
}

/**
* 对于字符串和数组的处理，c++和c语言是保持一致的！
* 但是c++语言提供了内置string类型
**/
int main(void) {
	//int nums[4][10] = { 0 };
	// 通过指针来赋值 nums[0]获取头指针
	/*
	for ( int i = 0; i < 40; i++ ) {
		*(nums[0]+i) = 520;
	}
	for (  i = 0; i < 4; i++ ) {
		for ( int j = 0; j < 10; j++ ) {
			cout << nums[i][j] << endl;
		}
	}
	*/
	string str = "hello,world";

	cout << str << endl;
	cout << "length of string:" << str.size() << endl; // 返回的长度不包括\0
	return 0;
}