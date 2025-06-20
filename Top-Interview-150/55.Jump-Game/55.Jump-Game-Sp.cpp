// Se te da un arreglo de enteros `nums`.
// Estás inicialmente posicionado en el primer índice del arreglo.

// Cada elemento en el arreglo representa el máximo número de pasos que puedes saltar desde esa posición.

// Devuelve `true` si puedes alcanzar el último índice, o `false` en caso contrario.


// Ejemplo 1:
// Entrada: nums = [2,3,1,1,4]
// Salida: true
// Explicación: Salta 1 paso desde el índice 0 al 1, luego 3 pasos hasta el último índice.

// Ejemplo 2:
// Entrada: nums = [3,2,1,0,4]
// Salida: false
// Explicación: Siempre llegarás al índice 3, pero no podrás avanzar más porque nums[3] = 0.

// Restricciones:
//     1 <= nums.length <= 10^4
//     0 <= nums[i] <= 10^5

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        // Escribe tu solución aquí
    }
};

// Función auxiliar para ejecutar y validar casos de prueba
void runTest(vector<int> nums, bool expected) {
    Solution sol;
    bool result = sol.canJump(nums);

    cout << "Entrada: ";
    for (int n : nums) cout << n << " ";
    cout << "\nSalida: " << (result ? "true" : "false") << endl;
    cout << "Esperado: " << (expected ? "true" : "false") << endl;

    assert(result == expected);
    cout << "Prueba superada.\n" << endl;
}

int main() {
    // Casos de prueba de ejemplo
    runTest({2, 3, 1, 1, 4}, true);
    runTest({3, 2, 1, 0, 4}, false);

    // Puedes agregar más casos de prueba si lo deseas
    // runTest({...}, ...);

    return 0;
}
