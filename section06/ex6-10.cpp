/*
    예제 6-10. swap을 사용한 할당 메모리 제거
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5);
    cout << "size: " << v.size() << ", capacity: " << v.capacity() << endl;

    vector<int>().swap(v);
    cout << "size: " << v.size() << ", capacity: " << v.capacity() << endl;

    return 0;
}
