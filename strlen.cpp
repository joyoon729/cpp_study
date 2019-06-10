#include <iostream>
#include <cstring> // #include <string.h>

int main(){
	char *s1 = "hello";
	char s2[10] = "hello";

	cout << strlen(s1) << endl; // 글자수 5 출력
	cout << strlen(s2) << endl; 
	// 배열 s2에 크기 10 할당했지만 글자수 5개이므로 5출력
}