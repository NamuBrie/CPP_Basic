# 프로그래밍(네이밍) 표기법

- 프로그래밍 언어에서는 대소문자 구분
- 가독성과 연관
- 변수, 함수, 클래스 등의 이름 정할 때 여러 개의 영단어를 사용할 때 각각의 단어를 구분

#### 일반적인 문장 : unreal engine function variable

- Snake Case : unreal_engine_function_variable
- Kebab Case : unreal-engine-function-variable
- Camel Case : unrealenginefunctionvariable
- Pascal Case : UnrealEngineFunctionVariable

## 명령어, 예약어

- C++에서 명령어로 사용되기로 정해져 있는 구문
- 변수, 함수의 이름을 명명할 때 예약어와 중복되지 않도록 이름을 명명해야 함

##### 주석
    - 실행되지 않는 설명 부분

##### 데이터 종류
    - 숫자
     - 정수형 타입
     - 실수형 타입
    - 문자

bit, byte
8개의 bit가 모여 1byte (8bit = 1byte)
- bit : 컴퓨터 데이터의 최소 단위
- byte : 컴퓨터 데이터 의미의 최소 단위

컴퓨터가 사용하는 숫자 진법(진수) : 2진수(0,1)

* 8진수 : 0,1,2,3,4,5,6,7
* 10진수 : 0,1,2,3,4,5,6,7,8,9
* 16진수 : 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F

1bit => 0,1 저장 가능
2bit => 2 * 2 => 4
3bit => 2 * 2 * 2 => 8
4bit => 2 * 2 * 2 * 2 => 16
...
8bit => 2^8 => 256

1. 네트워크 ip address
192.168.0.1 / [0~255].[0~255].[0~255].[0~255]

2. 색 표현 (RGB color - 24bit )
R - 8bit
G - 8bit
B - 8bit
Red : FF0000

3. 문자 표현 : UTF-8, EUC-KR
  UTF-8 : 2byte 여러 언어 문자를 표현

  연산자와 연산
  - 값과 값 사이에 위치하는 기호

대입연산
- 대입 연산자 : =
- 리터럴 상수값을 변수에 대입시키는 것

증감연산
- 증가, 감소 연산
- 특징 정수 값의 크기만큼 증가 또는 감소

논리연산
- 참/거짓 판단하는 연산
- AND(그리고) 연산 : &&
- OR(또는) 연산 : ||
- NOT(부정) 연산 : !

비트연산
- 10진수 숫자 값, 문자 값을 그대로 데이터로 다루는 것이 아니라 2진수 데이터로 변경한 후 2진수 데이터를 연산 ( 각 자리 수 마다 연산 )
- 비트 이동 연산 : 각 비트의 자리를 이동 연산

삼항연산
- 조건식 (비교식) 결과값이 true/false
- true 이면 콜론 기준 앞의 값이 선택
- false 이면 콜론 기준 뒤의 값이 선택

if/else if/else
- 표현식의 결과값이 true/false 인지 판단해서 각 해당 분기의 명령 실행

if (표헌식)
{
  표현식이 참일 때 실행하는 부분
}
else if (표현식2)
{
  표현식2이 참일 때 실행하는 부분
}
else
{
  앞선 표현식이 모두 거짓일 때 실행하는 블럭
}

- if 구문의 실행 분기 선택 여부는 if가 다루는 bool type 값(T/F)에 따라서 결정
- if 옆의 값이 사용되는 괄호 부분에 bool type 값이 사용되면 분기 선택이 가능
- true/false => 1/0,


switch
-수식(연산식)의 숫자/문자 결과에 따라 실행 분기를 선택(결정)

switch(표현식)
{
  case:
    실행 구문1
  case:
    실행 구문2
  case:
  ...
   

}

for 구문
for(구문1; 구문2; 구문3)
{
  코드블록
}

- 구문1: for 처음 실행될 때 한 번만 실행
- 구문2: for 반복문(loop)이 반복 실행될 때 코드블록이 실행되기 전 실행되는 구문
- 구문3: for loop가 반복 실행될 때 코드블록을 실행한 이후에 실행되는 구문
- 구문2: 조건식, 구문3: 증감식

for(int i=0; i<10; i++){

      실행구문

}


- while
- 조건식이 참인 동안 반복 실행
- 코드 블록을 실행하기 전 조건식 비교 실행
- do~while : 코드 블록을 실행한 이후에 조건 비교


while(조건식) {
코드블록
}


do{
코드블록
}
while(조건식){
코드블록2
}


parameter(형식매개변수)와 argument(실제매개변수)

함수선언(정의)
void Function(para) <= parameter
{


}

함수 호출
Function(10); <= 10: 실제 매개변수 (argument)

# 클래스

- 객체 지향 프로그램의 대표적인 기법
- 구조체로부터 업그레이드된 기법
  - 구조체 : 변수만으로 집합체를 구성할 수 있음
  - 클래스 : 변수와 함수로 구성된 집합체

- 객체지향 프로그래밍의 특징
    - 추상화
    - 캡슐화
    - 정보 은닉
    - 상속성
    - 다형성

- 클래스의 구성
    -변수 : 멤버 변수 / 프로퍼티(속성, 구성원)
    -함수 : 멤버 함수 / 메소드

- 클래스의 의미
  - 클래스
    - 설계도

  - 객체 / 인스턴스
    - 클래스를 통해서 생성된 실체

### 선언
#### 구조체 선언
```
struct Car
{
    char name[30];
    char model[30];
    int year;
    float TireSize;
    char color[30];
}
   
void Drive(){}
void Break(){}
void Parking(){}
void Rear(){}

 Car Sonata;

 cout << Sonata.year << endl;

 Sonata.Drive();

 Car BMW = { "X7", "xDrive40i" , 2023 , 23.1 , "Black" }
 Car Jeep = { "Rubicon", "Mountain" , 2021, 26, "Blue" }

 cout << BMW.year << endl;

 cout << Jeep

 Drive("X7");
 Drive("Rubicon");

```

#### 클래스 선언
```
class Car
{
    char name[30];
    char model[30];
    int Year;
    float TireSize;
    char color[30];


    void Drive(char name[30]){}
    void Break(char name[30]){}
    void Parking(char name[30]){}
    void Rear(char name[30]){}
}
```

## 생성자(Constructor)와 소멸자(Destructor)

### 생성자

  -클래스 타입의 변수가 생성될 때 초기호하는 함수
  -초기화 기능 / 초기화가 진행될 때 연계해서 다른 기능 동작

### 소멸자

  -클래스 쓰임새가 다 했거나 프로그램 종료시 생성되었던 클래스를 해제하는 함수
  -소멸 기능 / 클래스 소멸이 진행된 후 연계해서 다른 기능 동작