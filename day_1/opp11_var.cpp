//0을 별도로 분류하는 3단계 판별
#include <iostream>
using namespace std;
int CheckSign(int num)
{
	if (num < 0)
		return -1; // 음수
	else if (num == 0)
		return 0; // 0
	else
		return 1;
}
int main()
{
	int num;
	cout << "Input number: ";
	cin >> num;
	int result = CheckSign(num);
	if (result == -1)
		cout << "Negative number" << endl;
	else if (result == 0)
		cout << "Zero" << endl;
	else
		cout << "Positive number" << endl;

}