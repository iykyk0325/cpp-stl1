/*
    예제 1-23. 생성자를 이용한 타입 변환
*/
#include <iostream>

using namespace std;

class A {};

class B {
public:
    B() { cout << "B() 생성자" << endl; }

    B(A& _a) { cout << "B(A& _a) 생성자" << endl; }

    B(int n) { cout << "B(int n) 생성자" << endl; }

    B(double d) { cout << "B(double d) 생성자" << endl; }
};

int main()
{
    A a;
    int n = 10;
    double d = 5.5;

    B b;   // B() 생성자 호출
    b = a; // B(A &_a) 암시적 생성자 호출 후 대입
    b = n; // B(int n) 암시적 생성자 호출 후 대입
    b = d; // B(double d) 암시적 생성자 호출 후 대입

    return 0;
}
