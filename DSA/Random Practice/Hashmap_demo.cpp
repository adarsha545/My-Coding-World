#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    unordered_map<string, int> map;
    pair<string, int> Pair0("Adarsha", 86);
    pair<string, int> Pair1("Adarsh", 8);
    pair<string, int> Pair2("Adarha", 6);
    pair<string, int> Pair3("Arsha", 60);
    map.insert(Pair0);
    map.insert(Pair1);
    map.insert(Pair2);
    map.insert(Pair3);
    cout << map["Adarsha"] << endl;
    // cout << map.at("darsha") <<endl;
    cout << map["darsha"] << endl;
    cout << map.at("darsha") << endl;
    cout << map.size() << endl;
    cout << map.count("super") << endl;
    // map.erase("Adarsha");
    cout << map.size() << endl;

    for (auto i : map)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "*********" << endl;

    // Print using itreator
    unordered_map<string, int>::iterator it = map.begin();
    while (it != map.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}