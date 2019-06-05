/*
Least Common Multiple
세 정수의 최소공배수 구하기 (brute force)
*/

#include <iostream>
#include <array>
using namespace std;

class LCM3{
private:
	int a,b,c,result;
public:
	LCM3(int a, int b, int c): a(a), b(b), c(c){}
	int find_LCM();
};
int LCM3::find_LCM(){
	int arr_a[b*c], arr_b[a*c], arr_c[a*b];
	result = a*b*c;

	for(int i=0; i<b*c; i++){
		arr_a[i] = a*(i+1);
		// cout << arr_a[i] << " ";
	}
	// cout << endl;
	// cout << arr_a[b*c-1] << endl;
	
	for(int i=0; i<a*c; i++){
		arr_b[i] = b*(i+1);	
		// cout << arr_b[i] << " ";
	}
	// cout << endl;
	// cout << arr_b[c*a-1] << endl;
	
	for(int i=0; i<a*b; i++){
		arr_c[i] = c*(i+1);
		// cout << arr_c[i] << " ";
	}
	// cout << endl;
	// cout << arr_c[a*b-1] << endl;

	int i=0, j=0, k=0;
	// cout << "current result : " << result << endl;
	// cout << "a[] length : " << b*c << endl;
	// cout << "b[] length : " << c*a << endl;
	// cout << "c[] length : " << a*b << endl;

	for(int i=0; i<b*c; i++){
		for(int j=0; j<c*a; j++){
			for(int k=0; k<a*b; k++){
				if(arr_a[i]==arr_b[j]){
					if(arr_b[j]==arr_c[k]){
						result = arr_c[k];
						// cout << "same!! : " << result << endl;
						return result;
					}
				}
			}
		}
	}
	return result;
}

int main(){
	int i1, i2, i3, result;
	cin >> i1 >> i2 >> i3;
	result = LCM3(i1,i2,i3).find_LCM();
	cout << "LCM3 is ... " << result << endl;

	return 0;
}