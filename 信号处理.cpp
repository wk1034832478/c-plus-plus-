#include<iostream>
#include<csignal>

using namespace std;

void signalHandler ( int signum ) {
	cout << "Interrupt signal (" << signum << ") received.\n";
 
    // �����ر�
    // ��ֹ����  
 
   exit(signum);  
}

void signalHandler2 ( int signum ) {
	cout << "test signal (" << signum << ") received.\n";
 
    // �����ر�
    // ��ֹ����  
 
   exit(signum);  
}

int main() {
	signal( SIGINT, signalHandler );
	signal( SIGTERM, signalHandler2 );
	while ( true ) {
		// cout << "sleeping..." << endl;
		raise( SIGTERM ); // ���������ź�
	}
	return 0;
}
