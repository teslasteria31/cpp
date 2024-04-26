#include <iostream>
#include <vector>

using namespace std;

int centuryFromYear(int year)
{
  int century{};

  if ((year % 100) == 0) {
    century = year/100;
    cout << century << endl;
  } else {
    century = (year / 100) + 1;
    cout << century << endl;
  }

  return century;
}

int main() {
    int year{};
    cin >> year;

    centuryFromYear(year);

    return 0;
}
