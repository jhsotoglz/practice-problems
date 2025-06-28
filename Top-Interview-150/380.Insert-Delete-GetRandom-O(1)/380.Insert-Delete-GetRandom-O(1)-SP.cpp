// Implementa la clase RandomizedSet:

// - RandomizedSet() Inicializa el objeto RandomizedSet.
// - bool insert(int val) Inserta un valor en el conjunto si no está presente. Devuelve true si se insertó, false en caso contrario.
// - bool remove(int val) Elimina un valor del conjunto si está presente. Devuelve true si se eliminó, false en caso contrario.
// - int getRandom() Devuelve un elemento aleatorio del conjunto actual. Todos los elementos deben tener la misma probabilidad.

// Debes implementar todas las funciones para que cada una funcione en promedio en tiempo O(1).


// Ejemplo:

// Entrada:
// ["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
// [[], [1], [2], [2], [], [1], [2], []]
// Salida:
// [null, true, false, true, 2, true, false, 2]

// Explicación:
// RandomizedSet randomizedSet = new RandomizedSet();
// randomizedSet.insert(1);       // true
// randomizedSet.remove(2);       // false
// randomizedSet.insert(2);       // true
// randomizedSet.getRandom();     // devuelve aleatoriamente 1 o 2
// randomizedSet.remove(1);       // true
// randomizedSet.insert(2);       // false (ya estaba en el conjunto)
// randomizedSet.getRandom();     // devuelve 2

// Restricciones:
// -2^31 <= val <= 2^31 - 1
// Se harán como máximo 2 * 10^5 llamadas a insert, remove y getRandom.
// Se garantiza que habrá al menos un elemento cuando se llame a getRandom().

#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;

class RandomizedSet {
private:
    unordered_map<int, int> valToIndex; // Mapea el valor al índice en el vector
    vector<int> data;                   // Almacena los elementos actuales

public:
    RandomizedSet() {
        // Escribe tu solución aquí
    }

    bool insert(int val) {
        // Escribe tu solución aquí
    }

    bool remove(int val) {
        // Escribe tu solución aquí
    }

    int getRandom() {
        // Escribe tu solución aquí
    }
};

// Función de prueba para demostrar el comportamiento
void runDemo() {
    RandomizedSet randomizedSet;

    assert(randomizedSet.insert(1) == true);
    assert(randomizedSet.remove(2) == false);
    assert(randomizedSet.insert(2) == true);

    int rand1 = randomizedSet.getRandom(); // debe ser 1 o 2
    assert(rand1 == 1 || rand1 == 2);

    assert(randomizedSet.remove(1) == true);
    assert(randomizedSet.insert(2) == false);

    int rand2 = randomizedSet.getRandom(); // debe ser 2
    assert(rand2 == 2);

    cout << "Todas las pruebas fueron exitosas.\n";
}

int main() {
    runDemo();
    return 0;
}
