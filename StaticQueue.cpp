
//  Created by Gabriel Batista Cristiano
//  TIA: 32090722

#include "StaticQueue.h"
#include "StaticStack.h"

/*StaticQueue Create()
{
    
}
 */
// Esta função já esta implementada em StaticStack.cpp

bool Enqueue(StaticQueue& queue, char elem)
{
    return Push(queue, elem);
}

char Dequeue(StaticQueue& queue)
{
    StaticQueue revertStack = CreateRevert(queue);
    if(revertStack.count == 0)
    {
        return '\0';
    }
    char value = pop(revertStack);
    Undo(revertStack, queue);
    return value;
}

char Front(StaticQueue& queue)
{
    StaticQueue revertStack = CreateRevert(queue);
    char temp = top(revertStack);
    Undo(revertStack, queue);
    return temp;
}


int Size(StaticQueue& queue)
{
    return SizeStack(queue);
}

int Count(StaticQueue& queue)
{
    return CountStack(queue);
}

bool IsEmpty(StaticQueue& queue)
{
    return IsEmptyStack(queue);
}

bool Clear(StaticQueue& queue)
{
    return ClearStack(queue);
}

