//화살표로 관계를 정리한 간단 버전
#include <iostream>
using namespace std;
int main()
{
	int num = 55;
	int* ptr = &num; // ptr: num의 주소를 저장
	int* (&pref) = ptr; // pref: ptr의 별명 (ptr과 완전히 같은 것)
	cout << "num 자체: " << num << endl;
	cout << "*ptr (ptr이 가리키는 값): " << *ptr << endl;
	cout << "*pref (pref=ptr의 별명이 가리키는 값): " << *pref << endl;
	*pref = 99; // pref를 통해 값을 바꿔도
	cout << "변경 후 num: " << num << endl; // num이 그대로 바뀜 (ptr, pref 모두 결국 num을 가리키므로)
	return 0;
}
