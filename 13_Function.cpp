#include <iostream>
using namespace std;

	void parent();
	void child();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	parent();
	child();
	return 0;
}


void parent(){
	cout<<"Parent method"<<endl;
}

void child(){
	cout<<"Child method"<<endl;
}
