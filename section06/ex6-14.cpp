/*
    예제 6-14. vector의 []연산자와 at() 멤버 함수
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (vector<int>::size_type i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // []연산자: 범위 점검을 하지 않아 속도가 빠르다.
    v[0] = 100;
    v[4] = 500;
    for (vector<int>::size_type i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // at() 멤버 함수: 범위를 점검하므로 속도는 느리지만 안전하다.
    v.at(0) = 1000;
    v.at(4) = 5000;
    for (vector<int>::size_type i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}
