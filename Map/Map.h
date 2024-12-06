#ifndef MAP_H
#define MAP_H
#include "../Pair/Pair.h"
#include "../List/List.h"


//Map is key-value data structure - we can get specific value by key. It has good performance as map uses optimisation (hashcode) to efficiently store data. As a result to receive a value usally takes O(1) steps but map stays dynymic.
//Mape ir atslēgas-vērtību datu struktūra, kas nozīmē, ka varam iegūt vērtību pēc tās atslēgas. Tai piemīt laba veiktspēja, jo tā izmanto optimizāciju (heša kodus), lai efektīvāk glabātu datus. Rezultātā vērtības iegūšana pārsvarā aizņem O(1) soļus, mapei paliekot dinamiskai.
class Map
{
private:
    List<Pair<int, int>>** map;

    int length;

    int capacity;
    /*
    Description:
        Method that shrinks map array by recreating it to efficiantly store memory.
        Metode kas samazina mapes masīvu izveidojot to no jauna, lai efektīvi izmantot atmiņu.
    Complexity:
        Always: O(n)
        Vienmēr: O(n)
    */
    void shrink();
    /*
    Description:
        Method that expands map array by recreating it to efficiantly store memory.
        Metode kas palielina mapes masīvu, izveidojot to no jauna, lai efektīvi izmantotu atmiņu.
    Complexity:
        Always: O(n)
        Vienmēr: O(n)
    */
    void expand();

public:
    /*
    Description:
        Constructor for map that sets initial capacity 10.
        Konstruktors mapei, kas iestata kapacitāti lielumā 10 pēc noklusējuma.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */
    Map();

    /*
    Description:
        Constructor for map that sets given capacity.
        Konstruktors mapei, kas iestata padoto kapacitāti.
    Complexity:
        Always: O(n)
        Vienmēr: O(n)
    */

    Map(int startCapacity);

    /*
    Description:
        Destructor of map that deallocates memory used by map.
        Mapes destruktors, kas atbrīvo mapes aizņemto atmiņu.
    Complexity:
        Vienmēr: O(n) | Lineārā sarežģītība
        Always: O(n) | Linear complexity
    */

    ~Map();

    /*
    Description:
        Method that inserts given key and value to map using hashcode to specify index.
        Metode, kas ievieto doto atslēgu un vērtību mapē, izmantojot heša kodu, lai specifizētu indeksu.
    Complexity:
        Vienmēr: O(1)
        Always: O(1)
    */

    void insert(int key, int value);

    /*
    Description:
        Method that removes element from map by given key.
        Metode, kas izdzēš elementu no mapes pēc dotās atslēgas.
    Complexity:
        Best case: O(1) | Worst case O(n) | Where n is collision count in the relevant bucket
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā O(n) | Kur n ir kolīziju skaits attiecīgajā masīva šūnā
    */

    void remove(int key);

    /*
    Description:
        Method that returns the amount of elements in map.
        Metode, kas atgriež elementu skaitu mapē.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    int size();

    /*
    Description:
        Method that returns element from map by given key.
        Metode, kas atgriež elementu no mapes pēc dotās atslēgas
    Complexity:
        Best case: O(1) | Worst case O(n) | Where n is collision count in the relevant bucket
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā O(n) | Kur n ir kolīziju skaits attiecīgajā masīva šūnā
    */

    int get(int key);

    /*
    Description:
        Method that returns true if value for given key exists, returns false if doesn't exist.
        Metode, kas atgriež true, ja vērtība pie dotās atslēgas eksistē, atgriež false, ja neeksistē.
    Complexity:
        Best case: O(1) | Worst case O(n) | Where n is collision count in the relevant bucket
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā O(n) | Kur n ir kolīziju skaits attiecīgajā masīva šūnā
    */

    bool exists(int key);

    /*
    Description:
        Method that updates value for given key.
        Metode, kas atjaunina vērtību pie dotās atslēgas
    Complexity:
        Best case: O(1) | Worst case O(n) | Where n is collision count in the relevant bucket
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā O(n) | Kur n ir kolīziju skaits attiecīgajā masīva šūnā
    */

    void updateValue(int key, int value);


};


#include "Map.cpp"
#endif