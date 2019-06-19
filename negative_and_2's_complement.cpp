/* 음수 표현과 2의 보수법
음수 표현을 위해 2의 보수법을 사용한다 (2's complement)
------------------------------
[2's complement 구하기]
0101 original (5)
----
1010 reverse bit
----
1011 reverse bit +1 (-5)
------------------------------

[2's complement]
0001 (1) --음수 표현--> 1111 (-1)
		vs
[sign and magnitude]
0001 (1) --음수 표현--> 1001 (-1)

"sign and magnitude" 방식이 직관적일 순 있으나, 뺄셈 연산에서
추가적인 논리 구성이 필요하다.
그에 반해 "2's complement" 방식은 뺄셈 연산에서 추가적인 논리가
필요 없고, 그냥 덧셈 연산을 해주면 된다.
(example)
- sign and magnitude 방식
2 + (-1)
     0010 (2)
+    1001 (-1)
----------
=    1011 (-3) // 2+(-1)=-3? --> 추가적인 논리 구성 필요

- 2's complement 방식
2 + (-1)
     0010 (2)
+	 1111 (-1)
----------	 
=   10001 (carry bit 는 버린다)
=    0001 (1)  // 2+(-1)=1 --> 덧셈연산 그대로 하면 된다.
-----------------------------------------------------*/
#include <iostream>
#include <bitset>
using namespace std;

/* 2의 보수법을 이용한 음수->양수 전환 함수
all bit 1 mask로 XOR 연산 -> bit reverse
-----------------------------------------------------*/
int changePositive(int a){
	int mask = 0xFFFFFFFF;
	int result = (a^mask)+0x1;
	return result;
}

/* 2의 보수법을 이용한 양수->음수 전환 함수
all bit 1 mask로 XOR 연산 -> bit reverse
-----------------------------------------------------*/
int changeNegative(int a){
	int mask = 0xFFFFFFFF;
	int result = (a^mask)+0x1;
	return result;
}

int main(){

	int a = 0b0001 - 0b0010; // 1-2
	cout << a << endl; // -1
	cout << bitset<4>(a) << endl; // 1111 (-1)
	
	int b = 32;
	cout << changeNegative(b) << endl; // 32 -> -32
	b = -32;
	cout << changePositive(b) << endl; // -32 -> 32
}