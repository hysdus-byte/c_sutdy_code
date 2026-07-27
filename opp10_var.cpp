//여러 자료형의 sizeof 한눈에 비교하기

#include <iostream>
using namespace std;

int main()
{
	cout << "sizof char : "	  << sizeof(char) << endl;
	cout << "sizof int : "	  << sizeof(int) << endl;
	cout << "sizof long : "	  << sizeof(long) << endl;
	cout << "sizof float : "  << sizeof(float) << endl;
	cout << "sizof double : " << sizeof(double) << endl;
	cout << "sizof bool : "	  << sizeof(bool) << endl;
	return 0;
}