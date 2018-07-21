#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x,y,*p;
	x=5;
	p=&x;//x and p have same address ,also have same value
	y=*p;//y and p holding different address and same value
	
	printf("%d %p\n",x,x);

	printf("%d %p\n",y,y);

	printf("%d %p\n",*p,p);
	return 0;
}
