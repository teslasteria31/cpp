#include <iostream>

using namespace std;

//int sum(int a, int b) {
//    return a + b;
//}

//double sum(double a, double b) {
//    return a + b;
//}

template <typename T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum: " << sum(5, 6) << endl;
    cout << "Sum: " << sum(5.342, 6.2342) << endl;

    return 0;
}
