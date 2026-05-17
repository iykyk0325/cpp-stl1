/*
    예제 2-4. 정적 함수 포인터

    - 정적 함수인 전역 함수, namespace 내의 전역 함수, static 멤버 함수는
      모두 함수 호출 규약이 같아서 함수 포인터가 같습니다.
*/
#include <iostream>

using namespace std;

void Print(int n) { cout << "전역 함수: " << n << endl; }

namespace A {
    void Print(int n) { cout << "namespace A 전역 함수: " << n << endl; }
} // namespace A

class Point {
public:
    static void Print(int n)
    {
        cout << "Point 클래스의 정적 멤버 함수: " << n << endl;
    }
};

int main()
{
    void (*pf)(int); // 정적 함수 포인터 선언

    Print(10);        // 1. namespace 없는 전역 함수 호출
    A::Print(10);     // 2. namespace A의 전역 함수 호출
    Point::Print(10); // 3. Point 클래스의 정적 멤버 함수 호출
    cout << endl;

    pf = Print; // 1. 함수 포인터로 namespace 없는 전역 함수 호출
    pf(10);
    pf = A::Print; // 2. 함수 포인터로 namespace A의 전역 함수 호출
    pf(10);
    pf = Point::Print; // 3. 함수 포인터로 Point 클래스의 정적 멤버 함수 호출
    pf(10);

    return 0;
}
