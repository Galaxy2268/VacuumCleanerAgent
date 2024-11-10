#include "Map.h"

Map::Map() {
    this->length = 0;
    for(int i = 0; i < 10; i++){
        this->map[i] = List<Pair<int, int>>();
    }
}


void Map::insert(int key, int value){
    if(this->exists(key)){
        throw std::runtime_error("Key already exists");
    }
    Pair<int, int> pair(key, value);
    int index = key % 10;
    map[index].addLast(pair);
    length++;
}

void Map::remove(int key){
    if(this->length <= 0){
        throw std::runtime_error("There isnt such an element");
    }
    int index = key % 10;
    for(int i = 0; i < map[index].size(); i++){
        if(map[index].getEl(i).getFirst() == key){
            map[index].removeAt(i);
            return;
        }
    }
    throw std::runtime_error("There isnt such an element");
}

int Map::size(){
    return this->length;
}

void Map::clear(){
    this->length = 0;
    for(int i = 0; i < 10; i++){
        this->map[i].clear();
    }
}

int Map::get(int key){
    if(this->length <= 0){
        throw std::runtime_error("There isnt such an element");
    }
    int index = key % 10;
    for(int i = 0; i < map[index].size(); i++){
        if(map[index].getEl(i).getFirst() == key){
            return map[index].getEl(i).getSecond();
        }
    }
    throw std::runtime_error("There isnt such an element");
}

bool Map::exists(int key){
    if(this->length <= 0){
        return false;
    }
    int index = key % 10;
    for(int i = 0; i < map[index].size(); i++){
        if(map[index].getEl(i).getFirst() == key){
            return true;
        }
    }
    return false;
}

void Map::updateValue(int key, int value){
    if(this->length <= 0){
        throw std::runtime_error("There isnt such an element");
    }
    int index = key % 10;
    for(int i = 0; i < map[index].size(); i++){
        if(map[index].getEl(i).getFirst() == key){
            this->map[index].getReference(i).setSecond(value);
            return;
        }
    }
    throw std::runtime_error("There isnt such an element");
}