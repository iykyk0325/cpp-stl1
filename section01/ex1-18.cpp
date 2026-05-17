/*
    예제 1-18. 상수 객체를 반환하는 []연산자 오버로딩
*/

#include <iostream>

using namespace std;

class Array {
    int *arr;
    int size;
    int capacity;

public:
    Array(int cap = 100)
        : arr(0),
          size(0),
          capacity(cap)
    {
        arr = new int[capacity];
    }

    ~Array() { delete[] arr; }

    void Add(int data)
    {
        if (size < capacity) {
            arr[size++] = data;
        }
    }

    int Size() const { return size; }

    // int operator[](int idx) const { return arr[idx]; }

    int& operator[](int idx) const { return arr[idx]; }
};

int main()
{
    Array ar(10);
    ar.Add(10);
    ar.Add(20);
    ar.Add(30);

    cout << ar[0] << endl; // ar.operator[](int) 호출
    cout << endl;

    const Array& ar2 = ar;
    cout << ar2[0] << endl; // ar.operator[](int) const 호출
    cout << endl;

    ar[0] = 100; // ar.operator[](int)
    // ar2[0] = 100; 에러: 상수 객체(값) 반환하므로 대입 X

    return 0;
}
