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
}					// c2�� ���� �������, c1�� �����