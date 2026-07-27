//여러 개의 char 배열로 정보 입력받기
//이름 나이 처럼 문자열 여러 개를 입력받아 출력할때
#include <iostream>

int main()
{
	char name[100];
	char lang[200];
	int age;

	std::cout << "이름은 무엇입니까?";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍은 무엇입니까?";
	std::cin >> lang;

	std::cout << "나이는 몇살 입니까?";
	std::cin >> age;

	std::cout << "제 이름은 " << name << "입니다" << std::endl;
	std::cout << "좋아하는 프로그래밍은 " << lang << "입니다." << std::endl;
	std::cout << "제 나이는 " << age << "입니다" << std::endl;

	return 0;
}