#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myVector = {1, 4, 23, 43, 23, 4234};

    vector<int>::iterator it2 = myVector.begin();
    vector<int>::iterator it3 = myVector.begin();
    vector<int>::iterator itErase = myVector.begin();

    cout << "insert" << endl;
    myVector.insert(it3, 999);

    // this equals *(it2 + 3)
    advance(it2, 3);
    cout << "test " << *it2 << endl;

    // creating iterator
    //vector<int>::iterator it;

    for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++) {
        cout << *i << endl;
    }

    cout << "========================" << endl;

    //there is also exist const_interator
    for (vector<int>::const_iterator i = myVector.cbegin(); i != myVector.cend(); i++) {
        cout << *i << endl;
    }

    cout << "========================" << endl;

//    myVector.erase(itErase);
    myVector.erase(itErase, itErase + 3);

    //there is also exist reverse_interator
    for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++) {
        cout << *i << endl;
    }

    // to the first element
    //it = myVector.begin();

    // change the value of [0] element
    //*it = 1000;

    // move towards next element
    //it++;
    //it+=2;
    //it--;

    //cout << *it << endl;

//    cout << myVector[1] << endl;
//    int arr[] = {2, 5, 6};

//    cout << arr[1] << endl;
//    cout << *(arr + 1) << endl;

    return 0;
}
