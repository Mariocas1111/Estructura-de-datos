#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string nombre;
    string apellido;
    string correo;
    string cargo;

public:
    Empleado(string n, string a, string c) {
        nombre = n;
        apellido = a;
        cargo = c;
        generarCorreo();
    }

    void generarCorreo() {
        // ejemplo de uso de string: concatenar, convertir a minúscula
        correo = nombre + "." + apellido + "@empresa.com";

        // Convertimos a minúscula (simplificado: solo la primera letra)
        if (correo[0] >= 'A' && correo[0] <= 'Z') {
            correo[0] += 32;
        }
    }
};
