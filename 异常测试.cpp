#include<iostream>
using namespace std;

/**
* �쳣����
**/
int main(void) {

	try {
		throw "I throw a exception !";
	} catch(char *exceptions) {
		cout << exceptions << endl;
	}
	
	cout << " exception " << endl;
	return 0;
}
  