#include "Nodo.h"

class Pila {
private:
    Nodo* inicio;

public:
    Pila();

    void push();
    void pop();
    void show();
    void top();
    void size();
};
