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

void remove(Key key);

int size();

void clear();

Value get(Key key);

Key getByValue(Value value);

bool exists(Key key);

void updateValue(Key key, Value value);


};


#include "Map.cpp"
#endif