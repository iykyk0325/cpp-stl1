/*
    예제 6-28. vector와 deque
*/
#include <deque>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(4, 100);
    deque<int> dq(4, 100);

    v.push_back(200);  // v에 200 추가
    dq.push_back(200); // dq에 200 추가

    for (vector<int>::size_type i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    for (deque<int>::size_type i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << endl;

    return 0;
}