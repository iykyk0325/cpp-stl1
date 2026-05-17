/*
    예제 1-27. Point 클래스의 int 타입 변환 연산자
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

    operator int() const { return x; }
};

int main()
{
    int n = 10;

    Point pt(2, 3);
    n = pt; // pt.operator int() 암시적 호출
    cout << n << endl;

    return 0;
}
