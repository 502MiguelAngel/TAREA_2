#include <iostream>
#include <stack>
#include <queue>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int NUMERO_DATOS = 1000000; // Un millón de datos
    const int MIN = -10000000; // Menor valor permitido
    const int MAX = 10000000; // Mayor valor permitido
    
    // Inicialización del generador de números aleatorios
    srand(time(nullptr));
    
    // Creación de una pila para insertar los números
    stack<int> pila;
    for (int i = 0; i < NUMERO_DATOS; i++) {
        int numero = rand() % (MAX - MIN + 1) + MIN; // Generación del número aleatorio
        pila.push(numero);
    }
    
    // Extracción de los números de la pila
    cout << "Extrayendo " << NUMERO_DATOS << " numeros de la pila:" << endl;
    for (int i = 0; i < NUMERO_DATOS; i++) {
        int numero = pila.top();
        pila.pop();
        // Aquí se podría hacer algo con el número, pero en este caso simplemente lo ignoramos
    }
    
    // Creación de una cola para insertar los números
    queue<int> cola;
    for (int i = 0; i < NUMERO_DATOS; i++) {
        int numero = rand() % (MAX - MIN + 1) + MIN; // Generación del número aleatorio
        cola.push(numero);
    }
    
    // Extracción de los números de la cola
    cout << "Extrayendo " << NUMERO_DATOS << " numeros de la cola:" << endl;
    for (int i = 0; i < NUMERO_DATOS; i++) {
        int numero = cola.front();
        cola.pop();
        // Aquí se podría hacer algo con el número, pero en este caso simplemente lo ignoramos
    }
    
    return 0;
}