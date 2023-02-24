#include <iostream>

class MyClass
{
public:
	~MyClass()
	{
		std::cout << "Destructor!!!" << std::endl;
	}
};

int main()
{
	MyClass c1;
	
	{
		MyClass c2;
	}
}					// c2가 먼저 사라지고, c1이 사라짐