#include "Empleado.h"
#include <iostream>
using namespace std;

// Constructor
Empleado::Empleado(string nom, string ape, string car) {
    nombre = nom;
    apellido = ape;
    cargo = car;
    generarCorreo();
}

void Empleado::mostrarInformacion() {
    cout << "Nombre completo: " << nombre << " " << apellido << endl;
    cout << "Correo: " << correo << endl;
    cout << "Cargo: " << cargo << endl;
    cout << "Longitud del nombre: " << nombre.length() << endl;
    cout << "Inicial del apellido: " << apellido.substr(0, 1) << endl;
    cout << "¿'@' está en el correo?: ";
    cout << (correo.find('@') != string::npos ? "Sí" : "No") << endl;
    cout << endl;
}

void Empleado::cambiarCargo(string nuevoCargo) {
    cout << "Cargo anterior: " << cargo << endl;
    cargo = nuevoCargo;
    cout << "Cargo actualizado: " << cargo << endl << endl;
}

void Empleado::corregirApellido(string nuevoApellido) {
    cout << "Corrigiendo apellido..." << endl;
    apellido = nuevoApellido;
    generarCorreo();
}

void Empleado::depurarNombre() {
    cout << "Nombre original: " << nombre << endl;
    if (!nombre.empty()) {
        nombre.erase(0, 1);
        nombre.insert(0, "Sr. ");
    }
    cout << "Nombre después de depurar: " << nombre << endl;
}

void Empleado::generarCorreo() {
    correo = nombre + "." + apellido + "@empresa.com";
}
