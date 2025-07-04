// Hay `n` niños formando una fila.
// A cada niño se le ha asignado un valor de calificación en el arreglo `ratings`.

// Vas a repartir caramelos a estos niños con las siguientes reglas:
//   1. Cada niño debe recibir al menos un caramelo.
//   2. Los niños con una calificación mayor que sus vecinos deben recibir más caramelos que ellos.

// Devuelve el **mínimo número de caramelos** que necesitas para satisfacer todas las condiciones.


// Ejemplo 1:
// Entrada: ratings = [1, 0, 2]
// Salida: 5
// Explicación: Puedes repartir [2, 1, 2] caramelos.

// Ejemplo 2:
// Entrada: ratings = [1, 2, 2]
// Salida: 4
// Explicación: Puedes repartir [1, 2, 1] caramelos.

// Restricciones:
//   n == ratings.length
//   1 <= n <= 2 * 10^4
//   0 <= ratings[i] <= 2 * 10^4

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        // Escribe tu solución aquí!!!
    }
};

// Función auxiliar para ejecutar y validar casos de prueba
void ejecutarPrueba(vector<int> ratings, int esperado) {
    Solution sol;
    int resultado = sol.candy(ratings);

    cout << "Calificaciones: ";
    for (int r : ratings) cout << r << " ";
    cout << "\nSalida: " << resultado << endl;
    cout << "Esperado: " << esperado << endl;

    assert(resultado == esperado);
    cout << "Prueba superada.\n" << endl;
}

int main() {
    // Casos de prueba de ejemplo
    ejecutarPrueba({1, 0, 2}, 5);
    ejecutarPrueba({1, 2, 2}, 4);

    // Puedes agregar más casos personalizados si lo deseas
    // ejecutarPrueba({...}, ...);

    return 0;
}
