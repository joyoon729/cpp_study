/* 함수 인자로 array 를 받을때,
call by value 가 아닌, 
call by pointer 와 같은 형태로 넘어간다.
따라서 함수 내부에서 배열 요소 조작하면 원본이 바뀐다.
[참고]
https://dojang.io/mod/page/view.php?id=562
http://egloos.zum.com/himskim/v/4049344
----------------------------------------------------*/

#include <iostream>
using namespace std;

#define MAX 5

void modify1(int *arr){
	for(int i=0; i<MAX; ++i){
		arr[i] = 1;
	}
}

void modify2(int arr[]){
	for(int i=0; i<MAX; ++i){
		arr[i] = 2;
	}
}

void print(int arr[]){
	for(int i=0; i<MAX; ++i){
		cout << arr[i] << " ";
		if(i==MAX-1) cout << endl;
	}
}

int main(){
	int arr[MAX] = {5,};
	print(arr);

	modify1(arr);
	print(arr);

	modify2(arr);
	print(arr);

	return 0;
}