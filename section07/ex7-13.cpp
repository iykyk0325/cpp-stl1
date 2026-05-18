/*
    예제 7-13. multiset의 equal_range()
*/
#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(50);
    ms.insert(30);
    ms.insert(80);
    ms.insert(80); // 중복
    ms.insert(30); // 중복
    ms.insert(70);
    ms.insert(10);

    multiset<int>::iterator iter;
    for (iter = ms.begin(); iter != ms.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    pair<multiset<int>::iterator, multiset<int>::iterator> iter_pair;
    iter_pair = ms.equal_range(30);

    // [iter_pair.first, iter_pair.second) 구간의 순차열
    for (iter = iter_pair.first; iter != iter_pair.second; iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}