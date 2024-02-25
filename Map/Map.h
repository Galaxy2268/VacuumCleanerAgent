#ifndef MAP_H
#define MAP_H
#include "../Pair/Pair.h"
#include "../List/List.h"

template <typename Key, typename Value>
class Map
{
private:
List<Pair<Key, Value>> map;

public:

Map();

void insert(Key key, Value value);

void deletePair(Key key);

int size();

void clear();

Value get(Key key);

Key getByValue(Value value);

bool exists(Key key);

bool updateValue(Key key)


};


#include "Map.cpp"
#endif