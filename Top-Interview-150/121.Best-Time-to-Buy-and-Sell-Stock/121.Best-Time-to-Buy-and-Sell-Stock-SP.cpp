// Se te da un arreglo `prices` donde `prices[i]` representa el precio de una acción en el día i.

// Quieres maximizar tu ganancia eligiendo un solo día para **comprar** una acción
// y un día diferente en el futuro para **venderla**.

// Devuelve la máxima ganancia que puedes obtener con esta transacción.
// Si no es posible obtener ninguna ganancia, devuelve 0.


// Ejemplo 1:
// Entrada: prices = [7,1,5,3,6,4]
// Salida: 5
// Explicación: Compra en el día 2 (precio = 1) y vende en el día 5 (precio = 6), ganancia = 6 - 1 = 5.

// Ejemplo 2:
// Entrada: prices = [7,6,4,3,1]
// Salida: 0
// Explicación: No se realiza ninguna transacción; no es posible obtener ganancia.

// Restricciones:
//     1 <= prices.length <= 10^5
//     0 <= prices[i] <= 10^4

///////////
// Imports:

///////////

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Escribe tu solución aquí
    }
};

// Función auxiliar para ejecutar y validar casos de prueba
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
    runTest({7, 1, 5, 3, 6, 4}, 5);
    runTest({7, 6, 4, 3, 1}, 0);

    // Puedes agregar más casos personalizados si lo deseas
    // runTest({...}, ...);

    return 0;
}
