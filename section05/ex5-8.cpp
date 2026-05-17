/*
    예제 5-8. stack 컨테이너
*/
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st; // stack 컨테이너 생성

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
