// Dado un arreglo de enteros `citations`, donde `citations[i]` representa la cantidad de citas
// que recibió el investigador para su i-ésimo artículo, devuelve el índice h del investigador.

// Según la definición en Wikipedia:
// El índice h se define como el valor máximo de `h` tal que el investigador ha publicado al menos `h` artículos,
// y cada uno de esos artículos ha sido citado al menos `h` veces.


// Ejemplo 1:
// Entrada: citations = [3,0,6,1,5]
// Salida: 3
// Explicación: El investigador tiene 5 artículos con 3, 0, 6, 1 y 5 citas.
// Tiene 3 artículos con al menos 3 citas cada uno. Por lo tanto, su índice h es 3.

// Ejemplo 2:
// Entrada: citations = [1,3,1]
// Salida: 1

// Restricciones:
//     n == citations.length
//     1 <= n <= 5000
//     0 <= citations[i] <= 1000

#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        // Escribe tu solución aquí!!!
    }
};

// Función auxiliar para ejecutar y validar los casos de prueba
void runTest(vector<int> citations, int expected) {
    Solution sol;
    int result = sol.hIndex(citations);

    cout << "Entrada: ";
    for (int c : citations) cout << c << " ";
    cout << "\nSalida: " << result << endl;
    cout << "Esperado: " << expected << endl;

    assert(result == expected);
    cout << "Prueba superada.\n" << endl;
}

int main() {
    // Casos de prueba de ejemplo
    runTest({3, 0, 6, 1, 5}, 3);
    runTest({1, 3, 1}, 1);

    // Puedes agregar más casos personalizados si lo deseas
    // runTest({...}, ...);

    return 0;
}
