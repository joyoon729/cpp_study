/*
Greatest Common Divisor
두 수의 최대공약수(GCD) 구하기. (Euclid 호제법)
*/

#include <iostream>
using namespace std;

class GCD{
private:
	int large, small, result;
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
	int find_GCD_loop();
};
int GCD::find_GCD_recur(){
	if(small==0) return large;
	else return find_GCD_recur(small, large%small)
}
int GCD::find_GCD_loop(){
	while(result>0){
		result = large%small;
		if(result==0) return small;
		large = small;
		small = result;
	}
}

int main(){
	int a,b;
	cin >> a >> b;

	cout << "GCD is ... " ;
	cout << GCD(a,b).find_GCD_loop();
	return 0;
}