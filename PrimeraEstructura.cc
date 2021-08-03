#include <iostream>

#include <string>

using namespace std;

struct Persona {
    string nombre; 
    int edad;
};

int main(){
    Persona *p = new Persona();
    p->nombre = "Gustavo";
    p->edad = 26;
    cout << p->nombre << endl;
    cout << p->edad; 
}