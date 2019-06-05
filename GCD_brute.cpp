/*
Greatest Common Divisor
두 수의 최대공약수(GCM) 구하기 (brute force)
*/

#include <iostream>
using namespace std;

class GCD{
private:
	int large, small, result;
public:
	GCD(int _a, int _b){
		if(_a>=_b){
			large = _a;
			small = _b;
		}else{
			large = _b;
			small = _a;
		}
		result = small;
	};
	int find_GCD();
};

int GCD::find_GCD(){
	for(int i=result; i>0; i--){
		// printf("i: %d, %d/i: %d, %d/i: %d\n", i, large, large/i, small, small/i);
		if(large%i==0 && small%i==0){
			// cout << "found!!" << endl;
			result = i;
			return result;
		}
	}
	return 0;
}

int main(){
	int a,b;
	cin >> a >> b;

	cout << "GCD is ... " ;
	cout << GCD(a,b).find_GCD() << endl;


}
