#pragma once
class Arreglo
{
private:
	int vec[10], n;
public:
	Arreglo(void); // constructor
	~Arreglo(void); //destructor

	void cargarVector(int vec[], int n); //metodos
	void mostrarVector(int vec[], int n);
	void ordenarVector(int vec[], int n);
};
