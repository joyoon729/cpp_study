#include <iostream>
using namespace std;
#define flag 1


#if flag == 0
int main(){
	cout << "flag is 0" << endl;
	#ifdef flag2
	cout << "flag2 is not defined" << endl;
	#endif
}
#elif flag == 1
int main(){
	cout << "flag is 1" << endl;
	#ifdef flag2
	cout << "flag2 is not defined" << endl;
	#endif
}
#else
int main(){
	cout << "flag is not 0 or 1" << endl;
	#ifdef flag2
	cout << "flag2 is not defined" << endl;
	#endif
}
#endif