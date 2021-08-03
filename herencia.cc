#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
        static int numeroAnimales;
        string alimento;
    public:
        Animal();
        ~Animal();
        static int obtenerNumeroAnimales();
        string obtenerAlimento() {
            return alimento;
        }
        void comer() {
            cout << "Este animal está comiendo " << alimento << "... ñom ñom" << endl;
        }
};

int Animal::numeroAnimales = 0;

Animal::Animal() {
    cout << "Creando nuevo animal..." << endl;
    numeroAnimales += 1;
}

Animal::~Animal() {
    cout << "Borrando animal..." << endl;
    numeroAnimales -= 1;
}

int Animal::obtenerNumeroAnimales() {
    return numeroAnimales;
}

int main() {
    Animal *a = new Animal();
    cout << "Numero de animales " << Animal::obtenerNumeroAnimales() << endl;
    a->comer();
    delete a;
    cout << "Numero de animales " << Animal::obtenerNumeroAnimales() << endl;
}