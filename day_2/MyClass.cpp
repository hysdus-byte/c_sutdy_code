//학번 이름 나이를 갖는 클래스 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Myclass {

	int studentId;		//학번 
	char name[20];		//이름 
	int age;			//나이 

public: //myclass아래를 사용을 해주기 위해 사용
	Myclass(int astudentId, const char* aname, int aage) //생성자 생성 
	{
		studentId = astudentId;
		strcpy(name, aname);
		age = aage;
	}

	void Getdata() //출력 함수 
	{
		cout << "학번: " << studentId << " 이름:" << name << " 나이 :" << age << endl;
	}
};

int main()
{
	Myclass a(20260609,"한연성", 25); //객체이름 임의 이름 a
	a.Getdata();

	return 0;
}