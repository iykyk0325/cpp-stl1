/*
    예제 6-36. list의 remove_if()
*/
#include <iostream>
#include <list>

using namespace std;

bool Predicate(int n) // 단항 조건자
{
    return 10 <= n && n <= 30;
}

int main()
{
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);

    list<int>::iterator iter;
    for (iter = lt.begin(); iter != lt.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    // 조건자가 참인 모든 원소를 제거
    lt.remove_if(Predicate);
    for (iter = lt.begin(); iter != lt.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}