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

	// private�̹Ƿ� delete[] array; ���� ǥ��� �ȵȴ� 
}