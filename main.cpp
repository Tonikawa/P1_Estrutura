
//  Created by Gabriel Batista Cristiano
//  TIA: 32090722

#include <iostream>
#include "StaticQueue.h"

using namespace std;

int main()
{
    StaticQueue queue = Create();
    cout << "Front: " << Front(queue) << " (" << Count(queue) << "/" << Size(queue) << ")\n";
    Enqueue(queue, '@');
    cout << "Front: " << Front(queue) << " (" << Count(queue) << "/" << Size(queue) << ")\n";
    Enqueue(queue, 'X');
    cout << "Front: " << Front(queue) << " (" << Count(queue) << "/" << Size(queue) << ")\n";
    Enqueue(queue, 'Y');
    cout << "Front: " << Front(queue) << " (" << Count(queue) << "/" << Size(queue) << ")\n";
    
    char remove = Dequeue(queue);
    cout << "Elemento removido: " << remove << "\n"<< "Front: " << Front(queue) << " (" << Count(queue) << "/" << Size(queue) << ")\n";
    Clear(queue);
    cout << "Fila vazia? " << (IsEmpty(queue) ? "Sim" : "Não") << "\n";
    cout << "Front: " << Front(queue) << " (" << Count(queue) << "/" << Size(queue) << ")\n";
    
    Enqueue(queue, 'X');
    cout << "Front: " << Front(queue) << " (" << Count(queue) << "/" << Size(queue) << ")\n";
    Enqueue(queue, 'Y');
    cout << "Front: " << Front(queue) << " (" << Count(queue) << "/" << Size(queue) << ")\n";
    Dequeue(queue);
    cout << "Front: " << Front(queue) << " (" << Count(queue) << "/" << Size(queue) << ")\n";
    cout << "Fila vazia? " << (IsEmpty(queue) ? "Sim" : "Não") << "\n";

}
