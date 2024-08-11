#include<iostream>

class base
{
	public:
	void my_func(){
		std::cout<<"hello world inside class"<<std::endl;
	}

};

int main()
{
	base obj;
	obj.my_func();
	std::cout<<"hello world inside main"<<std::endl;

}
