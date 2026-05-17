/*
    예제 3-06. STL의 less 함수 객체
*/
#include <functional>
#include <iostream>

using namespace std;

int main()
{
    less<int> l;

    cout << l(10, 20) << endl;            // 객체로 암시적 함수 호출
    cout << l(20, 10) << endl;            // 객체로 암시적 함수 호출
    cout << l.operator()(10, 20) << endl; // 객체로 명시적 함수 호출
    cout << endl;

    cout << less<int>()(10, 20) << endl; // 임시 객체로 암시적 함수 호출
    cout << less<int>()(20, 10) << endl; // 임시 객체로 암시적 함수 호출
    cout << less<int>().operator()(10, 20)
         << endl; // 임시 객체로 명시적 함수 호출
    cout << endl;

    return 0;
}
