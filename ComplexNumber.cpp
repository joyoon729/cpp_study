#include <iostream>
using namespace std;

class Complex{
	// 복소수 z = a+bi
private:
	double real, img; // img(imaginary number)
	double get_number(const char *str, int from, int to);

public:
	Complex(double real, double img) : real(real), img(img){}
	Complex(const Complex& c) {real = c.real, img = c.img;}
	Complex(const char* str);

	Complex operator+(const Complex& c);
	Complex operator-(const Complex& c);
	Complex operator*(const Complex& c);
	Complex operator/(const Complex& c);

	Complex operator+(const char* str);
	Complex operator-(const char* str);
	Complex operator*(const char* str);
	Complex operator/(const char* str);

	Complex& operator=(const Complex& c);
	
	Complex& operator+=(const Complex& c);
	Complex& operator-=(const Complex& c);
	Complex& operator*=(const Complex& c);
	Complex& operator/=(const Complex& c);

	void println(){ cout<<"("<<real<<","<<img<<")"<<endl;}
};

Complex::Complex(const char* str){
/*
문자열을 받아서 실수부분 / 허수부분으로 나눈다
문자열은 '부호 실수부 부호 i 허수부' 로 하기로 하자
맨 앞 부호는 생략 가능. (생략시 +)
*/
	int begin=0, end=strlen(str);
	img = 0.0;
	real = 0.0;

	int pos_i = -1;
	for(int i=0; i!=end; i++){
		if(str[i] =='i'){
			pos_i = i;
			break;
		}
	}
	if(pos_i == -1){
		real = get_number(str, begin, end-1);
		return;
	}

	real = get_number(str,begin,pos_i-1);
	img = get_number(str,pos_i+1, end-1);

	if(pos_i >=1 && str[pos_i-1] =='-') img*= -1.0;
}

double Complex::get_number(const char *str, int from, int to){
	bool minus = false;
	if(from > to) return 0;
	if(str[from] == '-') minus = true;
	if(str[from] == '-' || str[from] == '+') from ++;
	double num = 0.0;
	double decimal = 1.0;
	
	bool integer_part = true;
	for (int i=from; i<=to; i++){
		if(isdigit(str[i])&&integer_part){
			num *= 10.0;
			num+=(str[i]-'0');
		}else if(str[i] =='.') integer_part = false;
		else if(isdigit(str[i])&& !integer_part){
			decimal /= 10.0;
			num += ((str[i]-'0')*decimal);
		}else break;
	}
	if(minus) num *= -1.0;

	return num;
}

/* 
사칙연산.
아래 함수는 Complex 를 리턴. &Complex 레퍼런스를 리턴하는 것이 아니라서
값의 복사가 일어난다. -> 속도 저하 발생
그러나 레퍼런스를 리턴해선 안되는데,
a = b + c + b; 같은 경우를 생각해보면 이유를 알 수 있음.
*/
Complex Complex::operator+(const Complex& c){
	Complex temp(real+c.real, img+c.img);
	return temp;
}
Complex Complex::operator-(const Complex& c){
	Complex temp(real-c.real, img-c.img);
	return temp;
}
Complex Complex::operator*(const Complex& c){
	Complex temp(real*c.real-img*c.img, real*c.img+c.real*img);
	return temp;
}
Complex Complex::operator/(const Complex& c){
	Complex temp(
		(real*c.real+img*c.img)/(c.real*c.real+c.img*c.img),
		(c.real*img-real*c.img)/(c.real*c.real+c.img*c.img));
	return temp;
}

Complex Complex::operator+(const char* str){
	Complex temp(str);
	return *this + temp;
}
Complex Complex::operator-(const char* str){
	Complex temp(str);
	return *this - temp;
}
Complex Complex::operator*(const char* str){
	Complex temp(str);
	return *this * temp;
}
Complex Complex::operator/(const char* str){
	Complex temp(str);
	return (*this) / temp;
}


/* 
대입 연산자.
내부 구현은 위의 사칙연산 함수를 재활용.
*/
Complex& Complex::operator=(const Complex& c){
	real = c.real;
	img = c.img;
	return *this;
}
Complex& Complex::operator+=(const Complex& c){
	*this = *this + c;
	return *this;
}
Complex& Complex::operator-=(const Complex& c){
	*this = *this - c;
	return *this;
}
Complex& Complex::operator*=(const Complex& c){
	*this = *this * c;
	return *this;
}
Complex& Complex::operator/=(const Complex& c){
	*this = *this / c;
	return *this;
}

int main(){
	Complex a(0.0, 2.0);
	Complex b(3.0, -2.0);
	
	Complex c = a+"10.0";

	c.println();
}