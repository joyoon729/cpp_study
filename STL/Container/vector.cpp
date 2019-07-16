/* container::vector
가변크기의 배열이라고 생각.

선언
vector<type> v;

*****************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vec; // 기본 선언법
	vector<float> vec2(4, 0.5); // 4개의 float, value 0.5 로 선언.


	// range based for
	for(auto elem : vec2){
		cout << elem << " ";
	}
	cout << endl;

	
	// push_back, pop_back
	vec.push_back(5); // 끝에다 5 추가
	vec.pop_back(); // 마지막 element 삭제


	// assign
	// {1, 1, 1, 1} --> {3, 3, 3}
	vector<int> v(4,1);
	for(auto elem : v){
		cout << elem << " ";
	}
	cout << endl;
	int ints[]={3,3,3};
	v.assign(ints,ints+3);
	for(auto elem : v){
		cout << elem << " ";
	}
	cout << endl;


	// at
	cout << v.at(0) << endl;
	// cout << v.at(3) << endl; // error -> range 밖을 참조시 에러.
	cout << v[3] << endl; // 배열식으로도 참조 가능하나 range 검사 X


	// size
	cout << "capacity: " << v.capacity() << endl; // 할당된 메모리 갯수(크기) 리턴
	cout << "size: " << v.size() << endl; // 원소 수 리턴


	// empty
	cout << "isEmpty?: " << v.empty() << endl;

	return 0;
}