//포인터로 같은 상황 다시 작성해보기
#include <iostream>
using namespace std;
int main()
{
	int num1 = 1020;
	int* ptr = &num1; // ptr에는 num1의 '주소'가 저장됨
	*ptr = 3047; // *ptr로 역참조해서 값을 바꿔야 함
	cout << "VAL: " << num1 << endl;
	cout << "PTR이 가리키는 값: " << *ptr << endl;
	cout << "num1의 주소: " << &num1 << endl;
	cout << "ptr에 저장된 주소값: " << ptr << endl; // * 없이 ptr 자체를 출력
	return 0;
}