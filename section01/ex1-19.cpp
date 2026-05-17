/*
    예제 1-19. Point 클래스의 일반 포인터 사용
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
};

int main()
{
    Point *p1 = new Point(2, 3);
    Point *p2 = new Point(5, 5);

    p1->Print();
    p2->Print();

    delete p1;
    delete p2;

    return 0;
}
