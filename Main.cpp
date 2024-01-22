#include <iostream>
#include <string>
#include "Vector/Vector.h"
#include "List/List.h"

using namespace std;




int main(){

    List<int> list(2,3,1,6,4,8,6,9,0);
    list.sort();
    list.add(11, 4);
    list.addBack(5);
    list.addFront(0);
    list.sort();
    list.print();



}