#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	string s1, s2;

	cout << "input1 : ";
	getline(cin, s1);
	cout << "input2 : ";
	cin >> s2;

	if(s1==s2)
		cout << "same" << endl;
	else
		cout << "different" << endl;

	char* ptr = new char[s1.size()+1];
	strcpy(ptr, s1.c_str());
	cout << "ptr : " << ptr << endl;

	cout << "|| start location : "<< s1.find("||") << endl;

	cout << "before s2 : " << s2 << endl;
	s2.erase();
	s2 = s2+"C++";
	cout << "after s2 : " << s2 << endl;

	return 0;
}