// 참조자로 배열 원소 값을 실제로 바꿔보기
#include <iostream>
using namespace std;
int main()
{
	int arr[3] = { 1,3,5 };
	int& ref1 = arr[0];
	ref1 = 100; // ref1에 값을 대입
	cout << "ref1: " << ref1 << endl;
	cout << "arr[0]: " << arr[0] << endl; // arr[0]도 100으로 바뀌어 있음
	return 0;
}
