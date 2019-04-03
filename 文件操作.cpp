#include<iostream>
#include <fstream>

using namespace std;

int main(void) {
	// 向文件写入内容
	ofstream of;
	of.open("test.txt", ios::app );
	of << "file cc" << endl;
	of.close();

	cout << " test " << endl;
	return 0;
}
  