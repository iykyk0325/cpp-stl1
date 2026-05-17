/*
    예제 2-08. 함수 포인터를 이용한 콜백 메커니즘 구현

    - *begin++ : 연산자 우선순위 생각하기
*/
#include <iostream>

using namespace std;

// 배열의 모든 원소에 반복적인 작업을 수행하도록 추상화됨
void For_each(int *begin, int *end, void (*pf)(int))
{
    while (begin != end) {
        pf(*begin++); // callback
    }
}

void Print1(int n)
{ // 공백을 이용해 원소 출력
    cout << n << ' ';
}

void Print2(int n)
{ // 각 원소를 제곱해 출력
    cout << n * n << " ";
}

void Print3(int n)
{ // 문자열과 endl을 이용해 원소 출력
    cout << "정수 : " << n << endl;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    For_each(arr, arr + 5, Print1); // Print1() 콜백 함수의 주소를 전달
    cout << endl << endl;

    For_each(arr, arr + 5, Print2); // Print2() 콜백 함수의 주소를 전달
    cout << endl << endl;

    For_each(arr, arr + 5, Print3); // Print3() 콜백 함수의 주소를 전달

    return 0;
}
