/*
    예제 1-02. Point 객체의 + 연산
*/
#include <iostream>

using namespace std;

// 사용자가 정의한 클래스
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
};

int main()
{
    Point p1(2, 3), p2(5, 3);

    // p1 + p2; // 주석 해제시 에러

    return 0;
}