#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ifstream read;
	ofstream write;
	read.open("sample.txt");
	write.open("write_sample.txt");
	char jump = NULL;

	// sample.txt 파일 길이만큼 문자형 배열 만든다
	char str[sizeof(read)]={'\0'};

	int i=0;

	if(read.good()){ // 텍스트 파일이 잘 열리면 실행
		while(!read.eof()){ // 텍스트 파일에 더이상 읽을게 없으면 종료
			read.getline(str,sizeof(read)); // getline. 불러온 텍스트 파일을 문자 하나씩, 텍스트 파일 크기만큼 읽어들인다.
			for(i=0; i<sizeof(read); i++){ // 문자 하나씩 읽어온다.
				write << str[i];				
			}
			if(jump != '\n') write << endl;
			fill_n(str,100,'\0'); // fill_n. '\0' 문자로 초기화
		} 
	}
	read.close();
	write.close();

	return 0;
}