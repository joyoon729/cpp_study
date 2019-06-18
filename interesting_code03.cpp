/*
조건문 없이 정수의 절댓값 구하기
-- 미실행
----------------------------------------------------*/
#include <iostream>
#include <climits>
using namespace std;

unsigned my_iabs(int x){
	int const m = x >> sizeof(int) * CHAR_BIT -1;
	return (x ^ m) -m;
}


float my_fabs(float p)
{
      (int&)p &= 0x7FFFFFFF;
      return p;
}

unsigned abss(int z){
		return unsigned(z);
}
int main(){
	int x = -3;
	float y = -3;
	printf("x = %d, my_iabs(x) = %d\n", x, my_iabs(x));
	printf("y = %f, my_fabs(y) = %f\n", y, my_fabs(y));
	printf("x = %d, abss(x) = %d\n", x, abss(x));
}