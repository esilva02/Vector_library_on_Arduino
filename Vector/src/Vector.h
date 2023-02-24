#ifndef Vector_h
#define Vector_h

#include "Arduino.h"

template <typename T>
class Vector
{
    public:
        void pushBack(T param);

        T retriveIndex(int index);

        int getIndex(T searchKey);

        int getSize();

        void printVec();
	
	private:
        T *vecPointer;
        int vecSize = 1;
};


#endif