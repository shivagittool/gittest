#include<iostream>

class base
{
	public:
	void my_func(){
		std::cout<<"hello world "<<std::endl;
	}

};

int main()
{
	base obj;
	obj.my_func();

}
