#include <string.h>
#include <iostream>
using namespace std;

class MyString{
private:
	char* content;
	int len;

public:
	MyString(const char* str){
		len = strlen(str);
		content = new char[len];
	}
};

int main(){
	char* content;
	content = new char[5];
	content = "Hello";
	cout << content <<endl;
	content = new char[8];
	cout << content <<endl;
	
	return 0;
	// new char[size] 로 동적할당 다시하면 본래 있던 값들은 사라진다
}
