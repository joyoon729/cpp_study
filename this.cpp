#include <iostream>
using namespace std;

class Test{
	int value = 0;

	public:
		Test& get_clone(){
			return *this;
		}
		void plus(){
			this->value++;
		}
		void print(){
			cout<<this->value<<endl;
		}
};

int main(){
	Test test, test2;
	test.print();
	test.plus();
	test.print();
	cout << endl;
	test2 = test.get_clone();
	test2.plus();
	test2.print();
}

/* 결과창
0
1

2

객체 레퍼런스 (Test& 를 가리킬땐 *this 를 리턴하여야 한다.)
클래스 내에서 자기 자신 멤버변수를 나타낼 떈 this->variable 이런식으로 한다.
*/