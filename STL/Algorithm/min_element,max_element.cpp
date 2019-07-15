/* algorithm::min_element
   algorithm::max_element

사용법
min_element(iter시작, iter끝, comp 함수);
리턴값이 주소값이므로 *min_element() 를 통해 값을 불러온다.

ex) arr 의 3부터 7사이의 min 값 구하기
min_element(arr+3, arr+8);
iter끝 값은 원하는 index+1 이다.
**************************************************/


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool myfunc(int i, int j){
	return i>j;
}

int main(){
	int arr[7] = {3,7,2,5,6,4,9};
	vector<int> vec;
	vec.push_back(3);
	vec.push_back(7);
	vec.push_back(2);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(4);
	vec.push_back(9);

	cout << "min : " << *min_element(arr,arr+7) << endl;
	cout << "max : " << *max_element(arr,arr+7) << endl;

	// myfunc 부등호 바꿔서 max_element가 min 값 리턴.
	cout << "max : " << *max_element(arr,arr+7, myfunc) << endl;

	// begin()+7 나 end() 동일하다.
	cout << "max : " << *max_element(vec.begin(),vec.begin()+7) << endl;
	cout << "max : " << *max_element(vec.begin(),vec.end()) << endl;

	return 0;
}