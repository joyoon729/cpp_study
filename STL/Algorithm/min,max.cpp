/* algorithm::min
   algorithm::max

사용법은 간단.
두 값을 비교해 작은것(min) 과 큰것(max) 를 리턴한다.

삼항연산자
	a>b ? a : b;
와 동일하다.

template <class T> const T& max (const T& a, const T& b);
이므로 비교하는 두 값의 자료형이 같아야 한다...
**************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a=1, b=2;
	float c=1.5, d =2.5;
	

	// 기본 사용법 (min도 동일)
	cout << max(a,b) << endl;

	// 자료형이 다르면 불가능!!!
	// d 값 float 형으로 리턴
	cout << max(c,d) << endl;

	return 0;
}