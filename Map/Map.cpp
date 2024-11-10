#include "Map.h"

Map::Map() {
    this->length = 0;
    this->capacity = 10;
    this->map = new List<Pair<int, int>>*[this->capacity];
    for(int i = 0; i < this->capacity; i++){
        this->map[i] = new List<Pair<int, int>>();
    }
}

Map::Map(int startCapacity) {
    this->length = 0;
    this->capacity = startCapacity;
    this->map = new List<Pair<int, int>>*[this->capacity];
    for(int i = 0; i < this->capacity; i++){
        this->map[i] = new List<Pair<int, int>>();
    }
}

Map::~Map() {
    for(int i = 0; i < this->length; i++){
        delete this->map[i];
    }
    delete[] map;
}

void Map::expand() {
    this->capacity = this->capacity * 10;
    List<Pair<int, int>>** newMap = new List<Pair<int, int>>*[this->capacity];
    for(int i = 0; i < this->capacity; i++){
        newMap[i] = new List<Pair<int, int>>();
    }
    for(int i = 0; i < this->length; i++){
        for(int j = 0; j < this->map[i]->size(); j++){
            Pair<int, int> current =  this->map[i]->getReference(j);
            int index = current.getFirst() % this->capacity;
            newMap[index]->addLast(current);
        }
    }
    for(int i = 0; i < this->length; i++){
        delete this->map[i];
    }
    delete[] this->map;
    this->map = newMap;
}

void Map::shrink() {
    this->capacity = this->capacity / 10;
    List<Pair<int, int>>** newMap = new List<Pair<int, int>>*[this->capacity];
    for(int i = 0; i < this->capacity; i++){
        newMap[i] = new List<Pair<int, int>>();
    }
    for(int i = 0; i < this->length; i++){
        for(int j = 0; j < this->map[i]->size(); j++){
            Pair<int, int> current =  this->map[i]->getReference(j);
            int index = current.getFirst() % this->capacity;
            newMap[index]->addLast(current);
        }
    }
    for(int i = 0; i < this->length; i++){
        delete this->map[i];
    }
    delete[] this->map;
    this->map = newMap;
}


void Map::insert(int key, int value){
    if(this->exists(key)){
        throw std::runtime_error("Key already exists");
    }
    if(this->size() >= this->capacity){
        expand();
    }
    Pair<int, int> pair(key, value);
    int index = key % this->capacity;
    map[index]->addLast(pair);
    length++;
}

void Map::remove(int key){
    if(this->length <= 0){
        throw std::runtime_error("There isnt such an element");
    }
    int index = key % this->capacity;
    for(int i = 0; i < map[index]->size(); i++){
        if(map[index]->getEl(i).getFirst() == key){
            map[index]->removeAt(i);
            this->length--;
            if(this->length < this->capacity / 10 && this->capacity > 10){
                shrink();
            }
            return;
        }
    }
    throw std::runtime_error("There isnt such an element");
}

int Map::size(){
    return this->length;
}

int Map::get(int key){
    if(this->length <= 0){
        throw std::runtime_error("There isnt such an element");
    }
    int index = key % this->capacity;
    for(int i = 0; i < map[index]->size(); i++){
        if(map[index]->getEl(i).getFirst() == key){
            return map[index]->getEl(i).getSecond();
        }
    }
    throw std::runtime_error("There isnt such an element");
}

bool Map::exists(int key){
    if(this->length <= 0){
        return false;
    }
    int index = key % this->capacity;
    for(int i = 0; i < map[index]->size(); i++){
        if(map[index]->getEl(i).getFirst() == key){
            return true;
        }
    }
    return false;
}

void Map::updateValue(int key, int value){
    if(this->length <= 0){
        throw std::runtime_error("There isnt such an element");
    }
    int index = key % this->capacity;
    for(int i = 0; i < map[index]->size(); i++){
        if(map[index]->getEl(i).getFirst() == key){
            this->map[index]->getReference(i).setSecond(value);
            return;
        }
    }
    throw std::runtime_error("There isnt such an element");
}