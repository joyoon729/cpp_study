/*
" \n"[j==N-1]
을 이용한 문자열 처리
" \n" 의 0번지는 ' ', 1번지는 '\n' 이다.
j 가 배열 N-1 번째에 다다르면  j==N-1 이 1(true) 반환돼서 " \n"[1] 값인 '\n' 출력
그 외의 경우엔 j==N-1 이 0(false) 반환돼서 " \n"[0] 값인 ' ' 출력.
*/
#include <iostream>
using namespace std;

int main(){
	const int N=5;
	int arr[N][N] = {1,2,3,4,5,
					6,7,8,9,10,
					11,12,13,14,15,
					16,17,18,19,20,
					21,22,23,24,25};
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << arr[i][j] << " \n"[j==N-1];
		}
	}
}