#include <iostream>
using namespace std;

class GCD{
private:
	int large, small;
public:
	GCD(int a, int b){
		if(a>=b) {large=a; small=b;}
		else {large=b; small=a;}
	}
	int find_GCD_euclid(){
		return recur_GCD_euclid(large, small);
	}
	int recur_GCD_euclid(int large, int small){
		if(large%small==0) return small;
		else return recur_GCD_euclid(small,large%small);
	}
};

class LCM{
private:
	int large, small, gcd;
public:
	LCM(int a, int b, int _gcd){
		if(a>=b) {large=a; small=b;}
		else {large=b; small=a;}
		gcd = _gcd;
	}
	int find_LCM(){
		return large*small/gcd;
	}
};

int main(){
	int a, b;
	cin >> a >> b;
	
	cout << LCM(a,b,GCD(a,b).find_GCD_euclid()).find_LCM() << endl;
	
}