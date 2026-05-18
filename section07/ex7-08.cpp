/*
    예제 7-08. set의 정렬 기준을 사용한 값 비교
*/
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int, less<int>> s; // 정렬 기준 less

    // 30과 50의 비교 : 다르다!
    cout << (!s.key_comp()(30, 50) && !s.key_comp()(50, 30)) << endl;

    // 30과 30의 비교 : 같다!
    cout << (!s.key_comp()(30, 30) && !s.key_comp()(30, 30)) << endl;

    return 0;
}