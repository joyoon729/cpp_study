#ifndef __point_h__
#define __point_h__
// #include <iostream>

class Point{
	int x,y;
public:
	Point(int _x, int _y){
		x=_x;
		y=_y;
	}
	print(){
		std::cout << "x: " << x << " y: " << y << std::endl;
	}
};

#endif

/* 헤더파일 중복 방지	
__flag__ 가 정의 되어 있지 않으면, 이하 문장 실행
실행하면서 __flag__ 정의하므로 중복 정의 방지
이후 실행부터는 __flag__ 정의 해놨으므로 #ifndef 이하 코드 실행 안됨
#ifndef __flag__
#define __flag__

 // 헤더파일 내용

 #endif