#include <iostream>
using namespace std;


int main(){
	int num[5]={0,1,2,3,4};
	char str[5]={'a','b','c','d','e'};
	int *p;
	char *c;
	int i;

	p=num;
	c=str;
	cout << p[1] << endl;
	cout << (p+1) << endl;
	cout << (p+2) << endl;
	cout << *(p+2) << endl;
	cout << c << endl;
	cout << c+2 << endl;

	return 0;
}