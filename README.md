<div align="center">

# 💻 C++ 학습 기록 — Day 1

![C++](https://img.shields.io/badge/language-C%2B%2B-00599C?style=flat-square&logo=cplusplus)
![Day](https://img.shields.io/badge/day-1-e8b04b?style=flat-square)
![Examples](https://img.shields.io/badge/examples-opp01~opp14-4f9a5a?style=flat-square)
![IDE](https://img.shields.io/badge/IDE-Visual%20Studio-5C2D91?style=flat-square&logo=visualstudio)

*학원에서 C 13일차까지 배운 뒤 시작한 C++ 강의 첫날 실습 기록*

</div>

---

<a name="toc"></a>
## 📑 목차

| | 번호 | 주제 | 변형 |
|:---:|:---|:---|:---:|
| 🖨️ | [`opp01`](#opp01-cout으로-화면에-출력하기) | cout으로 화면에 출력하기 |  |
| ⌨️ | [`opp02`](#opp02-cin으로-두-숫자-입력받아-덧셈하기) | cin으로 두 숫자 입력받아 덧셈하기 |  |
| 🔁 | [`opp03`](#opp03-두-수-사이의-정수-합-구하기) | 두 수 사이의 정수 합 구하기 |  |
| 🧩 | [`opp04`](#opp04-여러-개의-char-배열로-정보-입력받기) | 여러 개의 char 배열로 정보 입력받기 |  |
| 🧬 | [`opp05`](#opp05-함수-오버로딩-다중정의) | 함수 오버로딩 (다중정의) | 🔁 |
| 🎛️ | [`opp06`](#opp06-디폴트-매개변수-2개-함께-쓰기) | 디폴트 매개변수 2개 함께 쓰기 | 🔁 |
| ⚡ | [`opp07`](#opp07-inline-함수) | inline 함수 | 🔁 |
| 📦 | [`opp08`](#opp08-namespace이름공간-기초) | namespace(이름공간) 기초 | 🔁 |
| 🪆 | [`opp09`](#opp09-중첩-namespace와-별칭alias) | 중첩 namespace와 별칭(alias) | 🔁 |
| 🔘 | [`opp10`](#opp10-bool-자료형-whiletruebreak-sizeof) | bool 자료형, while(true)+break, sizeof | 🔁 |
| ❓ | [`opp11`](#opp11-bool을-반환하는-함수로-양수음수-판별하기) | bool을 반환하는 함수로 양수/음수 판별하기 | 🔁 |
| 🔗 | [`opp12`](#opp12-참조자reference-변수에-별명-붙이기) | 참조자(reference) — 변수에 별명 붙이기 | 🔁 |
| 📎 | [`opp13`](#opp13-배열-원소에-참조자-걸기) | 배열 원소에 참조자 걸기 | 🔁 |
| 🪢 | [`opp14`](#opp14-참조자와-포인터를-함께-쓰기) | 참조자와 포인터를 함께 쓰기 | 🔁 |

---

## 🗓️ Day 1

> C++은 C에 '객체지향' 개념을 얹은 언어입니다. 오늘 배운 것을 한 줄로 요약하면 이렇습니다.
>
> ▸ 클래스(class) = 구조체(struct)의 발전형. 구조체는 데이터만 담았지만, 클래스는 데이터 + 그 데이터를 다루는 함수까지 하나로 묶습니다. 비행기를 만들 때 몸통·날개·바퀴의 '설계도'가 클래스이고, 그 설계도로 실제로 만든 비행기가 '객체(object)'입니다.
>
> ▸ 입출력 방식이 바뀌었습니다. printf/scanf 대신 cout/cin이라는 '객체'를 사용합니다. 이들은 '스트림(stream)'이라는 개념으로 동작하는데, 데이터가 프로그램과 화면(또는 키보드) 사이를 흐르는 통로라고 생각하면 됩니다.
>
> ▸ C++은 함수를 이름만으로 구별하지 않고, '이름 + 매개변수 구성'을 함께 보고 구별합니다. 그래서 이름이 같은 함수를 여러 개 만드는 '함수 오버로딩'이 가능해졌고, 매개변수에 기본값을 지정하는 '디폴트 매개변수'도 등장합니다.
>
> ▸ 이 외에도 짧은 함수의 호출 비용을 없애는 inline, 이름 충돌을 막는 namespace(이름공간), true/false를 다루는 bool 자료형과 메모리 크기를 확인하는 sizeof까지 이어서 배웠습니다.
>
> ▸ 마지막으로 참조자(reference, &)를 배웠습니다. 참조자는 기존 변수에 붙이는 '별명'으로, 포인터와 비슷해 보이지만 동작 방식이 다릅니다. 이 둘의 차이는 1-12번 예제에서 자세히 다룹니다.
>
> 아래 예제들은 이 개념들이 실제 코드에서 어떻게 쓰이는지 순서대로 보여줍니다.

---

### 🖨️ opp01. cout으로 화면에 출력하기

> 💡 **언제 쓰나** · C의 printf 대신 cout으로 다양한 자료형을 출력할 때

```cpp
#include <iostream>
int main()
{
	int num = 20;
	std::cout << "hello world" << std::endl;
	std::cout << "hello " << "world" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[개념] cout은 '화면'을 대표하는 객체입니다. printf("%d", num)처럼 서식 지정자로 자료형을 알려줄 필요가 없습니다 — cout이 << 뒤에 오는 값을 보고 스스로 정수인지 문자인지 판단해서 출력하기 때문입니다.

[<< 연산자] '스트림 삽입 연산자'라고 부르며, "이 값을 cout 쪽으로 흘려보내라"는 뜻입니다. 여러 개를 이어 붙이면(cout << a << b << c;) 왼쪽부터 순서대로 출력됩니다. 물이 여러 수도꼭지를 거쳐 한 방향으로 흐르는 것과 비슷한 그림입니다.

[std::] cout, endl 등은 C++ 표준 라이브러리 소속이라 원래는 std::cout처럼 소속(namespace)을 밝혀줘야 합니다. std::는 "표준 라이브러리 안에 있는"이라는 뜻의 접두사입니다.

[std::endl과 줄바꿈] std::endl은 C의 \n과 같은 줄바꿈 역할을 합니다. 이 코드에서 세 번째 cout(num << ' ' << 'A';)에는 endl이 없습니다. 그래서 그 다음 cout(' ' << 3.14 << endl;)의 출력이 줄바꿈 없이 바로 이어 붙어서, 실제로는 "20 A"와 " 3.14"가 한 줄로 합쳐진 "20 A 3.14"로 출력됩니다. endl을 어디에 넣고 안 넣는지에 따라 결과가 한 줄로 붙을 수도, 여러 줄로 나뉠 수도 있다는 점이 이 예제의 핵심입니다.

</details>

**▶️ 실행 결과**
```
hello world
hello world
20 A 3.14

```

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### ⌨️ opp02. cin으로 두 숫자 입력받아 덧셈하기

> 💡 **언제 쓰나** · C의 scanf 대신 cin으로 값을 입력받을 때

```cpp
#include <iostream>
int main()
{
	int val1;
	std::cout << "첫번째 숫자입력:";
	std::cin >> val1;
	int val2;
	std::cout << "두번째 숫자입력:";
	std::cin >> val2;
	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;

	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[개념] cin은 '키보드'를 대표하는 객체입니다. cout이 화면으로 값을 흘려보내는 역할이라면, cin은 키보드에서 입력된 값을 프로그램 쪽으로 흘려받는 역할을 합니다.

[>> 연산자] '스트림 추출 연산자'로, 화살표 방향이 << 와 반대입니다. cin >> val1 은 "cin(키보드 입력)에서 값을 꺼내서 val1에 넣어라"는 뜻입니다.

[scanf와의 차이] C의 scanf("%d", &val1)는 val1의 '주소'를 넘겨야 했지만, cin >> val1은 변수 이름만 그대로 씁니다. & 없이도 컴파일러가 알아서 그 변수의 주소를 찾아 값을 넣어주기 때문입니다. 이 부분이 초보자가 C에서 C++로 넘어올 때 실수하기 쉬운 지점이니 & 를 습관적으로 붙이지 않도록 주의하세요.

</details>

**▶️ 실행 결과** (입력: `23 / 13`)
```
첫번째 숫자입력:두번째 숫자입력:덧셈결과: 36

```

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### 🔁 opp03. 두 수 사이의 정수 합 구하기

> 💡 **언제 쓰나** · 입력 순서에 상관없이 두 수 사이 값을 계산해야 할 때 (if-else + for문 조합)

```cpp
#include <iostream>

int main()
{
	int val1, val2;
	int result = 0;

	std::cout << "두개의 숫자입력:";
	std::cin >> val1 >> val2;

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합 :" << result << std::endl;
	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[문제 상황] 두 수를 입력받아 그 '사이'에 있는 정수들을 다 더하고 싶은데, 사용자가 큰 수를 먼저 입력할지 작은 수를 먼저 입력할지 알 수 없습니다. for문은 항상 작은 값부터 큰 값 방향으로 세어야 하므로, 먼저 어느 쪽이 더 작은지 판별하는 과정이 필요합니다.

[if-else 역할] if (val1 < val2)로 "val1이 더 작은가?"를 참/거짓으로 판단합니다. 참이면 위쪽 for문(val1 기준), 거짓이면 아래쪽 for문(val2 기준)이 실행됩니다. 둘 중 하나만 실행되고 나머지는 건너뜁니다.

[for문 동작] 예를 들어 13과 23을 입력하면 23이 더 크므로 else가 실행되어, i가 14(=13+1)부터 22(23보다 작을 때까지)까지 하나씩 증가하며 result에 누적됩니다. 즉 14+15+...+22 = 162가 됩니다. +1과 <(등호 없음) 때문에 입력한 두 수 자기 자신은 더해지지 않는다는 점이 핵심입니다.

</details>

**▶️ 실행 결과** (입력: `23 / 13`)
```
두개의 숫자입력:두 수 사이의 정수 합 :162

```

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### 🧩 opp04. 여러 개의 char 배열로 정보 입력받기

> 💡 **언제 쓰나** · 이름, 좋아하는 언어처럼 문자열 여러 개를 입력받아 출력할 때

```cpp
#include <iostream>

int main()
{
	char name[100];
	char lang[200];
	int age;

	std::cout << "이름은 무엇입니까?";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
	std::cin >> lang;

	std::cout << "나이는 몇살입니까?";
	std::cin >> age;

	std::cout << "내 이름은 " << name << "입니다.\n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다" << std::endl;
	std::cout << "제 나이는 " << age << "입니다.\n";

	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[자료형 선택 기준] 이름, 좋아하는 언어처럼 '글자 여러 개(문자열)'를 저장할 때는 char 배열(char name[100];)을 씁니다. 반면 나이처럼 '숫자 하나'만 저장하면 되는 값은 배열이 필요 없고 int 변수 하나면 충분합니다. "배열이 필요한가?"를 판단할 때는 "여러 개의 값을 담아야 하는가"를 기준으로 생각하면 됩니다.

[cin >>의 한계] cin >> name은 공백(스페이스) 문자를 만나면 입력을 멈춥니다. 즉 "홍 길동"처럼 띄어쓰기가 있으면 "홍"까지만 name에 들어가고 "길동"은 다음 cin이 가져가버려서 결과가 꼬입니다. 지금은 한 단어씩만 입력하면 문제없지만, 문장 전체를 통째로 받고 싶다면 나중에 배울 cin.getline() 이나 std::string + std::getline()을 써야 합니다.

</details>

**▶️ 실행 결과** (입력: `홍길동 / C++ / 20`)
```
이름은 무엇입니까?좋아하는 프로그래밍 언어는 무엇인가요?나이는 몇살입니까?내 이름은 홍길동입니다.
제일 좋아하는 언어는 C++입니다
제 나이는 20입니다.

```

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### 🧬 opp05. 함수 오버로딩 (다중정의)

> 💡 **언제 쓰나** · 같은 동작을 하는 함수인데 매개변수 형태만 다를 때, 함수 이름을 여러 개 만들지 않아도 되도록

```cpp
#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}
void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}
void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main()
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[함수 오버로딩이란] 이름은 같지만 매개변수 구성(개수, 타입)이 다른 함수를 여러 개 만드는 것을 말합니다. 예를 들어 "출력한다"는 같은 동작을 하는 함수를 정수용, 문자용, 두 개짜리용으로 각각 따로 만들고 싶을 때, 매번 다른 이름(MyFuncInt, MyFuncChar...)을 짓지 않고 같은 이름 MyFunc를 그대로 재사용할 수 있게 해줍니다.

[C에서는 왜 안 됐나] C는 함수를 오직 '이름'만으로 구별합니다. 그래서 같은 이름의 함수를 두 번 정의하면 무조건 "중복 정의" 오류가 났습니다.

[C++이 구별하는 방법] C++ 컴파일러는 함수를 호출하는 코드(MyFunc(12,13) 등)를 만나면, '이름'뿐 아니라 '전달된 인자가 몇 개이고 어떤 타입인지'까지 함께 보고 그에 맞는 함수를 찾아 연결합니다. 그래서 매개변수 구성만 다르면 이름이 같아도 컴파일러 입장에서는 완전히 다른 함수로 취급됩니다.

[이 예제 동작 순서] MyFunc() → 인자가 없으니 매개변수 없는 버전 호출 / MyFunc('A') → char 인자 1개이니 char 버전 호출 / MyFunc(12,13) → int 인자 2개이니 int,int 버전 호출. 호출하는 쪽 코드만 보고도 어떤 함수가 실행될지 예측할 수 있어야 합니다.

</details>

**▶️ 실행 결과**
```
MyFunc(void) called
MyFunc(char c) called
MyFunc(int a, int b) called

```

<blockquote>

#### 🔁 opp05의 변형 · 매개변수 자료형으로도 오버로딩하기

오버로딩은 매개변수 '개수'가 다를 때만 아니라, 개수는 같아도 '자료형'이 다르면 성립합니다. 아래는 매개변수가 1개로 개수는 같지만 int 버전과 double 버전을 따로 만든 예제입니다. 호출할 때 넘기는 값의 자료형을 보고 컴파일러가 알맞은 함수를 자동으로 골라 연결합니다.

```cpp
#include <iostream>

void MyFunc(int num)
{
	std::cout << "MyFunc(int) called: " << num << std::endl;
}
void MyFunc(double num)
{
	std::cout << "MyFunc(double) called: " << num << std::endl;
}

int main()
{
	MyFunc(10);
	MyFunc(3.14);
	return 0;
}
```

**▶️ 실행 결과**
```
MyFunc(int) called: 10
MyFunc(double) called: 3.14

```

</blockquote>

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### 🎛️ opp06. 디폴트 매개변수 2개 함께 쓰기

> 💡 **언제 쓰나** · 매개변수 여러 개에 각각 기본값을 지정해서, 인자를 0개/1개/2개 중 몇 개를 주든 동작하는 함수를 만들 때

```cpp
#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main()
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3,5) << std::endl;
	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[핵심 규칙] 디폴트 매개변수는 반드시 '뒤에서부터' 순서대로 채워집니다. 인자를 하나만 주면 그 값은 항상 맨 앞 매개변수(num1)로 들어가고, 남은 뒤쪽 매개변수(num2)만 기본값을 씁니다. num1은 생략하고 num2만 지정하는 건 불가능합니다.

[호출별 동작 분석]
Adder() → 인자 0개 → num1=1(기본값), num2=2(기본값) → 1+2 = 3
Adder(5) → 인자 1개 → num1=5(직접 지정), num2=2(기본값) → 5+2 = 7
Adder(3,5) → 인자 2개 → num1=3, num2=5(둘 다 직접 지정) → 3+5 = 8

[왜 유용한가] 함수를 여러 방식으로 호출할 수 있게 해주면서도, 오버로딩처럼 함수를 여러 번 따로 정의할 필요가 없습니다. 자주 쓰는 기본값은 미리 정해두고, 필요할 때만 값을 바꿔주면 되는 구조입니다.

</details>

**▶️ 실행 결과**
```
3
7
8

```

<blockquote>

#### 🔁 opp06의 변형 · 매개변수 1개짜리 디폴트 매개변수

[기본형으로 돌아가서] Adder는 매개변수가 2개였지만, 디폴트 매개변수는 1개짜리 함수에서도 똑같이 동작합니다. 아래 예제로 가장 단순한 형태부터 다시 확인해봅니다.

[동작 원리] MyFuncOne()처럼 인자 없이 호출하면 num 자리가 비어있으니 기본값 7이 대신 들어가 num+1=8이 반환됩니다. MyFuncOne(10)처럼 값을 직접 주면 그 값(10)이 기본값 대신 사용되어 11이 반환됩니다. 즉 "값을 안 주면 이걸 써라"는 안전장치를 함수 안에 미리 심어두는 것입니다.

[Adder와 비교] Adder(int num1=1, int num2=2)는 이 원리를 매개변수 2개로 확장한 것뿐입니다. 매개변수가 몇 개든 "뒤에서부터 채워진다"는 규칙은 동일하게 적용됩니다.

```cpp
#include <iostream>

int MyFuncOne(int num = 7)
{
	return num + 1;
}

int main()
{
	std::cout << MyFuncOne() << std::endl;
	std::cout << MyFuncOne(10) << std::endl;
	return 0;
}
```

**▶️ 실행 결과**
```
8
11

```

</blockquote>

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### ⚡ opp07. inline 함수

> 💡 **언제 쓰나** · 짧고 자주 호출되는 함수에서, 함수 호출에 드는 비용(오버헤드)을 없애고 싶을 때

```cpp
#include <iostream>

inline int SQUARE(int x)
{
	return x * x;
}
int main()
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[개념] inline은 컴파일러에게 "이 함수는 짧으니, 함수를 호출하는 대신 호출된 자리에 함수 내용을 그대로 복사해 넣어라"고 요청하는 키워드입니다.

[왜 필요한가] 일반적인 함수 호출은 '이 함수로 점프했다가 다시 돌아오는' 과정에서 약간의 시간 비용이 듭니다. SQUARE(x)처럼 계산 한 줄짜리 아주 간단한 함수까지 매번 점프-복귀를 하면 오히려 비효율적일 수 있어서, inline으로 표시해 그 자리에서 바로 계산하게 만드는 최적화 기법입니다.

[주의할 점] inline은 컴파일러에게 보내는 '요청'이지 '명령'이 아닙니다. 함수가 너무 길거나 복잡하면 컴파일러가 inline 요청을 무시하고 일반 함수처럼 처리할 수도 있습니다. 짧고 단순한 함수에만 어울리는 키워드입니다.

</details>

**▶️ 실행 결과**
```
25
144

```

<blockquote>

#### 🔁 opp07의 변형 · 삼항 연산자를 활용한 inline 함수

if-else 대신 삼항 연산자(조건 ? 참일때 : 거짓일때)를 쓰면 한 줄짜리 함수를 더 간결하게 만들 수 있어, inline으로 선언하기 좋은 형태가 됩니다. Max, Min처럼 두 값을 비교해서 하나를 고르는 함수가 대표적인 예입니다.

```cpp
#include <iostream>

inline int Max(int a, int b)
{
	return a > b ? a : b;
}
inline int Min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	std::cout << "Max: " << Max(7, 3) << std::endl;
	std::cout << "Min: " << Min(7, 3) << std::endl;
	return 0;
}
```

**▶️ 실행 결과**
```
Max: 7
Min: 3

```

</blockquote>

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### 📦 opp08. namespace(이름공간) 기초

> 💡 **언제 쓰나** · 서로 다른 그룹(회사, 라이브러리 등)에서 같은 이름의 함수를 만들어도 충돌 없이 구분해서 쓰고 싶을 때

```cpp
#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void) {
		std::cout << "BestCom이 정의한 함수 " << std::endl;
	}
}

namespace ProgComImpl {
	void SimpleFunc(void) {
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[개념] namespace(이름공간)는 같은 이름의 함수나 변수가 여러 그룹에 존재해도 충돌 없이 구분해서 쓸 수 있게 해주는 문법입니다. 여기서는 BestComImpl과 ProgComImpl이라는 두 이름공간이 각자 SimpleFunc라는 같은 이름의 함수를 갖고 있습니다.

[:: 연산자] "이름공간::함수이름" 형태로 "어느 이름공간 소속의 함수인지" 명확히 지정해서 호출합니다. 사실 지금까지 계속 써온 std::cout도 std라는 이름공간 안의 cout을 쓴다는 뜻이었습니다.

[왜 필요한가] 여러 사람이 함께 만드는 큰 프로그램이나, 여러 라이브러리를 동시에 가져다 쓸 때 함수/변수 이름이 우연히 겹치는 걸 막기 위해 씁니다. namespace 없이 SimpleFunc를 두 번 정의하면 매개변수까지 똑같기 때문에 함수 오버로딩으로도 구제되지 않고 바로 "중복 정의" 오류가 납니다.

[문법 실수 포인트] 함수 몸통의 중괄호 { }를 빠뜨리거나, 이름공간·함수 이름 철자를 조금이라도 다르게 쓰면 "정의되지 않음" 오류가 나니 이름 일치 여부를 꼼꼼히 확인해야 합니다.

</details>

**▶️ 실행 결과**
```
BestCom이 정의한 함수 
ProgCom이 정의한 함수

```

<blockquote>

#### 🔁 opp08의 변형 · using namespace로 소속 생략하기

매번 '이름공간::'을 쓰기 번거로우면 using namespace 선언으로 특정 이름공간만 생략할 수 있습니다. 단, 두 이름공간 모두에 using을 걸면 어느 쪽 함수인지 컴파일러가 판단하지 못해 모호함(ambiguous) 오류가 날 수 있으니, 생략은 한쪽에만 거는 것이 안전합니다.

```cpp
#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void) {
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImpl {
	void SimpleFunc(void) {
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main()
{
	using namespace ProgComImpl;   // ProgComImpl만 생략 가능하게 함

	SimpleFunc();                  // ProgComImpl::SimpleFunc() 호출됨
	BestComImpl::SimpleFunc();     // 이쪽은 여전히 :: 로 명시해야 함

	return 0;
}
```

**▶️ 실행 결과**
```
ProgCom이 정의한 함수
BestCom이 정의한 함수

```

</blockquote>

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### 🪆 opp09. 중첩 namespace와 별칭(alias)

> 💡 **언제 쓰나** · 이름공간 안에 이름공간을 겹겹이 두어 더 세밀하게 그룹을 나누고 싶을 때, 그리고 그 긴 경로에 짧은 별명을 붙이고 싶을 때

```cpp
#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main()
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;

	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[중첩 namespace] AAA 안에 BBB, BBB 안에 CCC를 두는 것처럼 이름공간은 여러 겹으로 중첩될 수 있습니다. 접근할 때는 바깥쪽부터 안쪽까지 ::로 전부 이어서 씁니다(AAA::BBB::CCC::num1).

[namespace alias(별칭)] namespace ABC = AAA::BBB::CCC; 는 길고 반복적인 이름공간 경로에 짧은 별명 ABC를 붙이는 문법입니다. 이후로는 AAA::BBB::CCC::num1 대신 ABC::num1처럼 짧게 쓸 수 있어 코드가 훨씬 읽기 편해집니다.

[중괄호 짝 맞추기 주의] 이름공간을 3단으로 열었으면(AAA, BBB, CCC) 닫는 중괄호도 반드시 3개가 있어야 합니다. 하나라도 빠지면 뒤에 오는 코드(main 함수 등)가 의도치 않게 그 이름공간 안에 들어가 버리거나, 파일 끝에서 "닫는 중괄호가 없다"는 오류가 납니다. 중첩이 깊어질수록 들여쓰기를 맞춰두면 짝이 안 맞는 실수를 눈으로 바로 확인할 수 있습니다.

</details>

**▶️ 실행 결과**
```
20
30

```

<blockquote>

#### 🔁 opp09의 변형 · using 선언으로 이름 하나만 꺼내 쓰기

이름공간 전체를 생략하지 않고, 그 안의 특정 이름 하나만 꺼내 쓰고 싶다면 using 선언(using 이름공간::이름;)을 씁니다. using namespace보다 훨씬 안전한데, 딱 지정한 이름만 생략 가능해지고 나머지는 여전히 소속을 밝혀야 하기 때문입니다.

```cpp
#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1 = 100;
			int num2 = 200;
		}
	}
}

int main()
{
	using AAA::BBB::CCC::num1;   // num1만 소속 생략 가능하게 함

	cout << num1 << endl;               // num1은 그대로 사용 가능
	cout << AAA::BBB::CCC::num2 << endl; // num2는 여전히 전체 경로 필요

	return 0;
}
```

**▶️ 실행 결과**
```
100
200

```

</blockquote>

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### 🔘 opp10. bool 자료형, while(true)+break, sizeof

> 💡 **언제 쓰나** · 참/거짓을 나타내는 값을 다룰 때, 반복 횟수를 코드 중간에서 직접 정하고 싶을 때, 자료형이 메모리를 얼마나 차지하는지 확인하고 싶을 때

```cpp
#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	int i = 0;
	cout << "true: " << true << endl;
	cout << "false: " << false << endl;
	while (true)
	{
		cout << i++ << ' ';
		if (i > num)
			break;
	}
	cout << endl;

	cout << "sizeof 1: " << sizeof(1) << endl;
	cout << "sizeof 0: " << sizeof(0) << endl;
	cout << "sizeof true: " << sizeof(true) << endl;
	cout << "sizeof false: " << sizeof(false) << endl;

	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[오류였던 부분] 원래 이 코드에는 std:: 를 안 붙였는데 using namespace std;도 없어서 "cout이 뭔지 모르겠다"는 오류가 났었습니다. using namespace std;를 추가하면 std:: 를 매번 안 붙여도 됩니다.

[bool 값의 출력] true는 화면에 1로, false는 0으로 출력됩니다. C++의 bool은 내부적으로 1(참)/0(거짓)이라는 정수값으로 저장되기 때문입니다.

[while(true) + break 패턴] while(true)는 조건이 항상 참이라 저절로는 멈추지 않는 '무한루프'입니다. 대신 반복문 안에서 if(조건) break;로 원하는 시점에 직접 빠져나오도록 만듭니다. 이 코드에서는 i가 0부터 시작해서 num(10)을 넘는 순간(11이 되는 순간) 반복을 멈춥니다. for문처럼 조건을 미리 정해두는 대신, 반복 중간의 상황을 보고 유동적으로 멈추고 싶을 때 이 패턴을 씁니다.

[sizeof 연산자] 어떤 값이나 자료형이 메모리에서 몇 바이트를 차지하는지 알려줍니다. int(1, 0)는 4바이트, bool(true, false)은 1바이트로 나옵니다. bool은 참/거짓 두 가지만 표현하면 되므로 굳이 큰 공간을 쓰지 않습니다.

</details>

**▶️ 실행 결과**
```
true: 1
false: 0
0 1 2 3 4 5 6 7 8 9 10 
sizeof 1: 4
sizeof 0: 4
sizeof true: 1
sizeof false: 1

```

<blockquote>

#### 🔁 opp10의 변형 · 여러 자료형의 sizeof 한눈에 비교하기

int, bool 말고 다른 자료형도 sizeof로 비교해보면 '자료형마다 메모리 크기가 다르다'는 감이 훨씬 잘 잡힙니다. 크기가 클수록 더 큰/정밀한 값을 표현할 수 있지만 메모리를 더 많이 씁니다.

```cpp
#include <iostream>
using namespace std;

int main()
{
	cout << "sizeof char: " << sizeof(char) << endl;
	cout << "sizeof int: " << sizeof(int) << endl;
	cout << "sizeof long: " << sizeof(long) << endl;
	cout << "sizeof float: " << sizeof(float) << endl;
	cout << "sizeof double: " << sizeof(double) << endl;
	cout << "sizeof bool: " << sizeof(bool) << endl;
	return 0;
}
```

**▶️ 실행 결과**
```
sizeof char: 1
sizeof int: 4
sizeof long: 8
sizeof float: 4
sizeof double: 8
sizeof bool: 1

```

</blockquote>

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### ❓ opp11. bool을 반환하는 함수로 양수/음수 판별하기

> 💡 **언제 쓰나** · 참/거짓 판단 결과 자체를 함수의 반환값으로 그대로 돌려주고 싶을 때 (bool 반환 함수)

```cpp
#include <iostream>
using namespace std;

bool IsPositive(int num)

{
	if (num < 0)
		return false;
	else
		return true;
}

int main()
{
	bool isPos;
	int num;
	cout << "Input number: ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;
	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[오타 수정] 원래 코드에서 함수 이름이 IsPostive(i 빠짐)로, 출력 문자열이 "Input nuber"(m 빠짐)로 되어 있던 것을 IsPositive, "Input number: "로 수정했습니다. 오타 자체는 컴파일에 문제를 일으키지 않았지만(정의한 이름과 호출한 이름이 일치하기만 하면 됨), 가독성을 위해 바로잡았습니다.

[bool 반환 함수] IsPositive 함수는 조건을 판단한 뒤 그 결과(참/거짓)를 bool 값으로 직접 반환합니다. 호출하는 쪽(main)에서는 isPos = IsPositive(num);처럼 그 결과를 bool 변수에 그대로 받아서, if(isPos)로 바로 분기할 수 있습니다. "판단"과 "그 판단에 따른 동작"을 함수와 호출부로 깔끔하게 나눈 구조입니다.

[생각해볼 점: 0은 어느 쪽?] num < 0이 거짓인 경우(0 포함) 전부 true를 반환하므로, 0을 입력해도 "Positive number"로 분류됩니다. 수학적으로 0은 양수도 음수도 아니지만, 이 함수는 "0 이상이면 양수로 취급"하는 방식을 택한 것입니다. 오류는 아니고 설계상의 선택이지만, 왜 그런 결과가 나오는지는 알아두면 좋습니다. (이 부분은 로직 자체의 특성이라 오타와 달리 그대로 두었습니다.)

</details>

**▶️ 실행 결과** (입력: `5`)
```
Input number: Positive number

```

<blockquote>

#### 🔁 opp11의 변형 · 0을 별도로 분류하는 3단계 판별

0을 양수/음수 어느 쪽에도 넣지 않고 싶다면, bool(참/거짓 두 값) 대신 서로 다른 정수(예: -1, 0, 1)를 반환하도록 바꾸면 세 가지 경우를 모두 구분할 수 있습니다. 반환 자료형을 bool에서 int로 바꾼 이유가 바로 '표현해야 하는 경우의 수'가 둘에서 셋으로 늘었기 때문입니다.

```cpp
#include <iostream>
using namespace std;

int CheckSign(int num)
{
	if (num < 0)
		return -1;   // 음수
	else if (num == 0)
		return 0;    // 0
	else
		return 1;    // 양수
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

	return 0;
}
```

**▶️ 실행 결과** (입력: `0`)
```
Input number: Zero

```

</blockquote>

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### 🔗 opp12. 참조자(reference) — 변수에 별명 붙이기

> 💡 **언제 쓰나** · 함수에 원본 변수를 그대로 넘겨서 값을 바꾸고 싶을 때, 또는 포인터의 '*', '&' 없이 간단하게 원본을 다루고 싶을 때

```cpp
#include <iostream>
using namespace std;

int main()
{
	int num1 = 1020;
	int& num2 = num1;

	num2 = 3047;

	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;
	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[개념] int& num2 = num1; 에서 num2는 num1을 가리키는 '새로운 변수'가 아니라, num1과 완전히 같은 메모리 공간을 부르는 '또 다른 이름(별명)'입니다. num2에 값을 넣는 것은 곧 num1에 값을 넣는 것과 100% 동일합니다.

[실행 결과 해석] num2 = 3047; 을 실행하면 num1도 3047로 함께 바뀝니다(별명이니 당연합니다). 그리고 &num1과 &num2로 두 변수의 주소를 출력해보면 완전히 같은 주소가 나오는데, 이는 num1과 num2가 서로 다른 두 공간이 아니라 '같은 공간을 가리키는 두 이름'이라는 사실을 직접 증명해줍니다.

[포인터(pointer) vs 참조자(reference) — 자세한 비교]

1. 선언 방식
   포인터: int* p = &num;   → p에 num의 '주소값'을 저장
   참조자: int& r = num;    → r을 num 자체의 '별명'으로 등록

2. 값에 접근하는 방법
   포인터: *p 처럼 역참조(*) 기호를 매번 붙여야 원래 값에 접근함
   참조자: r을 그냥 num인 것처럼 바로 사용함 (별도 기호 불필요)

3. 대상을 바꿀 수 있는가
   포인터: p = &다른변수; 로 나중에 다른 곳을 가리키게 재할당 가능
   참조자: 한 번 num의 별명으로 정해지면 끝까지 num만 가리킴, 다른 변수의 별명으로 바꿀 수 없음

4. 아무것도 가리키지 않는 상태(NULL)
   포인터: int* p = NULL; 처럼 '아무 데도 안 가리키는' 상태가 가능함
   참조자: 선언과 동시에 반드시 누군가를 가리켜야 하며, 빈 참조자는 만들 수 없음

5. 언제 무엇을 쓰나
   포인터: 가리키는 대상이 중간에 바뀌어야 하거나, '아무것도 없음'을 표현해야 할 때
   참조자: 함수에 원본을 그대로 전달해서 값을 바꾸고 싶은데, 포인터 문법(*, &)의 번거로움 없이 간단하게 쓰고 싶을 때

[한 줄 요약] 포인터는 '주소를 저장하는 별도의 상자'이고, 참조자는 '기존 변수에 붙이는 두 번째 이름표'입니다.

</details>

**▶️ 실행 결과**
```
VAL: 3047
REF: 3047
VAL: 0x7fff9936c15c
REF: 0x7fff9936c15c

```

<blockquote>

#### 🔁 opp12의 변형 · 포인터로 같은 상황 다시 작성해보기

바로 위 예제를 포인터 버전으로 똑같이 만들어보면 차이가 눈에 확 들어옵니다. 포인터는 *로 역참조해야 값에 접근할 수 있고, 포인터 변수 자체(ptr)와 포인터가 가리키는 주소(*ptr)를 구분해서 다뤄야 합니다.

```cpp
#include <iostream>
using namespace std;

int main()
{
	int num1 = 1020;
	int* ptr = &num1;   // ptr에는 num1의 '주소'가 저장됨

	*ptr = 3047;         // *ptr로 역참조해서 값을 바꿔야 함

	cout << "VAL: " << num1 << endl;
	cout << "PTR이 가리키는 값: " << *ptr << endl;

	cout << "num1의 주소: " << &num1 << endl;
	cout << "ptr에 저장된 주소값: " << ptr << endl;   // *  없이 ptr 자체를 출력
	return 0;
}
```

**▶️ 실행 결과**
```
VAL: 3047
PTR이 가리키는 값: 3047
num1의 주소: 0x7ffe89c2f7fc
ptr에 저장된 주소값: 0x7ffe89c2f7fc

```

</blockquote>

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### 📎 opp13. 배열 원소에 참조자 걸기

> 💡 **언제 쓰나** · 배열의 특정 칸(원소)에 별명을 붙여서, 배열 문법(arr[i]) 없이 짧은 이름으로 값을 다루고 싶을 때

```cpp
#include <iostream>
using namespace std;
int main()
{
	int arr[3] = { 1,3,5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;
	return 0;
}
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[개념] 1-12에서 배운 참조자를 변수가 아니라 '배열의 한 칸'에 걸 수도 있습니다. int& ref1 = arr[0]; 은 ref1을 arr[0]의 별명으로 만듭니다. ref1과 arr[0]은 이름만 다를 뿐 완전히 같은 메모리 공간입니다.

[활용 포인트] ref1 = 100; 처럼 참조자에 값을 대입하면 arr[0]도 그대로 100으로 바뀝니다. 배열의 특정 원소를 반복해서 다뤄야 하는 코드에서, 매번 arr[0]이라고 쓰는 대신 짧은 별명을 붙여두면 코드가 간결해질 수 있습니다.

</details>

**▶️ 실행 결과**
```
1
3
5

```

<blockquote>

#### 🔁 opp13의 변형 · 참조자로 배열 원소 값을 실제로 바꿔보기

참조자가 진짜 원본을 가리키는지 확인하는 가장 확실한 방법은, 참조자 쪽 값을 바꾼 뒤 배열 원본을 다시 출력해보는 것입니다.

```cpp
#include <iostream>
using namespace std;
int main()
{
	int arr[3] = { 1,3,5 };
	int& ref1 = arr[0];

	ref1 = 100;   // ref1에 값을 대입

	cout << "ref1: " << ref1 << endl;
	cout << "arr[0]: " << arr[0] << endl;   // arr[0]도 100으로 바뀌어 있음

	return 0;
}
```

**▶️ 실행 결과**
```
ref1: 100
arr[0]: 100

```

</blockquote>

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

### 🪢 opp14. 참조자와 포인터를 함께 쓰기

> 💡 **언제 쓰나** · 포인터, 이중포인터가 가리키는 대상 자체에도 참조자로 별명을 붙이고 싶을 때 (참조자 문법의 응용)

```cpp
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
```

<details>
<summary><b>📝 개념 설명 보기</b></summary>

[오류였던 부분] 원래 코드는 int num, =12; 처럼 문법이 깨져 있었고(콤마 뒤 등호가 잘못 붙음), int* (&pref) = ptr 뒤에 세미콜론이 빠져 있었고, using namespace std;도 없었습니다. num = 12; 형태로, 세미콜론을 채워서, using namespace std;를 추가해 고쳤습니다.

[포인터 단계 복습] ptr은 num의 주소를 저장하는 포인터, dptr은 그 ptr의 주소를 저장하는 이중포인터입니다. num → ptr → dptr 순서로 한 단계씩 더 깊이 가리키는 구조입니다.

[참조자를 포인터에 거는 것] int* (&pref) = ptr; 은 "pref는 포인터 ptr의 별명이다"라는 뜻입니다. pref 자체가 포인터인 것이 아니라, 기존 포인터 변수 ptr에게 붙인 두 번째 이름표입니다. 마찬가지로 int** (&dpref) = dptr; 은 이중포인터 dptr의 별명입니다.

[세 출력이 모두 12로 같은 이유]
ref → num을 직접 가리킴 → 12
*pref → pref(=ptr의 별명)가 가리키는 곳 → num → 12
**dpref → dpref(=dptr의 별명)가 가리키는 ptr → 그 ptr이 가리키는 num → 12
결국 세 가지 경로 모두 같은 num 하나에 도달합니다. 참조자와 포인터가 섞여 있어 복잡해 보이지만, "누가 누구의 별명이고, 누가 누구의 주소를 담고 있는지"를 화살표로 하나씩 따라가 보면 정리됩니다.

</details>

**▶️ 실행 결과**
```
12
12
12

```

<blockquote>

#### 🔁 opp14의 변형 · 화살표로 관계를 정리한 간단 버전

이중포인터/참조자 없이 딱 한 단계(변수-포인터-참조자)만 남겨서 관계를 다시 확인해보면 이해가 쉬워집니다.

```cpp
#include <iostream>
using namespace std;

int main()
{
	int num = 55;
	int* ptr = &num;        // ptr: num의 주소를 저장
	int* (&pref) = ptr;      // pref: ptr의 별명 (ptr과 완전히 같은 것)

	cout << "num 자체: " << num << endl;
	cout << "*ptr (ptr이 가리키는 값): " << *ptr << endl;
	cout << "*pref (pref=ptr의 별명이 가리키는 값): " << *pref << endl;

	*pref = 99;   // pref를 통해 값을 바꿔도
	cout << "변경 후 num: " << num << endl;   // num이 그대로 바뀜 (ptr, pref 모두 결국 num을 가리키므로)

	return 0;
}
```

**▶️ 실행 결과**
```
num 자체: 55
*ptr (ptr이 가리키는 값): 55
*pref (pref=ptr의 별명이 가리키는 값): 55
변경 후 num: 99

```

</blockquote>

<div align="right"><a href="#toc">목차로 ↑</a></div>

---

<div align="center">

*🌱 매일 조금씩 — Day 1 완료*

</div>