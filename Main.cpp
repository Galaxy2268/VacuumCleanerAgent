#include <iostream>
#include <string>
#include "Vector/Vector.h"
#include "List/List.h"
#include "Pair/Pair.h"

using namespace std;



//Main function
int main(){

    Pair<string, int> pair("A", 75);
    Pair<string, int> pair1("B", 125);
    Pair<string, int> pair2("C", 10);

    cout << pair1.getFirst() << "\n";
    cout << pair1.getSecond()<< "\n";
    pair1.setFirst("B1");
    pair1.setSecond(130);
    cout << pair1.getFirst()<< "\n";
    cout << pair1.getSecond()<< "\n";

    cout << "TEST" << "\n";
    pair1.print();


}