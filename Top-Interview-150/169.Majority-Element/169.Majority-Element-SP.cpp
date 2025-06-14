// Dado un arreglo `nums` de tamaño `n`, devuelve el elemento mayoritario.

// El elemento mayoritario es el que aparece más de ⌊n / 2⌋ veces.
// Puedes asumir que el elemento mayoritario **siempre existe** en el arreglo.


// Ejemplo 1:
// Entrada: nums = [3,2,3]
// Salida: 3

// Ejemplo 2:
// Entrada: nums = [2,2,1,1,1,2,2]
// Salida: 2


// Restricciones:
//     n == nums.length
//     1 <= n <= 5 * 10^4
//     -10^9 <= nums[i] <= 10^9

// Nota adicional (Follow-up):
// ¿Puedes resolver el problema en tiempo lineal y usando O(1) espacio?

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Escribe tu solución aquí
    }
};

// Función auxiliar para ejecutar un caso de prueba
void runTest(vector<int> nums, int expected) {
    Solution sol;
    int result = sol.majorityElement(nums);

    cout << "Entrada: ";
    for (int num : nums) cout << num << " ";
    cout << "\nSalida: " << result << endl;
    cout << "Esperado: " << expected << endl;

    assert(result == expected);
    cout << "Prueba superada.\n" << endl;
}

int main() {
    // Casos de prueba de ejemplo
    runTest({3, 2, 3}, 3);
    runTest({2, 2, 1, 1, 1, 2, 2}, 2);

    // Puedes agregar más casos si lo deseas
    // runTest({...}, ...);

    return 0;
}
