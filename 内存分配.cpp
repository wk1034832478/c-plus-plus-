#include<iostream>
using namespace std;

class Test {
	public:
		~Test() {
			cout << " test delete language" << endl;
		};
};

/**
* �ڴ����
**/
int main(void) {

	double *dValue = NULL;
	dValue = new double; // �����µ��ڴ�
	if ( !dValue ) {
		cout << " allocating storage failed " << endl;
	} else {
		cout << " allocated storage success " << endl;
	}
	
	// ʹ��delete�����ڴ棨ָ�룬���յ�ַ��Ҫֱ��֪����ַ��
	delete dValue;

	char* pvalue  = NULL;   // ��ʼ��Ϊ null ��ָ��
	pvalue  = new char[20]; // Ϊ���������ڴ�
	delete [] pvalue;  
	
	Test* ts = new Test[10]; // ���ص���һ��ָ�룬Ҳ����ͷ��ַ
	delete [] ts; // �ͷ�

	cout << " dynamic storage allocate test " << endl;
	return 0;
}
  