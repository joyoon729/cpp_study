#include <iostream>
using namespace std;

int main(){
	/* 빠른 입출력 */
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char a='a';

	for(int i=0; i<10000; i++){
		cout << a << "\n"; // 빠른 입출력
	}
	return 0;
}

/*
[빠른 입출력]
cin.tie(NULL);
ios::sync_with_stdio(false);
endl 대신 "\n" 사용한다.
*/