#include <iostream>
#include <string>
#include "Vector/Vector.h"
#include "List/List.h"

using namespace std;




int main(){

    List<int> list(0,2,4,1,3,5,6,64,4);
    list.sort();
    list.print();



}