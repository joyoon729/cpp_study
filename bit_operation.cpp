#include <iostream>
using namespace std;

int main(){

	int n = 10;

	cout << "n=10" << endl;

	// bit 연산. 왼쪽 1칸 이동시킬때마다 *2
	cout << (n<<2) << endl;

	// bit 연산. 오른쪽 1칸 이동시킬대마다 /2
	cout << (n>>1) << endl;

	return 0;
}