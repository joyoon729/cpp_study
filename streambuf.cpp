/*
streambuf 클래스 포인터
시작포인터 : 버퍼 시작을 가리킴
스트림 위치 지정자 : 다음으로 읽을 문자를 가리키고 있음
끝 포인터 : 버퍼 끝을 가리킴
*/
#include <iostream>

int main(){
	std::string s;
	std::cin >> s;

	// rdbuf() : cin 객체가 입력을 수행하던 streambuf 객체를 가리키는 포인터 리턴
	// snextc() : 위치 지정자에서 한칸 전진시키고 그 위치에 해당하는 문자를 훔쳐본다.
	// snextc() : 엿보기만 할 뿐 위치지정자는 움직이지 않는다.
	char peek = std::cin.rdbuf()->snextc();
	if(std::cin.fail()){
		std::cout << "Failed";
	}
	std::cout << "두 번째 단어 맨 앞글자 : " << peek << std::endl;
	std::cin >> s;
	std::cout << "다시 읽으면 : " << s << std::endl;

	return 0;
}