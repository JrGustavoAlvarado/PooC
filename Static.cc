#include <iostream>
#include <string>

using namespace std;

class Persona {
private: 
    string nombre;
    int edad;
public:
    static int numero_personas;
    Persona(string nombre, int edad);
   ~Persona(){
     cout << "destructor" << endl;    
    }


    Persona &establecerNombre(string nombre){
        this->nombre = nombre; 
        return *this; 
    }
    
    Persona  &establecerEdad(int edad){
        this->edad = edad; 
        return *this; 
    }

    void saludar(); 

};

int Persona::numero_personas = 0;
void Persona::saludar(){
    cout << "Hola soy " << nombre << ", mi edad es " << edad << endl;
}

Persona::Persona(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
    numero_personas =+ 1; 
}


int main() {
   
    Persona *p = new Persona("Gustavo", 26);

    cout << "numero de personas: "<< Persona::numero_personas << endl;

    p->establecerNombre("Gustavo").establecerEdad(26).establecerNombre("Gustavo");
    
    
    p->saludar();

}

// Con punteros la memoria se reserva 