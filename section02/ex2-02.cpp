/*
    예제 2-02. 함수 포인터 선언과 사용
*/
#include <cstdint>
#include <iostream>

using namespace std;

void Print(int n) { cout << "정수: " << n << endl; }

int main()
{
    void (*pf)(int); // void Print(int n)의 함수 포인터 선언
    pf = Print;      // 함수의 이름은 함수의 시작 주소

    Print(10); // 1. 함수 호출
    pf(10);    // 2-1. 포인터를 이용한 함수 호출
    (*pf)(10); // 2-2. 포인터를 이용한 함수 호출

    auto addr1 = reinterpret_cast<uintptr_t>(Print);
    auto addr2 = reinterpret_cast<uintptr_t>(pf);
    auto addr3 = reinterpret_cast<uintptr_t>(*pf);

    cout << endl;
    cout << addr1 << endl;
    cout << addr2 << endl;
    cout << addr3 << endl;

    return 0;
}
