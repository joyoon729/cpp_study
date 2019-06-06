/*
Greatest Common Divisor
두 수의 최대공약수(GCD) 구하기. (Euclid 호제법)
ex)
12 58 GCD 구하기
-----------------
58 12
58%12 = 10
12%10 = 2
10%2 = 0 ---> 나머지 0 이면 이때 small 값이 GCD
*/

#include <iostream>
using namespace std;

class GCD{
private:
	int large, small, result=1;
public:
	GCD(int a, int b){
		if(a>=b){
			large=a;
			small=b;
		}else{
			large=b;
			small=a;
		}
	};
	int find_GCD_recur();
	int GCD_recur_main(int l, int s);
	int find_GCD_loop();
};
int GCD::find_GCD_recur(){
	return GCD_recur_main(large, small);
}
int GCD::GCD_recur_main(int l, int s){
	static int i = 1;
	if(l%s==0) return s;

	else return GCD_recur_main(s,l%s);
}
int GCD::find_GCD_loop(){
	while(result>0){
		result = large%small;
		if(result==0) return small;
		large = small;
		small = result;
	}
	return -1;
}

int main(){
	int a,b;
	cin >> a >> b;

	cout << "GCD (loop version) : " << GCD(a,b).find_GCD_loop() << endl;
	cout << "GCD (recur version): " << GCD(a,b).find_GCD_recur() << endl;

	return 0;
}