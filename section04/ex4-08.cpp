/*
    예제 4-08. Point 객체를 출력하지 못하는 함수 템플릿 예제
*/
#include <iostream>

using namespace std;

class Point {
    int x;
    int y;

public:
    explicit Point(int _x = 0, int _y = 0)
        : x(_x),
          y(_y)
    {
    }

    void Print() const { cout << x << ", " << y << endl; }
};

template <typename T>
void Print(T a)
{
    cout << a << endl;
}

int main()
{
    int n = 10;
    double d = 2.5;
    Point pt(2, 3);

    Print(n);
    Print(d);
    // Print(pt); // 주석 해제시 에러 발생!

    return 0;
}
