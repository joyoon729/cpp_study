#include <iostream>
#include <stdlib.h>
using namespace std;

class calc{
private:
	int input;
public:
	int sum(int a, int b);
	int sub(int a, int b);
	int mul(int a, int b);
	int div(int a, int b);
	void mainCalc();
	int selectOp();
	bool calcOperation(int selected, bool isEnd);
};

int calc::sum(int a, int b){
	return a+b;
}
int calc::sub(int a, int b){
	return a-b;
}
int calc::mul(int a, int b){
	return a*b;
}
int calc::div(int a, int b){
	return a/b;
}
void calc::mainCalc(){
	bool isEnd=false;
	system("clear");
	while(isEnd==false){
		cout << "  Menu  " << endl;
		cout << "--------" << endl;
		cout << " 1: add " << endl;
		cout << " 2: sub " << endl;
		cout << " 3: multiply " << endl;
		cout << " 4: divide " <<endl;
		cout << " 5: stop " << endl;
		isEnd = calcOperation(selectOp(), isEnd);
	}
}
int calc::selectOp(){
	int selected;
	cin >> selected;
	return selected;
}
bool calc::calcOperation(int selected, bool isEnd){
	int a, b;
	switch(selected){
		case 1:
			cout << "input number 1 : ";
			cin >> a;
			cout << "input number 2 : ";
			cin >> b;
			system("clear");
			cout << "Answer : " << sum(a,b) << endl;
			break;
		case 2:
			cout << "input number 1 : ";
			cin >> a;
			cout << "input number 2 : ";
			cin >> b;
			system("clear");
			cout << "Answer : " << sub(a,b) << endl;
			break;
		case 3:
			cout << "input number 1 : ";
			cin >> a;
			cout << "input number 2 : ";
			cin >> b;
			system("clear");
			cout << "Answer : " << mul(a,b) << endl;
			break;
		case 4:
			cout << "input number 1 : ";
			cin >> a;
			cout << "input number 2 : ";
			cin >> b;
			system("clear");
			cout << "Answer : " << div(a,b) << endl;
			break;
		default:
			cout << "stop..." << endl;
			isEnd = true;
			break;
	}
	return isEnd;
}

int main(){
	calc c;
	c.mainCalc();
}