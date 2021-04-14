
//  Created by Gabriel Batista Cristiano
//  TIA: 32090722

#ifndef StaticQueue_h
#define StaticQueue_h

#include "StaticStack.h"

//const int MAX_CAPACITY = 10;

// StaticQueue Create();
// Esta função já esta declarada no header StaticStack.h

bool Enqueue(StaticQueue& queue, char elem);

char Dequeue(StaticQueue& queue);

char Front(StaticQueue& queue);

int Size(StaticQueue& queue);

int Count(StaticQueue& queue);

bool IsEmpty(StaticQueue& queue);

bool Clear(StaticQueue& queue);

#endif /* StaticQueue_h */
