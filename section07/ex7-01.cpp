/*
    예제 7-01. set의 insert()
*/
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s; // int 원소를 저장하는, 기본 정렬 기준이 less인 빈 컨테이너 생성

    s.insert(50);
    s.insert(30);
    s.insert(80);
    s.insert(40);
    s.insert(10);
    s.insert(70);
    s.insert(90);

    set<int>::iterator iter;
    for (iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    s.insert(50); // 에러
    s.insert(50); // 에러
    for (iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}