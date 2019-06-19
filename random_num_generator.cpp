/* 난수 생성하기
- header
ctime : time()
cstdlib : rand()
-----------------------------------------------*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

#define MAX 10

/* 중복 제거 난수 생성
-----------------------------------------------*/
void random_number_generator(int arr[]){
	// srand(). seedrand : seed 값 넣기
	// time(NULL) 도 되지만, 
	// unsigned 로 캐스팅 하는것이 실행 속도 빨랐음
	srand((unsigned)time(NULL));
	for(int i=0; i<MAX; ++i){
		arr[i] = rand()%20+1; // 1부터 20까지 난수 생성
		for(int j=0; j<i; ++j){
			if(arr[i] == arr[j]){
				--i;
				break;
			}
		}
	}
}

/* 중복 포함 난수 생성
-----------------------------------------------*/
void random_number_generator_d(int arr[]){
	srand((unsigned)time(NULL));
	for(int i=0; i<MAX; ++i){
		arr[i] = rand()%20+1;
	}
}

void print(int arr[]){
	for(int i=0; i<MAX; ++i){
		cout << arr[i] << " \n"[i==MAX-1];
	}
}

int main(){
	int arr1[MAX];
	int arr2[MAX];

	random_number_generator(arr1);
	random_number_generator_d(arr2);

	print(arr1);
	print(arr2);

	return 0;
}