/*
    예제 6-43. list의 조건자 버전 sort()
*/
#include <iostream>
#include <list>

using namespace std;

struct Greater {
    bool operator()(int left, int right) const { return left > right; }
};

int main()
{
    list<int> lt;

    lt.push_back(20);
    lt.push_back(10);
    lt.push_back(50);
    lt.push_back(30);
    lt.push_back(40);

    list<int>::iterator iter;
    for (iter = lt.begin(); iter != lt.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    // 조건자 greater를 사용하여 내림차순 정렬
    lt.sort(greater<int>());
    for (iter = lt.begin(); iter != lt.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    // 조건자 less를 사용하여 오름차순 정렬
    lt.sort(less<int>());
    for (iter = lt.begin(); iter != lt.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    // 사용자 정의 조건자를 사용하여 내림차순 정렬
    lt.sort(Greater());
    for (iter = lt.begin(); iter != lt.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}