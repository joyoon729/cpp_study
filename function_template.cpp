#include <iostream>
#include <string.h>
using namespace std;

template <typename T> T square(T x,T y){
	T x1 = x;
	for(int i=0; i<y-1; i++){
		x*=x1;
	}
	return x;
}

template <typename T> T myplus(T x, T y){
	return x+y;
}

template <typename T1, typename T2> void print(const T1 str1, const T2 str2){
	int length = strlen(str1)+strlen(str2);
	char* content = new char[length];
	
	int i=0;
	for(i; i<strlen(str1); i++){
		content[i] = str1[i];
	}
	for(i; i<length; i++){
		content[i] = str2[i-strlen(str1)];
	}
	content[i] = 0;

	for(i=0; i<length; i++){
		cout << content[i];
	}
	cout << endl;
}


int main(){
	cout << square(2.0,3.1) << endl;
	cout << myplus(1+1) << endl;
	print("123","4567");
	return 0;
}