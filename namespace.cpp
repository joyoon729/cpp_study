#include <iostream>
using namespace std;


// namespace 는 main 함수 밖에 위치
namespace NS1{
	int number=1;
	void test(){
		cout << number << endl;
	}
}

namespace NS2{
	int number=2;
	void test(){
		cout << number << endl;
	}
}

int main(){

	NS1::test();

	using namespace NS2;
	test();

	return 0;
}