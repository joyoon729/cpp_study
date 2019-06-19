/*
조건문 없이 정수의 절댓값 구하기
----------------------------------------------------*/
#include <iostream>
#include <bitset>
#include <climits>
using namespace std;

unsigned my_iabs(int x){
	/* '>>' 오른쪽 시프트 연산자
	>> 는 부호비트(MSB) 값에 따라 채워지는 값이 달라진다.
	MSB 가 1이면 왼쪽비트들이 1로,
	MSB 가 0이면 왼쪽비트들이 0으로 채워진다.
	------------------------------------------------*/
	int const m = x >> sizeof(int) * CHAR_BIT -1;
	return (x ^ m) -m;
}


float my_fabs(float p){
	(int&)p &= 0x7FFFFFFF;
	return p;
}

int main(){
	int x = -3;
	float y = -3;
	printf("x = %d, my_iabs(x) = %d\n", x, my_iabs(x));
	printf("y = %f, my_fabs(y) = %f\n", y, my_fabs(y));
}

