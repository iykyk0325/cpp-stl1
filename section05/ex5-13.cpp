/*
    예제 5-13. less 조건자와 not2
*/
#include <functional>
#include <iostream>

using namespace std;

int main()
{
    // 임시 객체를 통한 비교
    cout << less<int>()(10, 20) << endl;
    cout << less<int>()(20, 20) << endl;
    cout << less<int>()(20, 10) << endl << endl;

    // 임시 객체를 통한 비교 : not2 어댑터 적용
    cout << not2(less<int>())(10, 20) << endl;
    cout << not2(less<int>())(20, 20) << endl;
    cout << not2(less<int>())(20, 10) << endl << endl;

    // less 객체를 통한 비교
    less<int> l;
    cout << l(10, 20) << endl;
    cout << l(20, 20) << endl;
    cout << l(20, 10) << endl << endl;

    // less 객체를 통한 비교 : not2 어댑터 적용
    cout << not2(l)(10, 20) << endl;
    cout << not2(l)(20, 20) << endl;
    cout << not2(l)(20, 10) << endl << endl;

    return 0;
}
