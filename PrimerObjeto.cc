#include <iostream>
#include <string>

using namespace std;

class Persona {
private: 
    string nombre;
    int edad;
public:
    Persona(string nombre, int edad){
        this->nombre = nombre;
        this->edad = edad; 
    }
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

    void saludar() {
        cout << " Hola Soy " << nombre << ", mi edad es " << edad <<  endl;
    } 

};

int main() {
   
    Persona *p = new Persona("Gustavo", 26);

    p->establecerNombre("Gustavo").establecerEdad(26).establecerNombre("Gustavo");
    
    
    p->saludar();

}

// Con punteros la memoria se reserva 

