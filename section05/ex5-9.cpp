/*
    예제 5-9. vector 컨테이너를 적용한 stack 컨테이너
*/
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    stack<int, vector<int>> st; // vector 컨테이너를 이용한 stack 컨테이너 생성

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;
    st.pop();

    cout << st.top() << endl;
    st.pop();

    cout << st.top() << endl;
    st.pop();

    if (st.empty()) {
        cout << "stack에 데이터 없음" << endl;
    }

    return 0;
}
