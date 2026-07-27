//참조자와 포인터를 함께 쓰기
//포인터, 이중포인터가 가리키는 대상 자체에도 참조자로 별명을 붙이고 싶을 때 (참조자 문법의 응용)
#include <iostream>
using namespace std;
int main()
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;
	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;
	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
	return 0;
}
