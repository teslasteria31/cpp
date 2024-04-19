#include <iostream>
#include <vector>

using namespace std;

// Библиотека STL
// Контейнер Vector
int main()
{
    setlocale(LC_ALL, "ru");

    // dynamic array/ vector<type> _name_;
    vector<int> myVector;
    vector<int> newVector = {12, 31, 3143, 12, 231};

    //how many elements add to capacity
    myVector.reserve(100);

    //add a new element at the end of the current array
    myVector.push_back(4);
    myVector.push_back(3);
    myVector.push_back(10);
    myVector.push_back(9);

    //true (1) - empty, false (0) - not empty
    cout << myVector.empty() << endl;

    myVector[0] = 131;
    cout << "|Number of elements of array is " << myVector.size() << endl;

    //unpredictable result
    //cout << myVector[10] << endl;

    //checking array's border or not
    //cout << myVector.at(10) << endl;

    //deleting all the elements from array
    myVector.clear();
    cout << "|After clear" << endl;
    cout << "|Number of elements of array is " << myVector.size() << endl;

    myVector.push_back(4);
    myVector.push_back(3);
    myVector.push_back(10);
    myVector.push_back(9);

    //delete the last element
    myVector.pop_back();
    cout << "|After pop_back" << endl;
    cout << "|Number of elements of array is " << myVector.size() << endl;

    //capacity
    cout << myVector.capacity() << endl;

    //resize
    myVector.resize(70);

    for (unsigned int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << endl;
    }

    //free not using memory
    myVector.shrink_to_fit();

    return 0;
}
