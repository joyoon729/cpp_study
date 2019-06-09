/*
std::array
array container 공부
*/

#include <iostream>
#include <array> // std::array
using namespace std;

int main(){
	array<int, 3> arr1 = {1,2,3}; // 생성 & 초기화
	array<int, 6> arr2; // 생성만. 쓰레기값 6개 들어있다.
	array<int, 10> arr3 = {0}; // 0으로 초기화
	array<int, 10> arr4 = {2}; // 첫번째 2, 나머지 0으로 초기화

	// max_size() : 배열 크기 반환
	cout << arr1.max_size() << endl;

	// size() : max_size() 와 동일
	cout << arr2.size() << endl;

	// begin() : 첫번째 원소 주소 반환
	cout << arr1.begin() << endl;

	// at(n) : n번째 인자 반환
	cout << arr1.at(1) << endl;
	cout << arr1[1] << endl; // at() 과 동일

	// front() : 맨 앞 원소 반환
	cout << arr1.front() << " ";
	cout << arr1.at(0) << " ";
	cout << arr1[0] << endl;

	// back() : 맨 뒤 원소 반환
	cout << arr1.back() << " ";
	cout << arr1.at(arr1.size()-1) << " ";
	cout << arr1[arr1.size()-1] << endl;

	// size() 이용 for 문
	for(int i=0; i<arr4.size(); i++){
		cout << arr4.at(i) << " ";
		if(i==arr4.size()-1) cout << endl;
		// 결과 : 2 0 0 0 0 0 0 0 0 0
	}

	// fill(val) : 모든 원소 val 로 바꿔준다
	arr4.fill(5);
	for(int i=0; i<arr4.size(); i++){
		cout << arr4.at(i) << " ";
		if(i==arr4.size()-1) cout << endl;
		// 결과 : 5 5 5 5 5 5 5 5 5 5
	}
}