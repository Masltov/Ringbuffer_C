# Ringbuffer

A queue-like structure to store an intended number of values of any numeric type.
When ringbuffer is full (member boolean *isFilled* is *true*) "oldest" Element will be overwritten by adding a new Element.
Example:
oldElement |    v      |           |    
Ringbuffer | Element 1 | Element 2 | Element 3 
rB.data[]  |    1      |    2      |     3

After Adding new Elemen with value 4 `rb.addElement(4);` ringbuffer looks like this:
oldElement |           |    v      |    
Ringbuffer | Element 1 | Element 2 | Element 3 
rB.data[]  |    4      |    2      |     3

## How it works

### Initializiation
You can either initialize a ringbuffer of Type T with `ringBuffer<T> nameOfRingBufVar(uint16_t numOfElements);` or
via `ringBuffer<T> nameOfRingBufVar(T firstElement, uint16_t numOfElements);` setting first element equal to *firstElement*

### Adding Elements
For a ring Buffer with Type T Elements simply add Element by `nameOfRingBufVar.addElement(T newElement);`

### Get Average Value of Elements
Get Average Value of Elements by `nameOfRingBufVar.getAverage();` whereas type return value is Elementtype T.

## Example

`#include "RingBuffer.h"	
#include <iostream>

using namespace std;

int main(){
  
	ringBuffer<int16_t> rB(8); // Initialize empty ringbuffer for 8 Elements from type int16_t
  
  //Fill ringbuffer rB with elements
  for (int i = -4; i<4; i++)
  {
    rB.addElement((int16_t) i);
  }
  cout << "Average Value of ringbuffer: " << rB.getAverage() << endl;
  while(1)
}`

