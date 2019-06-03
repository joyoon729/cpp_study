#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;

	s = "hello world";
	s.resize(15, '+');

	cout << s << endl;
	cout << s.length() << endl;
}

/*
string::resize
string 길이 할당.

resize(15, '+')
string 길이를 15로 할당,
남는 길이만큼 char '+' 로 채운다.
*/