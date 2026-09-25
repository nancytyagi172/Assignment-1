#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector after push back: ";

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;

    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl;
    cout << "Front = " << v.front() << endl;
    cout << "Back = " << v.back() << endl;
    cout << "Element at index 1 = " << v.at(1) << endl;

    v.pop_back();

    cout << "After pop_back: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;

    return 0;
}
