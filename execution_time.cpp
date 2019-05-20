#include <iostream>
#include <ctime>
using namespace std;

int main(){

	int num=0;

	// start point
	double start = clock();

	for(int i=0; i<10000; i++){
		num++;
	}	
	cout << CLOCKS_PER_SEC << endl;
	cout << num << endl;
	
	// check execution time
	printf("result=%.3lf(sec)\n", (double)clock()-start/CLOCKS_PER_SEC);

	return 0;
}

