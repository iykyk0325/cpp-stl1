/*
    예제 7-20. multimap의 count()와 find()
*/
#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, int> mm;

    mm.insert(pair<int, int>(5, 100));
    mm.insert(pair<int, int>(3, 100));
    mm.insert(pair<int, int>(8, 30));
    mm.insert(pair<int, int>(3, 40));
    mm.insert(pair<int, int>(1, 70));
    mm.insert(pair<int, int>(7, 100));
    mm.insert(pair<int, int>(8, 50));

    multimap<int, int>::iterator iter;
    for (iter = mm.begin(); iter != mm.end(); iter++) {
        cout << "(" << iter->first << ", " << iter->second << ")" << " ";
    }
    cout << endl;

    cout << "key 3의 원소 개수 = " << mm.count(3) << endl;

    iter = mm.find(3);
    if (iter != mm.end()) {
        cout << "첫 번째 key 3에 매핑된 value = " << iter->second << endl;
    }

    return 0;
}