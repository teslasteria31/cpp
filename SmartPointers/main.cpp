#include <iostream>
#include <vector>

using namespace std;

template <typename T>

class SmartPointer {
private:
    T *pointer;
public:
    SmartPointer(T *pointer) {
        this -> pointer = pointer;
        cout << "Constructor" << endl;
    }

    ~SmartPointer() {
        delete pointer;
        cout << "Destructor" << endl;
    }

    T& operator*() {
        return *pointer;
    }
};

int main() {

SmartPointer<int> pointer = new int(5);
*pointer  = 1323123;

cout << *pointer << endl;


// pointers and arrays

//    const int SIZE = 5;
//    int arr[SIZE] = {1, 4, 5, 3, 5};

//    for (int i = 0; i < SIZE; i++) {
//        cout << arr[i] << endl;
//    }

//    int *p_arr = arr;

//    cout << "===============" << endl;
//    cout << "arr\t" << arr << endl;
//    cout << "parr\t" << p_arr << endl;
//    cout << "===============" << endl;

//    for (int i = 0; i < SIZE; i++) {
//        cout << *(p_arr + i) << endl;
//    }

    return 0;
}
