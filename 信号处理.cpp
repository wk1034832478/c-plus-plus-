#include<iostream>
#include<csignal>

using namespace std;

void signalHandler ( int signum ) {
	cout << "Interrupt signal (" << signum << ") received.\n";
 
    // 清理并关闭
    // 终止程序  
 
   exit(signum);  
}

void signalHandler2 ( int signum ) {
	cout << "test signal (" << signum << ") received.\n";
 
    // 清理并关闭
    // 终止程序  
 
   exit(signum);  
}

int main() {
	signal( SIGINT, signalHandler );
	signal( SIGTERM, signalHandler2 );
	while ( true ) {
		// cout << "sleeping..." << endl;
		raise( SIGTERM ); // 主动发出信号
	}
	return 0;
}
