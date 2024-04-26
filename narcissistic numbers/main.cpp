#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> inttoArray(int num) {
    std::vector<int> digits;
    while (num != 0 ) {
        digits.push_back(num % 10);
        num /= 10;
    }

    return digits;
}

bool narcissistic( int value ){
    int sum{};

    std::vector<int> digits = inttoArray(value);
    int power = digits.size();

    for (int digit : digits) {
        sum += static_cast<int>(std::pow(static_cast<double>(digit), power));
    }

  if (sum == value) {
        std::cout << "Yes" << std::endl;
        return true;
    } else {
        std::cout << "No" << std::endl;
        return false;
    }

       //Code away

}

int main()
{
    int num{};
    std::cin >> num;

    inttoArray(num);
    narcissistic(num);

    return 0;
}
