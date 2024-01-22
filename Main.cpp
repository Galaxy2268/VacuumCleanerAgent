#include <iostream>
#include <string>
#include "Vector/Vector.h"
#include "List/List.h"

using namespace std;




int main(){

    List<int> list(1,2,3,4,5,6,7,8);
    list.addSortedBack(4);
    list.addSortedBack(1);
    list.addSortedBack(8);
    list.addSortedBack(9);
    list.addSortedBack(6);
    list.addSortedBack(11);
    list.addSortedBack(0);
    list.addSortedBack(4);
    list.addSortedBack(9);
    list.addSortedBack(9);
    list.addSortedBack(9);
    list.addSortedBack(9);
    list.addSortedBack(55);
    list.addSortedBack(45);
    list.addSortedBack(100);
    list.print();



}