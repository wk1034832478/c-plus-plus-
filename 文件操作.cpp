#include<iostream>
#include <fstream>

using namespace std;

int main(void) {
	// ���ļ�д������
	ofstream of;
	of.open("test.txt", ios::app );
	of << "file cc" << endl;
	of.close();

	cout << " test " << endl;
	return 0;
}
  