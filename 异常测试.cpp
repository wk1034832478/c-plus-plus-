#include<iostream>
using namespace std;

/**
* “Ï≥£≤‚ ‘
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
  