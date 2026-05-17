/*
    예제 1-25. explicit Point 생성자
*/
#include <iostream>

using namespace std;

class A {};

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

int main()
{
    Point pt;
    pt.Print();

    // pt = 10; 에러: 암시적 생성자 호출 불가능
    pt = Point(10);
    pt.Print();

    return 0;
}
