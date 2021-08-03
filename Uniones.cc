#include <iostream>
#include <string>

using namespace std;

int main(){
    union numero_letra{
        int numero; 
        char letra; 
    };

    numero_letra x = {'A'};

    cout << "x como un numero: " << x.numero << endl;
    cout << "x como una letra: " << x.letra << endl;

    enum dias_semana {lunes = 'L', martes = 'M', miercoles = 'X'};
    dias_semana dia = martes;

    cout << (char) dia; 
}
