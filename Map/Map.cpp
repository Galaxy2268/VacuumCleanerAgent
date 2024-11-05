#include "Map.h"

template <typename Key, typename Value>
Map<Key, Value>::Map(): map() {}

template <typename Key, typename Value>
void Map<Key, Value>::insert(Key key, Value value){
    if(this->exists(key)){
        throw std::runtime_error("Key already exists");
    }
    Pair<Key, Value> pair(key, value);
    map.addLast(pair);
}

template <typename Key, typename Value>
void Map<Key, Value>::remove(Key key){
    if(map.isEmpty()){
        throw std::runtime_error("There isnt such an element");
    }
    for(int i = 0; i < map.size(); i++){
        if(map.getEl(i).getFirst() == key){
            map.removeById(i);
            return;
        }
    }
    throw std::runtime_error("There isnt such an element");
}

template <typename Key, typename Value>
int Map<Key, Value>::size(){
    return map.size();
}

template <typename Key, typename Value>
void Map<Key, Value>::clear(){
    map.clear();
}

template <typename Key, typename Value>
Value Map<Key, Value>::get(Key key){
    if(map.isEmpty()){
        throw std::runtime_error("There isnt such an element");
    }
    for(int i = 0; i < map.size(); i++){
        if(map.getEl(i).getFirst() == key){
            return map.getEl(i).getSecond();
        }
    }
    throw std::runtime_error("There isnt such an element");
}

template <typename Key, typename Value>
Key Map<Key, Value>::getByValue(Value value){
    if(map.isEmpty()){
        throw std::runtime_error("There isnt such an element");
    }
    for(int i = 0; i < map.size(); i++){
        if(map.getEl(i).getSecond() == value){
            return map.getEl(i).getFirst();
        }
    }
    throw std::runtime_error("There isnt such an element");
}

template <typename Key, typename Value>
bool Map<Key, Value>::exists(Key key){
    if(map.isEmpty()){
        return false;
    }
    for(int i = 0; i < map.size(); i++){
        if(map.getEl(i).getFirst() == key){
            return true;
        }
    }
    return false;
}

template <typename Key, typename Value>
void Map<Key, Value>::updateValue(Key key, Value value){
    if(map.isEmpty()){
        throw std::runtime_error("There isnt such an element");
    }
    for(int i = 0; i < map.size(); i++){
        if(map.getEl(i).getFirst() == key){
            this->map.getReference(i).setSecond(value);
            return;
        }
    }
    throw std::runtime_error("There isnt such an element");
}