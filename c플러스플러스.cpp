#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::cout<<"Hello World!"<<std::endl;
	std::cout<<"';'whatt \"the hell";
	//cin�� ������ �Է��ϸ� ������ ���� ����Ǵ� ������ �ν�. 
	std::cin>>name;
	std::cout<<"what'your name"<<std::endl;
	std::cout<<name<<std::endl;
	
	//���鵵 �����ϴ� getline ���.
	std::cout<<"what's your name?"<<std::endl;
	getline(std::cin,name);
	std::cout<<name<<std::endl; 
	
	
	
	return 0;
 } 
