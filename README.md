# Ringbuffer

A queue-like structure to store an intended number of values of any numeric type.

## How it works

### Initializiation
You can either initialize a ringbuffer of Type T with `ringBuffer<T> nameOfRingBufVar(uint16_t numOfElements);` or
via `ringBuffer<T> nameOfRingBufVar(T firstElement, uint16_t numOfElements);` setting first element equal to *firstElement*

