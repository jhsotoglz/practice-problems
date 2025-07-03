// Hay `n` estaciones de gasolina en una ruta circular,
// donde la cantidad de gasolina en la estación i es `gas[i]`.

// Tienes un coche con un tanque de gasolina ilimitado, pero te cuesta `cost[i]` unidades de gasolina
// viajar desde la estación i hasta la estación i+1.

// Comienzas el viaje con el tanque vacío en una de las estaciones.

// Devuelve el índice de la estación desde la que se puede empezar para completar
// una vuelta completa en sentido horario, o devuelve -1 si no es posible.

// Si existe una solución, se garantiza que es única.


// Ejemplo 1:
// Entrada: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
// Salida: 3
// Explicación:
// Comienza en la estación 3 -> tanque = 4
// Va a la estación 4 -> tanque = 4 - 1 + 5 = 8
// Va a la estación 0 -> tanque = 8 - 2 + 1 = 7
// Va a la estación 1 -> tanque = 7 - 3 + 2 = 6
// Va a la estación 2 -> tanque = 6 - 4 + 3 = 5
// Va a la estación 3 -> tanque = 5 - 5 = 0

// Ejemplo 2:
// Entrada: gas = [2,3,4], cost = [3,4,3]
// Salida: -1
// Explicación: Ningún punto de partida permite completar el circuito.


// Restricciones:
//   n == gas.length == cost.length
//   1 <= n <= 10^5
//   0 <= gas[i], cost[i] <= 10^4
//   La entrada se genera de tal forma que la respuesta es única.

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // Escribe tu solución aquí!!
    }
};

// Función auxiliar para ejecutar y validar los casos de prueba
void ejecutarPrueba(vector<int> gas, vector<int> cost, int esperado) {
    Solution sol;
    int resultado = sol.canCompleteCircuit(gas, cost);

    cout << "Gasolina: ";
    for (int g : gas) cout << g << " ";
    cout << "\nCoste: ";
    for (int c : cost) cout << c << " ";
    cout << "\nSalida: " << resultado << endl;
    cout << "Esperado: " << esperado << endl;

    assert(resultado == esperado);
    cout << "Prueba superada.\n" << endl;
}

int main() {
    // Casos de prueba de ejemplo
    ejecutarPrueba({1, 2, 3, 4, 5}, {3, 4, 5, 1, 2}, 3);
    ejecutarPrueba({2, 3, 4}, {3, 4, 3}, -1);

    // Puedes agregar más casos personalizados si lo deseas
    // ejecutarPrueba({...}, {...}, ...);

    return 0;
}
