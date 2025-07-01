// Dado un arreglo de enteros `nums`, devuelve un arreglo `respuesta` tal que
// `respuesta[i]` sea igual al producto de todos los elementos de `nums` excepto `nums[i]`.

// El producto de cualquier prefijo o sufijo del arreglo está garantizado que cabe en un entero de 32 bits.

// Debes escribir un algoritmo que funcione en tiempo O(n) y **sin utilizar la operación de división**.


// Ejemplo 1:
// Entrada: nums = [1,2,3,4]
// Salida: [24,12,8,6]

// Ejemplo 2:
// Entrada: nums = [-1,1,0,-3,3]
// Salida: [0,0,9,0,0]

// Restricciones:
//     2 <= nums.length <= 10^5
//     -30 <= nums[i] <= 30
//     Se garantiza que el resultado cabe en un entero de 32 bits.

// Nota adicional:
// ¿Puedes resolver el problema usando solo O(1) de espacio extra?
// (El arreglo de salida no cuenta como espacio extra para el análisis de complejidad espacial)

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Escribe tu solución aquí
    }
};

// Función auxiliar para mostrar un vector
void printVector(const vector<int>& vec) {
    cout << "[";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

// Función auxiliar para ejecutar y validar casos de prueba
void runTest(vector<int> nums, vector<int> esperado) {
    Solution sol;
    vector<int> resultado = sol.productExceptSelf(nums);

    cout << "Entrada: ";
    printVector(nums);
    cout << "Salida: ";
    printVector(resultado);
    cout << "Esperado: ";
    printVector(esperado);

    assert(resultado == esperado);
    cout << "Prueba superada.\n" << endl;
}

int main() {
    // Casos de prueba de ejemplo
    runTest({1, 2, 3, 4}, {24, 12, 8, 6});
    runTest({-1, 1, 0, -3, 3}, {0, 0, 9, 0, 0});

    // Puedes agregar más casos personalizados aquí
    // runTest({...}, {...});

    return 0;
}
