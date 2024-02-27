#include <iostream>
#include <string>
#include "Vector/Vector.h"
#include "List/List.h"
#include "Pair/Pair.h"
#include "PriorityQueue/PriorityQueue.h"
#include "Map/Map.h"
#include "List/ListEl.h"

using namespace std;

//Main function
int main(){

    Map<int, string> map;
    map.insert(1,"hello");
    map.insert(2,"word");
    map.insert(3,"!");

    cout << map.get(1);
    cout << map.get(2);
    cout << map.get(3);
    cout << "\n";
    bool t = map.exists(3);
    bool f = map.exists(4);
    cout << map.getByValue("hello");
    cout << map.size();
    map.updateValue(2, "world");
    cout << map.get(2);
    map.clear();

    Pair<int, int> hi;


}