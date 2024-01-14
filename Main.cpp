#include <iostream>
#include <string>
#include "Vector/Vector.h"

using namespace std;



bool checkerOnesRow(Vector<int> vect){
    int count = 0;
    for(int i = 0; i < vect.size(); i++){
        if(vect.getEl(i) == 1){
            count++;
        }
    }
    return count == vect.size();
}

bool checkerZerosRow(Vector<int> vect){
    int count = 0;
    for(int i = 0; i < vect.size(); i++){
        if(vect.getEl(i) == 0){
            count++;
        }
    }
    return count == vect.size();


}


void returnC(Vector<Vector<int>> vect){
    int countZeroRows = 0;
    int countZeroColumns = 0;
    int countOnesRows = 0;
    int countOnesColumns = 0;

    Vector<int> smallestVector = vect.getFirst();
    for(int i = 0; i < vect.size(); i++){
        if(vect.getEl(i).size() < smallestVector.size()){
            smallestVector = vect.getEl(i);
        }


        if(checkerOnesRow(vect.getEl(i))){
            countOnesRows++;
        }else if(checkerZerosRow(vect.getEl(i))){
            countZeroRows++;
        }

    }

    for(int i = 0; i < smallestVector.size(); i++){
        int countZ = 0;
        int countO = 0;
        for(int j = 0; j < vect.size(); j++){
            if(vect.getEl(j).getEl(i) == 0){
                countZ++;
            }else if(vect.getEl(j).getEl(i) == 1){
                countO++;
            }

        }
        if(countZ == vect.size()){
            countZeroColumns++;
        }else if(countO == vect.size()){
            countOnesColumns++;
        }

        
    }


    cout << "Zeros rows count: " << countZeroRows << "\n" << "zeros column count: " << countZeroColumns << "\n" << "Ones rows count: " << countOnesRows << "\n" << "Ones column count: " << countOnesColumns; 

}




int main(){

    Vector<int> vect(0,1,1);
    Vector<int> vect2(0,1,1);
    Vector<int> vect3(0,0,0,0);


    Vector<Vector<int>> vectB(vect,vect2,vect3);

    
    returnC(vectB);
}