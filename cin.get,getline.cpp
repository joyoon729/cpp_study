#include <iostream>
using namespace std;
#define flag 2

#if flag==0
int main(){
	char c;
	cin.get(c);
	cout << c << endl;
	cout << c << endl;
	// cout << (int)c << endl;
	// hello 입력
	// h 출력
	// h 출력
}

#elif flag==1
int main(){
	char* c = new char;
	cin.getline(c,5);
	cout << c << endl;
	cout << c << endl;
	// a2345 입력
	// a234 출력
	// a234 출력
	// 배열 마지막 원소에는 \0 들어간다.
	cout << c[0] << endl; // a
	cout << c[1] << endl; // 2
	cout << c[2] << endl; // 3
	cout << c[3] << endl; // 4
	cout << c[4] << endl; // \0
	delete c;
}

#elif flag==2
int main(){
	char* c = new char;
	char a;
	cin.get(c,5);
	cout << c << endl;
	cin.ignore(100,'\n');
	// a2345 입력
	// a234 출력
	// 입력 스트림에 있는 내용 지워져서 입력 기다리고 있음
	cin.get(a);
	cout << a << endl;

}
#endif