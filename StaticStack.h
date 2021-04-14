
//  Created by Gabriel Batista Cristiano
//  TIA: 32090722

#ifndef StaticStack_h
#define StaticStack_h


const int STATIC_STACK_CAPACITY = 8;

// A estrutura é uma pilha (stack) com nome de fila(queue)
struct StaticQueue
{
    int front, rear, count;
    char value[STATIC_STACK_CAPACITY];
};

StaticQueue Create();

StaticQueue CreateRevert(StaticQueue& stack);

bool Push(StaticQueue& stack, char elem);

char pop(StaticQueue& stack);

char top(StaticQueue& stack);

int SizeStack(StaticQueue& stack);

int CountStack(StaticQueue& stack);

bool IsEmptyStack(StaticQueue& stack);

bool ClearStack(StaticQueue& stack);

void Undo(StaticQueue& revertStack, StaticQueue& stack);


#endif /* StaticStack_h */
