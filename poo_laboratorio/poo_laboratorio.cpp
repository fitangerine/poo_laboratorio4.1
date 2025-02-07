#include <iostream>

using namespace std;

class Animal {
protected:
	string nombre;
	int edad;

public:
	Animal(string n, int e): nombre(n), edad(e){}

	virtual void hacerSonido() {
		std::cout << nombre << " hace un sonido desconocido. \n";
	}
};

class Perro :public Animal {
public:
	Perro(string n, int e):Animal(n, e){}

	void hacerSonido() override {
		cout << nombre << " hace Guau! \n";

	}
};

class Automovil {
private:
	string marca;
	int velocidad;

public:
	Automovil(string m, int v): marca(m), velocidad(v){}

	void acelerar() {
		velocidad += 10;
		cout << "El automovil " << marca << " ahora va a" << velocidad << " km/h \n";
	}
};

class Persona {
private:
	string nombre;
	int edad;

public:
	Persona(string n, int e): nombre(n), edad(e) {}

	void saludar() {
		cout << "Hola mi nombre es " << nombre << " y tengo " << edad << " de edad \n";
	}
};

int main() {
	Perro miPerro("Rex", 5);
	miPerro.hacerSonido();

	Automovil miCoche("Toyota", 60);
	miCoche.acelerar();

	Persona Persona1("Carlos", 30);
	Persona1.saludar();

	return 0;
}



