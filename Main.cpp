#include <iostream>
#include <string>
#include "Vector/Vector.h"
#include "List/List.h"

using namespace std;




int main(){

    List<char> list('a','c','b','f','v','i');
    list.sort();
    list.print();



}