#include <iostream>
#include <cstring> // #include <string.h>
using namespace std;

int main(){
	char str[100], str2[100];

	cout << "first string : ";
	cin.getline(str,100);
	cout << "second string: ";
	cin.getline(str2,100);

	/*
	strcmp(str1, str2)
	str1 이 str2 보다 작으면 0보다 작은값 리턴
	str1 이 str2 와 같으면 0 리턴
	str1 이 str2 보다 크면 0보다 큰값 리턴
	
	두 문자열이 같으면 true 로 하려면 !strcmp() 를 써야한다
	*/
	if(!strcmp(str,str2)){
		cout << "same" << endl;
	}else{
		cout << "different" << endl;
	}
}