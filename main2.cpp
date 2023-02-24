#include <iostream>

class MyArray
{
private:
	int* mArray;

public:
	MyArray(int size)
	{
		mArray = new int[size];
	}

	~MyArray()
	{
		delete[] mArray;
	}
};

int main()
{
	MyArray array(10);

	// private이므로 delete[] array; 같은 표기는 안된다 
}