#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}
	int getX();
	int getY();
};
int Point::getX(){
	return x;
}
int Point::getY(){
	return y;
}

int plus1(int& a){
	return ++a;
}

int main(){
	Point p(1,2);
	int a = p.getX();
	int& b = a;
}