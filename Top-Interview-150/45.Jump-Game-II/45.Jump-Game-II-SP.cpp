// Se te da un arreglo de enteros `nums` indexado desde 0 y de longitud `n`.
// Inicialmente estás posicionado en `nums[0]`.

// Cada elemento `nums[i]` representa la longitud máxima de un salto hacia adelante desde el índice `i`.
// En otras palabras, si estás en el índice `i`, puedes saltar a cualquier índice `i + j` tal que:
//     0 <= j <= nums[i] y i + j < n

// Devuelve el número mínimo de saltos necesarios para llegar al último índice `nums[n - 1]`.

// Se garantiza que siempre es posible llegar al último índice.


// Ejemplo 1:
// Entrada: nums = [2,3,1,1,4]
// Salida: 2
// Explicación: Saltas del índice 0 -> 1, luego del 1 -> 4

// Ejemplo 2:
// Entrada: nums = [2,3,0,1,4]
// Salida: 2

// Restricciones:
//     1 <= nums.length <= 10^4
//     0 <= nums[i] <= 1000
//     Siempre puedes llegar al último índice

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        // Escribe tu solución aquí!!
    }
};

// Función auxiliar para ejecutar y validar los casos de prueba
void runTest(vector<int> nums, int esperado) {
    Solution sol;
    int resultado = sol.jump(nums);

    cout << "Entrada: ";
    for (int n : nums) cout << n << " ";
    cout << "\nSalida: " << resultado << endl;
    cout << "Esperado: " << esperado << endl;

    assert(resultado == esperado);
    cout << "Prueba superada.\n" << endl;
}

int main() {
    // Casos de prueba de ejemplo
    runTest({2, 3, 1, 1, 4}, 2);
    runTest({2, 3, 0, 1, 4}, 2);

    // Puedes agregar más casos personalizados si lo deseas
    // runTest({...}, ...);

    return 0;
}
