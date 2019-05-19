#include <iostream>
using namespace std;

int main(){
	enum fruit{apple=1, banana=2, cherry=3};
	fruit myfruit;

	myfruit = banana;

	cout << myfruit << endl;

	return 0;
}