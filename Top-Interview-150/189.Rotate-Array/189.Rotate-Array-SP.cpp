// Dado un arreglo de enteros `nums`, rota el arreglo hacia la derecha `k` posiciones, donde `k` es un número no negativo.

// Ejemplo 1:
// Entrada: nums = [1,2,3,4,5,6,7], k = 3
// Salida: [5,6,7,1,2,3,4]
// Explicación:
// Rota 1 vez: [7,1,2,3,4,5,6]
// Rota 2 veces: [6,7,1,2,3,4,5]
// Rota 3 veces: [5,6,7,1,2,3,4]

// Ejemplo 2:
// Entrada: nums = [-1,-100,3,99], k = 2
// Salida: [3,99,-1,-100]
// Explicación:
// Rota 1 vez: [99,-1,-100,3]
// Rota 2 veces: [3,99,-1,-100]

// Restricciones:
//     1 <= nums.length <= 10^5
//     -2^31 <= nums[i] <= 2^31 - 1
//     0 <= k <= 10^5

// Nota adicional (Follow-up):
// Intenta pensar en varias formas de resolver este problema. Hay al menos tres enfoques diferentes.
// ¿Puedes hacerlo en el mismo arreglo y usando solo O(1) espacio extra?

#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // Escribe tu solución aquí
    }
};

// Función auxiliar para ejecutar un caso de prueba
void runTest(vector<int> nums, int k, vector<int> expected) {
    Solution sol;
    sol.rotate(nums, k);

    cout << "Entrada k = " << k << endl;
    cout << "Salida:    ";
    for (int n : nums) cout << n << " ";
    cout << "\nEsperado:  ";
    for (int n : expected) cout << n << " ";
    cout << endl;

    assert(nums == expected);
    cout << "Prueba superada.\n" << endl;
}

int main() {
    // Casos de prueba de ejemplo
    runTest({1, 2, 3, 4, 5, 6, 7}, 3, {5, 6, 7, 1, 2, 3, 4});
    runTest({-1, -100, 3, 99}, 2, {3, 99, -1, -100});

    // Puedes agregar más casos aquí
    // runTest({...}, k, {...});

    return 0;
}
