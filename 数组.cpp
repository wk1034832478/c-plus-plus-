#include<iostream>
#include<string>
using namespace std;

/**
* C++ ��������Ϊ����
**/
void swap( int& x, int& y);

// ����ʵ�֣�ͨ���������ã��ı�ʵ�ʵ�ֵ
void swap(int& x, int& y)
{
   int temp;
   temp = x; /* �����ַ x ��ֵ */
   x = y;    /* �� y ��ֵ�� x */
   y = temp; /* �� x ��ֵ�� y  */
  
   return;
}

/**
* �����ַ���������Ĵ���c++��c�����Ǳ���һ�µģ�
* ����c++�����ṩ������string����
**/
int main(void) {
	//int nums[4][10] = { 0 };
	// ͨ��ָ������ֵ nums[0]��ȡͷָ��
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
	cout << "length of string:" << str.size() << endl; // ���صĳ��Ȳ�����\0
	return 0;
}