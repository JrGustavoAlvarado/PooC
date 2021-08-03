#include <iostream>

using namespace std;

int main(){
    char letra = 'A';
    char *puntero = &letra;
    cout << (int *) &letra  << endl;
    cout << (int *) puntero << endl;
    cout << *puntero;
}