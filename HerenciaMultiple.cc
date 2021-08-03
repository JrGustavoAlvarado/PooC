#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <locale.h>

using namespace std;
class Mounstro {
protected:
	static int numeroMounstros;
	string alimento;
public:
	Mounstro();
	~Mounstro();
	static int obtenerNumeroMounstros();
	string obtenerAlimento() {
		return alimento;
	}
	void comer() {
		cout << "Este mounstro está comiendo " << alimento << " rico, rico " << endl;
	}
	
};

int Mounstro::numeroMounstros = 0;
Mounstro::Mounstro()
{
	cout << "Creando nuevo mounstro...." << endl;
	numeroMounstros += 1;
}
int Mounstro::obtenerNumeroMounstros()
{
	return numeroMounstros;
}
Mounstro::~Mounstro()
{
	cout << "borrando bicho...." << endl;
	numeroMounstros -= 1;
}
class Herviboro : public Mounstro{
public:
	Herviboro() : Mounstro() {
		this->alimento = "plantas";
}
	void pastar() {
		cout << "Este animal está pastando... " << endl;
	}
};

class Carnivoro : public Mounstro {
public :
	Carnivoro() : Mounstro() {
		this->alimento = "carne";
	}
	void cazar() {
		cout << "Este animal está cazando..." << endl;
	}
};

class Omnivoro : public Herviboro, public Carnivoro {
public:
	Omnivoro() : Herviboro(), Carnivoro(){}
	void comer() {
		cout << "este animal come cualquier cosa " << endl;
	}
};


	int main() {
		setlocale(LC_ALL, "");

		Mounstro* m = new Mounstro();
		Herviboro* h = new Herviboro();
		Carnivoro* c = new Carnivoro();
		Omnivoro* o = new Omnivoro();
		cout << "Numero de mounstros: " << Mounstro::obtenerNumeroMounstros() << endl;
		m->comer();
		h->pastar();
		h->comer();
		c->cazar();
		c->comer();
		cout << "omnivoro" << endl;
		o->comer();
		delete m;
		cout << "Numero de mounstros: " << Mounstro::obtenerNumeroMounstros() << endl;
	getch();
};