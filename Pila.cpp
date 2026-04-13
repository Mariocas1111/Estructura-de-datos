#include <iostream>
#include <stdlib.h>
#include "Pila.h"


using namespace std;

Pila::Pila() {
    inicio = NULL;
}

void Pila::push() {
    int valor;
    string valor2;
    Nodo* aux = new Nodo;

    system("cls");
    cout << "Ingresa el id del proceso: ";
    cin >> valor;
    cout << "Ingresa el nombre del proceso: ";
    cin.ignore();
    getline(cin, valor2);

    aux->dato = valor;
    aux->nombre = valor2;
    aux->sig = NULL;

    if (inicio != NULL)
        aux->sig = inicio;

    inicio = aux;

    cout << "Nuevo proceso insertado en la Pila!\n";
    system("pause");
}

void Pila::pop() {
    if (inicio == NULL) {
        system("cls");
        cout << "\nLa Pila esta vacia!\n\n";
        system("pause");
    }
    else {
        Nodo* temp = inicio;
        inicio = inicio->sig;

        system("cls");
        cout << "\nEl proceso eliminado es: "
            << temp->dato << " - " << temp->nombre << "\n\n";

        delete temp;
        system("pause");
    }
}

void Pila::show() {
    Nodo* aux1 = inicio;

    if (inicio == NULL) {
        system("cls");
        cout << "\nLa Pila esta vacia!\n\n";
        system("pause");
    }
    else {
        system("cls");
        cout << "Procesos:\n\n";

        while (aux1 != NULL) {
            cout << aux1->dato << " - " << aux1->nombre << "\n\n";
            aux1 = aux1->sig;
        }

        system("pause");
    }
}

void Pila::top() {
    if (inicio == NULL) {
        system("cls");
        cout << "\nLa Pila esta vacia!\n\n";
    }
    else {
        system("cls");
        cout << "Proceso TOP:\n\n";
        cout << inicio->dato << " - " << inicio->nombre << "\n\n";
    }
    system("pause");
}

void Pila::size() {
    Nodo* aux1 = inicio;

    if (inicio == NULL) {
        system("cls");
        cout << "\nLa Pila esta vacia!\n\n";
    }
    else {
        int contador = 0;

        while (aux1 != NULL) {
            contador++;
            aux1 = aux1->sig;
        }

        system("cls");
        cout << "El tamano de la Pila es: " << contador << "\n\n";
    }
    system("pause");
}
