#include <iostream>
using namespace std;

class LCM{
private:
	int a,b;
public:
	LCM(int a, int b): a(a), b(b){}
	int find_LCM(){
		int result = a*b;
		
		int _a[b], _b[a];
		for(int i=0; i<b; i++){
			_a[i] = a*(i+1);
		}
		for(int i=0; i<a; i++){
			_b[i] = b*(i+1);
		}

		int i=0, j=0;
		while(true){
			if(_a[i]==result){
				i=0; j++;
			}
			if(_a[i]==_b[j]){
				result = _a[i];
				break;
			}
			if(_b[j]==result){
				break;
			}
			i++;
		}
		return result;
	}
};

int main(){
	int x,y;
	cout << "input number..." << endl;
	cin >> x >> y;

	LCM a(x,y);
	cout << "LCM is ... " << a.find_LCM() << endl;
}