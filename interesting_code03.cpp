/*
조건문 없이 정수의 절댓값 구하기
-- 미실행
----------------------------------------------------*/
#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

unsigned abs(int x){
	int const m = x >> sizeof(int) * CHAR_BIT -1;
	return (x ^ m) -m;
}

int main(){
	int x = -3;

	cout << "x = " << x << endl;
	cout << "abs(x) = " << abs(x) << endl;
}