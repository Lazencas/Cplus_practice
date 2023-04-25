#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::cout<<"Hello World!"<<std::endl;
	std::cout<<"';'whatt \"the hell";
	//cin은 공백을 입력하면 추출할 값이 종료되는 것으로 인식. 
	std::cin>>name;
	std::cout<<"what'your name"<<std::endl;
	std::cout<<name<<std::endl;
	
	//공백도 포함하는 getline 사용.
	std::cout<<"what's your name?"<<std::endl;
	getline(std::cin,name);
	std::cout<<name<<std::endl; 
	
	
	
	return 0;
 } 
