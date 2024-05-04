// Class1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

int sum(int x, int y);
int MyFunction(void)
{
    return 0;
}

void MyFunction2(void)
{

}

int main()
{
    /*
    int Length = 5;
    Length = 10;

    int Hegith = 0;
    Hegith = Length;
    */

    /*
    int a = 1000000000;
    std::cout << a;
    */

    /*
    int MyInt = -10;
    unsigned long long Mylong = 100000000000000000;

    float MyFloat = 10.52128;
    float MyFloat2 = 10.02e2;

    std::cout << MyFloat2;
    */

    /*
    float A = 1.1;
    float B = 1.2;

    //std::cout << (A == B);
    std::cout << (2.4 == (A + B));
    */

    /*
    char MyChar = 'A' + 5;
    char MyChar2 = 70;
    std::cout << MyChar;
    */

    /*
    bool IsTrue = true;
    IsTrue = false;
    IsTrue = 1;
    IsTrue = 0;
    */

    /*
    // 자료형 설명
    void MyVoid;
    const int Limit = 20;
    Limit = 10;
    */

    /*
    //명시적 형변환
    char MyChar = (char)10;
    int MyInt = (int)100.552;
    */

    /*
    int Result;
    //Result = (2 + 5) * 3;
    //Result = (3 + 6) / 3;
    //Result = 5 % 2;
    Result = 10 / 3;
    std::cout << Result;
    */

    /*
    float Result;
    //Result = 10.0 / 3;
    Result = (float)10 / 3;
    Result = 10 - 5.5;
    std::cout << Result;
    */

    /*
    int a = 3;
    int b = 3;

    //a += 1;
    a *= b;

    std::cout << a;
    */

    /*
    //함수 선언 & 정의 & 호출
    int c;
    int a = 3;
    int b = 4;
    c = sum(a, b); //함수 호출
    std::cout << c;
    */

    /*
    //함수 형태
    MyFunction();
    MyFunction2();
    */

    /*
    printf("Hello\n");
    printf("World");
    */

    /*
    char Initial = 'S';
    printf("My Name is %c %c", Initial, Initial);
    */

    /*
    char Initial;
    scanf_s("%c", &Initial);
    printf("입력: %c", Initial);
    return 0;
    */

    /*
    char Initial = 'S';
    std::cout << "Hi" << " My Name is " << Initial << "!\n";
    std::cout << "GoodBye" << std::endl;
    std::cout << "Good";
    */

    /*
    int Age;
    std::cout << "나이를 입력: ";
    std::cin >> Age;
    std::cout << "My Age is " << Age << std::endl;
    */
    
}

int sum(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
