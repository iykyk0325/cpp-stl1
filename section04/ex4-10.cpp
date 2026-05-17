/*
    예제 4-10. 정수형 Array 클래스
*/
#include <iostream>

using namespace std;

class IntArray {
    int *buf;
    int size;     // 현재 원소의 개수
    int capacity; // 저장 가능한 메모리 크기

public:
    explicit IntArray(int cap = 100)
        : buf(0),
          size(0),
          capacity(cap)
    {
        buf = new int[capacity];
    }

    ~IntArray() { delete[] buf; }

    void Add(int data) { buf[size++] = data; }

    int operator[](int idx) const { return buf[idx]; }

    int GetSize() const { return size; }
};

int main()
{
    IntArray arr;

    arr.Add(10);
    arr.Add(20);
    arr.Add(30);

    for (int i = 0; i < arr.GetSize(); i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
