/*
    예제 3-03. 멤버 변수를 갖는 함수 객체
*/
#include <iostream>

using namespace std;

class Adder {
    int total;

public:
    explicit Adder(int n)
        : total(n)
    {
    }

    int operator()(int n) { return total += n; }
};

int main()
{
    Adder add(0); // 초기값 0

    cout << add(10) << endl; // 10을 누적 : total = 10
    cout << add(20) << endl; // 20을 누적 : total = 30
    cout << add(30) << endl; // 30을 누적 : total = 60

    return 0;
}
