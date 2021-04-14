
//  Created by Gabriel Batista Cristiano
//  TIA: 32090722

#include "StaticStack.h"
#include "StaticQueue.h"

StaticQueue Create()
{
    StaticQueue queue = {0, 0, 0, {0}};
    return queue;
};

StaticQueue CreateRevert(StaticQueue& stack)
{
    StaticQueue revertStack = Create();
    for(int i = 0; i < SizeStack(stack); ++i)
    {
        char temp = pop(stack);
        if(temp == '\0')
        {
            return revertStack;;
        }
        Push(revertStack, temp);
    }
    return revertStack;
};


bool Push(StaticQueue& stack, char elem)
{
    if (stack.count == STATIC_STACK_CAPACITY)
    {
        return false;
    }
    stack.value[stack.count] = elem;
    ++stack.count;
    return true;
};

char pop(StaticQueue& stack)
{
    if (IsEmpty(stack))
    {
        return '\0';
    }
    char temp = stack.value[stack.count - 1];
    stack.value[stack.count] = '\0';
    --stack.count;
    return temp;
};

char top(StaticQueue& stack)
{
    if (IsEmpty(stack))
    {
        return '\0';
    }
    return stack.value[stack.count - 1];
};

int SizeStack(StaticQueue& stack)
{
    return sizeof(stack.value) / sizeof(stack.value[0]);
};

int CountStack(StaticQueue& stack)
{
    return stack.count;
};

bool IsEmptyStack(StaticQueue& stack)
{
    return stack.count == 0;
};

bool ClearStack(StaticQueue& stack)
{
    for (int i = 0; i < STATIC_STACK_CAPACITY; ++i)
    {
        stack.value[i] = '\0';
    }
    stack.count = 0;
    return IsEmpty(stack);
};

// Essa função retorna à primeira pilha os elementos da pilha revertida
void Undo(StaticQueue& revertStack, StaticQueue& stack)
{
    StaticQueue temp = CreateRevert(revertStack);
    stack = temp;
}
