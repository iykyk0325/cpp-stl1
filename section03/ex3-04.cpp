/*
    예제 3-04. 함수 객체를 사용한 콜백 함수 구현
*/
#include <algorithm>
#include <iostream>

using namespace std;

struct Functor1 {
    void operator()(int n) // 공백을 이용한 원소 출력
    {
        cout << n << " ";
    }
};

struct Functor2 {
    void operator()(int n) // 각 원소를 제곱해 출력
    {
        cout << n * n << " ";
    }
};

struct Functor3 {
    void operator()(int n) // 문자열과 endl을 이용해 원소 출력
    {
        cout << "정수 : " << n << endl;
    }
};

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // 임시 객체(Functor1()) 전달
    for_each(arr, arr + 5, Functor1());
    cout << endl << endl;

    // 임시 객체(Functor2()) 전달
    for_each(arr, arr + 5, Functor2());
    cout << endl << endl;

    // 임시 객체(Functor3()) 전달
    for_each(arr, arr + 5, Functor3());

    return 0;
}
