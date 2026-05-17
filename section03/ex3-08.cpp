/*
    예제 3-08. plus와 minus 함수 객체 구현
*/
#include <functional>
#include <iostream>

using namespace std;

struct Plus {
    int operator()(int a, int b) { return a + b; }
};

struct Minus {
    int operator()(int a, int b) { return a - b; }
};

int main()
{
    // 사용자 정의 Plus, Minus 사용
    cout << Plus()(10, 20) << endl;
    cout << Plus()(20, 10) << endl;
    cout << Minus()(10, 20) << endl;
    cout << Minus()(20, 10) << endl;
    cout << endl;

    // STL plus, minus 이용
    cout << plus<int>()(10, 20) << endl;
    cout << plus<int>()(20, 10) << endl;
    cout << minus<int>()(10, 20) << endl;
    cout << minus<int>()(20, 10) << endl;

    return 0;
}
