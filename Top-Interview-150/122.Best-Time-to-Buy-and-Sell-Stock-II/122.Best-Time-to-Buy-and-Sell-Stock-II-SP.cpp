// Se te da un arreglo de enteros `prices`, donde `prices[i]` representa el precio de una acción en el día i.

// Cada día, puedes decidir comprar y/o vender la acción.
// Solo puedes tener como máximo una acción a la vez.
// Sin embargo, puedes comprar y luego vender inmediatamente en el mismo día.

// Devuelve la máxima ganancia que puedes obtener.


// Ejemplo 1:
// Entrada: prices = [7,1,5,3,6,4]
// Salida: 7
// Explicación:
// Comprar en el día 2 (precio = 1), vender en el día 3 (precio = 5), ganancia = 4
// Comprar en el día 4 (precio = 3), vender en el día 5 (precio = 6), ganancia = 3
// Ganancia total = 4 + 3 = 7

// Ejemplo 2:
// Entrada: prices = [1,2,3,4,5]
// Salida: 4
// Explicación: Comprar en el día 1, vender en el día 5, ganancia = 4

// Ejemplo 3:
// Entrada: prices = [7,6,4,3,1]
// Salida: 0
// Explicación: No se realiza ninguna transacción; la ganancia es 0

// Restricciones:
//     1 <= prices.length <= 3 * 10^4
//     0 <= prices[i] <= 10^4

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Escribe tu solución aquí
    }
};

// Función auxiliar para ejecutar y validar los casos de prueba
void runTest(vector<int> prices, int expected) {
    Solution sol;
    int result = sol.maxProfit(prices);

    cout << "Entrada: ";
    for (int p : prices) cout << p << " ";
    cout << "\nSalida: " << result << endl;
    cout << "Esperado: " << expected << endl;

    assert(result == expected);
    cout << "Prueba superada.\n" << endl;
}

int main() {
    // Casos de prueba de ejemplo
    runTest({7, 1, 5, 3, 6, 4}, 7);
    runTest({1, 2, 3, 4, 5}, 4);
    runTest({7, 6, 4, 3, 1}, 0);

    // Puedes agregar más casos personalizados si lo deseas
    // runTest({...}, ...);

    return 0;
}
