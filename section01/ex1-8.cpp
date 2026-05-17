/*
    예제 1-8. ++ 연산자 오버로딩 완성
*/
#include <iostream>

using namespace std;

class Point {
    int x;
    int y;

public:
    Point(int _x = 0, int _y = 0)
        : x(_x),
          y(_y)
    {
    }

    void Print() const { cout << x << ", " << y << endl; }

    const Point& operator++() // 전위 ++ 연산자
    {
        ++x;
        ++y;
        return *this;
    }

    const Point operator++(int) // 후위 ++ 연산자
    {
        Point tmp = *this;
        ++(*this);
        return tmp;
    }
};

int main()
{
    Point p1(2, 3), p2(2, 3);
    Point result;

    result = ++p1; // p1.operator++();
    p1.Print();
    result.Print();

    result = p2++; // p2.operator++(0);
    p2.Print();
    result.Print();

    return 0;
}