#include <iostream>
using namespace std;

int main(){
	std::string s;
	while(true){

		cout << "loop start"<<endl;
		
		std::cin >> s;
		cin.clear();
		cin.ignore(100,'\n');
		std::cout << "word : "<< s <<std::endl;
	}
}

/*
cin.clear() cin 플래그 비트 초기화
cin.ignore(100, '\n') 개행문자 나올때까지 버퍼에 있는 문자열 비우기(최대 100자)
*/