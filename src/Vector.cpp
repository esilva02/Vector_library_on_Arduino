#include "Arduino.h"
#include "Vector.h"

template <typename T>
void Vector<T>::pushBack(T param){
    T *newVec = (T*)malloc(vecSize * sizeof(T));
    memcpy(newVec, vecPointer, (vecSize * sizeof(T)));
    newVec[vecSize - 1] = param;
    vecPointer = newVec;
    vecSize += 1;
}

template <typename T>
T Vector<T>::retriveIndex(int index){
    if(index > vecSize) index = vecSize - 1;
    return vecPointer[index];
}

template <typename T>
int Vector<T>::getIndex(T searchKey){
    for(int counter = 0; counter < vecSize - 1; counter++){
    if(vecPointer[counter] == searchKey) return counter;
    }
    return  -1;
}

template <typename T>
int Vector<T>::getSize(){
    return vecSize;
}

template <typename T>
void Vector<T>::printVec(){
    for(byte counter = 0; counter < vecSize - 1; counter++){
    Serial.println(vecPointer[counter]);
    }
}