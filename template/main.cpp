#include <iostream>

using namespace std;

//int sum(int a, int b) {
//    return a + b;
//}

//double sum(double a, double b) {
//    return a + b;
//}

//template <typename T1, typename T2>
//T1 sum(T1 a, T2 b) {
//    return a + b;
//}

//template <typename T1, typename T2>

// class = typedef; there is no any difference
template <class T>
void Sum(T a) {
    cout << a << endl;
    //cout << b << endl;
}

int main() {

    // work only with one data type
//    cout << "Sum: " << sum(5, 6) << endl;
//    cout << "Sum: " << sum(5.342, 6.2342) << endl;
//    cout << "Sum: " << sum(52.09, 4) << endl;
    Sum(2);

    return 0;
}
