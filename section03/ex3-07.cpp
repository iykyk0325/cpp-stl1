/*
    예제 3-07. Greater의 구현
*/
#include <functional>
#include <iostream>

using namespace std;

struct Less {
    bool operator()(int a, int b) { return a < b; }
};

struct Greater {
    bool operator()(int a, int b) { return a > b; }
};

int main()
{
    // 사용자 정의 Less, Greater 사용
    cout << Less()(10, 20) << endl;
    cout << Less()(20, 10) << endl;
    cout << Greater()(10, 20) << endl;
    cout << Greater()(20, 10) << endl;
    cout << endl;

    // STL less, greater 사용
    cout << less<int>()(10, 20) << endl;
    cout << less<int>()(20, 10) << endl;
    cout << greater<int>()(10, 20) << endl;
    cout << greater<int>()(20, 10) << endl;

    return 0;
}
