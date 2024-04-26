#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> myMap;

    // в отличие от map может хранить не только уникальные значения
    // использует такие же методы, как и map
    multimap<string, int> myMap2;

    myMap.emplace("Peter", 1313);
    myMap.emplace("Michael", 2300);
    myMap.emplace("Mia", 8700);

    //myMap["Mia"] = 170;

    // Если элемента нет, то метод at вызовет исключение в отличие от стандартного добавления
    myMap.at("Mia") = 4;
    cout << myMap["Mia"] << endl;

    // Если такой пары не было, то она будет создана
    myMap["Richard"] = 9890;
    myMap["Richard"] = 122;

    myMap.erase("Mia");


//    map<int, string> myMap;

//    myMap.insert(make_pair(1, "Phone"));
//    myMap.insert(pair<int, string>(2, "Laptop"));
//    myMap.emplace(3, "Mainframe");
//    myMap.emplace(4, "Keyboard");

//    cout << myMap[2] << endl;

//    auto it = myMap.find(4);
//    if  (it != myMap.end()) {
//        cout << it->second << endl;
//    } else {
//        cout << "The element not found" << endl;
//    }


//    pair<int, string> p(1, "Phone");
//    cout << p.first << endl;
//    cout << p.second << endl;

    return 0;
}
