#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	vector<int> vs;
	vs.push_back( 520 );

	cout << *(vs.begin()) << endl;
	return 0;
}