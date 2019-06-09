#include <iostream>
using namespace std;

int main(){
	float num = 12.34567;
	cout.precision(2);
	cout << num << endl; // 가장 큰 자리수부터 2자리. 12

	cout.precision(3);
	cout << num << endl; // 12.3

	cout.precision(4);
	cout << num << endl; // 12.35 (반올림)

	cout.precision(5);
	cout << num << endl; // 12.346 (반올림)

	cout << fixed; // 소숫점 자릿수 기준으로 고정.
	cout.precision(1);
	cout << num << endl; // 12.3

	cout.precision(3);
	cout << num << endl; // 12.346 (반올림)

	cout.precision(5);
	cout << num << endl; // 12.34567

	cout.setf(ios::showpoint); // 끝의 0도 표시
	cout.precision(6);
	cout << num << endl; // 12.345670

	return 0;
}