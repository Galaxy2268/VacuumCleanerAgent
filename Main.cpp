#include <iostream>
#include <string>
#include "Vector/Vector.h"
#include "List/List.h"

using namespace std;



//Main function
int main(){

    List<int> list(1,2,3,4,5,6,7,8);
    list.reverse();
    list.print();
    list.reverse();
    list.print();
    list.reverse();
    list.print();

}