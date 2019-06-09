#include <iostream>
#include <vector>
using namespace std;

int main(){
	int arr[10] = {2,3,4,5,6,7,8,9,10,11};

	// for문
	for(int i=0; i<sizeof(arr)/sizeof(*arr); i++){
		cout << arr[i] << " ";
		if(i==sizeof(arr)/sizeof(*arr)-1) cout << endl;
	}

	/*
	range based for문
	범위 기반 for문에선
	내부적으로
	elem = arr[0];
	elem = arr[1]; ... 등의 elem 변수로 값의 복사가 일어난다.
	--> 배열 요소를 변경할 수 없다.
	*/
	for(int elem : arr){
		cout << elem << " ";
		if(elem==arr[sizeof(arr)/sizeof(*arr)-1]) cout << endl;
	}

	
	// iterator 사용한 기존 for 문
	vector<int> v = {1,2,3,4,5,6,7};
	for(vector<int>::iterator iter = v.begin(); iter!=v.end(); iter++){
		cout << *iter << " \n"[iter==v.end()-1]; //interesting_code01.cpp
	}

	// 범위 기반 for 문
	for(int elem : v){
		cout << elem << " \n"[elem==v.at(v.size()-1)];
	}

	// iterator 사용한 기존 for 문에서 원래 데이터 변경
	cout << "iterator 사용한 기존 for 문에서 데이터 변경하기 (+10)" << endl;
	for(vector<int>::iterator iter=v.begin(); iter!=v.end(); iter++){
		*iter += 10;
	}
	for(vector<int>::iterator iter=v.begin(); iter!=v.end(); iter++){
		cout << *iter << " \n"[iter==v.end()-1];
	}	

	// 범위 기반 for 문에서 원래 데이터 변경 (값의 복사 일어나서 변경 안됨)
	cout << "범위 기반 for 문에서 데이터 변경하기 (+100)" << endl;
	for(int elem : v){
		elem += 100;
	}
	for(int elem : v){
		cout << elem << " \n"[elem==v.at(v.size()-1)];
	}

	/*
	위 범위 기반 for 문에서는 elem 으로 값의 복사가 일어나기 때문에 단점있음.
	  1. 원래 값 변경 못함
	  2. 매번 복사해야하는 비용 발생
	해결법 : &(레퍼런스) 사용.
	효과 :
	  1. 원래 값 변경 가능
	  2. 복사 비용 발생 x
	*/
	cout << "범위 기반 for 문에서 데이터 변경하기 (+100). &(reference) 사용하였습니다." << endl;
	for(int& elem : v){
		elem += 100;
		cout << elem << " \n"[elem==v.at(v.size()-1)];
	}
	// 원래 값 변경하지 않도록 보장
	// for(const int& elem : v){
	// 	elem += 100;  // --> 컴파일 에러.
	// }
}