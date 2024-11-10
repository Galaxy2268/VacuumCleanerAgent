#ifndef MAP_H
#define MAP_H
#include "../Pair/Pair.h"
#include "../List/List.h"


class Map
{
private:
    List<Pair<int, int>> map[10];
    int length;

public:
    Map();

    void insert(int key, int value);

    void remove(int key);

    int size();

    void clear();

    int get(int key);

    bool exists(int key);

    void updateValue(int key, int value);


};


#include "Map.cpp"
#endif