#include <iostream>
using namespace std;

class A{
private:
	int a;
public:
	void set(int _a){
		a = _a;
	}
	void printA(){
		cout << a << endl;
	}
	void return_printA(){
		return printA();
	}
};

int main(){
	A a;
	a.set(5);
	a.return_printA();

	return 0;
}