/*
    예제 1-15. 몇 가지 함수 호출 연산자 오버로딩

    - 임시 객체
    FuncObject()처럼 클래스 이름으로 임시 객체를 생성할 수 있습니다.
    임시 객체는 그 문장에서 생성되고 그 문장을 벗어나면 소멸됩니다.
    그 문장에서만 임시로 필요한 객체에 사용합니다.
*/

#include <iostream>

using namespace std;

struct FuncObject {
public:
    void operator()(int arg) const { cout << "정수 : " << arg << endl; }

    void operator()(int arg1, int arg2) const
    {
        cout << "정수 : " << arg1 << ", " << arg2 << endl;
    }

    void operator()(int arg1, int arg2, int arg3) const
    {
        cout << "정수 : " << arg1 << ", " << arg2 << ", " << arg3 << endl;
    }
};

void Print1(int arg) { cout << "정수 : " << arg << endl; }

int main()
{
    FuncObject print;

    // 암시적 호출
    print(10);
    print(10, 20);
    print(10, 20, 30);
    cout << endl;

    // 명시적 호출
    print.operator()(10);
    print.operator()(10, 20);
    print.operator()(10, 20, 30);
    cout << endl;

    // 임시 객체로 호출(암시적)
    FuncObject()(10);
    FuncObject()(10, 20);
    FuncObject()(10, 20, 30);

    // 임시 객체로 호출(명시적)
    FuncObject().operator()(10);
    FuncObject().operator()(10, 20);
    FuncObject().operator()(10, 20, 30);

    return 0;
}
