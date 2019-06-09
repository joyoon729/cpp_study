/*
score 한줄 처리
"FFFFFFDCBAA" 문자열의 0번째가 F, 10번째가 A 임을 생각하면 간단.
*/
#include <iostream>
using namespace std;

char get_grade(int score){
	return "FFFFFFDCBAA"[score/10];
}

int main(){
	int score;
	cout << "enter your score... : " ;
	cin >> score;
	cout << "your grade is : " << get_grade(score) << endl;
}