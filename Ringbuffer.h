
#ifndef 	RINGBUFFER_H
#define		RINGBUFFER_H

#include <stdbool.h>

template <typename T>

struct ringBuffer{
	uint16t numOfElements = 0;
	uint16t numOfFilled = 0;
	T* first;
	T* last;
	T* data[];
	bool isFilled = false;
}
	
ringBuffer createRingBuffer(T obj1, uint16t num){
	
	ringBuffer rB;
	rB.numOfElements = num;
	rB.data  = new T[num];
	*rB.data = obj1;
	rB.first = data;
	rB.last = data;
}


#endif