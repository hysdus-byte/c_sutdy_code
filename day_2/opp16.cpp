#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref)   // 반환 타입도 int&로 변경
{
	ref++;
	return ref;                // 0이 아니라 ref(=num1) 자체를 반환
}

int main()
{
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1);

	num1++;
	num2++;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	
	return 0;
}