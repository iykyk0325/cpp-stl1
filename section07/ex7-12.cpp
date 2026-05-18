/*
    예제 7-12. multiset의 찾기 관련 함수
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

    cout << "30 원소의 개수: " << ms.count(30) << endl;

    iter = ms.find(30); // 30과 같은 첫번째 원소의 반복자
    cout << "iter: " << *iter << endl;

    multiset<int>::iterator lower_iter;
    multiset<int>::iterator upper_iter;

    lower_iter = ms.lower_bound(30);
    upper_iter = ms.upper_bound(30);

    cout << "lower_iter: " << *lower_iter << ", "
         << "upper_iter: " << *upper_iter << endl;

    cout << "구간 [lower_iter, upper_iter)의 순차열: ";
    for (iter = lower_iter; iter != upper_iter; iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}