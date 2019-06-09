/*
container_vector
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v; // vector 생성
	vector<int> v1(5); // 0으로 5개 초기화된 vector 생성
	vector<int> v2(5,2); // 2로 5개 초기화된 vector 생성
	vector<int> v3(v2); // v2 로부터 복사된 vector 생성

	// assign
	// v.assign(5,2); // 2로 5개 원소 할당

	// at
	// v.at(n); // n 번째 원소 참조
	// v[n]; // at보단 빠르지만 범위 점검x

	// // front
	// v.front(); // 첫번째 원소 참조
	// // back
	// v.back(); // 마지막 원소 참조

	// // clear
	// v.clear(); // 모든 원소 제거, 메모리는 남아있음. (size 0, capacity 그대로)

	// // push
	// v.push_back(7); // 마지막 원소 뒤에 7 삽입
	// // pop
	// v.pop_back(); // 마지막 원소 제거

	// // iterator 와 사용
	// v.begin();
	// v.end();

	// // reserve
	// v.reserve(n); // n 개 원소 저장할 위치를 예약

	// // resize
	// v.resize(n); // 크기를 n 으로 변경, 추가된 크기만큼 0으로 초기화
	// v.resize(n,3); // 크기를 n 으로 변경, 추가된 크기만큼 3으로 초기화

	// // size
	// v.size(); // 원소 갯수 리턴

	// // capacity
	// v.capacity(); // 할당된 공간 크기 리턴

	// // swap
	// v2.swap(v1); // v1과 v2 의 원소와 capacity 를 바꿔준다 (모든걸 스왑)

	// // insert
	// v.insert(v.begin()+2,3,4); // 2번째 위치에 3개 4값을 삽입. (뒤 원소들은 뒤로 밀린다)
	// v.insert(v.begin()+2,3); // 2번째 위치의 3값 삽입.

	// erase
	// v.erase(iter); // iter 가 가리키는 원소를 제거

	// // empty
	// v.empty(); // 비어있으면 리턴 true. (size 0이면 true)

	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);
	v.push_back(11);

	cout << "size: " << v.size() << ", capacity: " << v.capacity() << endl;
	for(int elem : v){
		cout << elem ;
		if(elem==v.at(v.size()-1)) cout << "end" << endl;
	}

	// for with iterator
	for(vector<int>::iterator iter=v.begin(); iter!=v.end(); ++iter){
		cout << *iter << " ";
		if(iter==v.end()-1) cout << "end" << endl;
	}

}