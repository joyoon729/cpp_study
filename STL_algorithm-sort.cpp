/*
:: sort() 함수
C++ STL algorithm 헤더 사용해보기
STL sort() 함수는 Quick Sort 이며, 평균 시간복잡도는 O(nlogn).
그러나 최악 시간복잡도는 O(n^2) 까지 올라간다.
따라서 최악의 경우엔 STL sort() 함수가 아니라,
STL stable_sort() 를 사용한다. stable_sort() 는 Merge Sort.

사용법: 
sort(start, end)
start 를 포함하고, end 를 포함하지 않는 구간 
(start <= element < end)
오름차순 정렬한다.

sort(start, end, func)
세번째 인자 func 를 통해 정렬 기준을 원하는 형태로 변경 가능.
------------------------------------------------------------*/

#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 5
#define flag 2


/* 기본 사용법 (오름차순 정렬)
------------------------------------------------------------*/
#if flag==0
int main(){
	int arr[MAX] = {3, 5, 4, 2, 1};
	sort(arr, arr+MAX);
	for(int i=0; i<MAX; ++i){
		cout << arr[i] << " \n"[i==MAX-1];
	}
	return 0;
}

/* 내림차순 정렬
sort 함수의 세번째 인자 활용
------------------------------------------------------------*/
#elif flag==1
bool compare(int left, int right){
	return left > right;
}
int main(){
	int arr[MAX] = {3, 5, 4, 2, 1};
	sort(arr, arr+MAX, compare);
	for(int i=0; i<MAX; ++i){
		cout << arr[i] << " \n"[i==MAX-1];
	}
	return 0;
}

/* 단순 데이터가 아닌, 객체 데이터를 정렬
학생 점수별로 내림차순 정렬하기
------------------------------------------------------------*/
#else
#include <string>
class Student {
public:
	string name;
	int score;
	Student(string name, int score):name(name), score(score){};

	// 함수 오버로딩. sort() 가 이 객체를 사용할 수 있도록 한다.
	bool operator <(Student &student){
		return this->score < student.score;
	}
};
bool compare(Student &a, Student &b){
	return a.score > b.score;
}
int main(){
	Student students[] = {
		Student("A", 90),
		Student("B", 93),
		Student("C", 97),
		Student("D", 87),
		Student("F", 92)
	};
	sort(students, students+5, compare);
	for(int i=0; i<5; ++i){
		cout << students[i].name << students[i].score<< " \n"[i==4];
	}
}

#endif