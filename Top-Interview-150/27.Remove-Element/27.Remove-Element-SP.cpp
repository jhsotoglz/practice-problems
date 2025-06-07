// Dado un arreglo de enteros `nums` y un entero `val`, elimina todas las ocurrencias de `val` en `nums` **en el mismo arreglo**.
// El orden de los elementos puede cambiar. Luego, devuelve el número de elementos en `nums` que **no** son iguales a `val`.

// Considera que el número de elementos diferentes de `val` se llama `k`. Para que la solución sea aceptada, debes hacer lo siguiente:

//     Modifica el arreglo `nums` de tal manera que los primeros `k` elementos sean aquellos que no son iguales a `val`.
//     Los elementos restantes **no importan**, al igual que el tamaño original del arreglo.
//     Devuelve `k`.

// Juez personalizado:

// El juez evaluará tu solución con el siguiente código:

// int[] nums = [...]; // Arreglo de entrada
// int val = ...;      // Valor a eliminar
// int[] expectedNums = [...]; // Resultado esperado con longitud correcta
//                             // Está ordenado y no contiene el valor `val`.

// int k = removeElement(nums, val); // Llama a tu implementación

// assert k == expectedNums.length;
// sort(nums, 0, k); // Ordena los primeros k elementos de nums
// for (int i = 0; i < actualLength; i++) {
//     assert nums[i] == expectedNums[i];
// }

// Si todas las afirmaciones se cumplen, entonces tu solución será aceptada.


// Ejemplo 1:

// Entrada: nums = [3,2,2,3], val = 3
// Salida: 2, nums = [2,2,_,_]
// Explicación: Tu función debe devolver k = 2, y los dos primeros elementos deben ser 2.
// No importa qué valores haya más allá del índice k (por eso se muestran como guiones bajos).

// Ejemplo 2:

// Entrada: nums = [0,1,2,2,3,0,4,2], val = 2
// Salida: 5, nums = [0,1,4,0,3,_,_,_]
// Explicación: Tu función debe devolver k = 5, y los primeros cinco elementos deben ser 0, 1, 4, 0 y 3.
// El orden de estos cinco elementos puede variar.
// No importa qué valores haya después de esos cinco elementos.

// Restricciones:

//     0 <= nums.length <= 100
//     0 <= nums[i] <= 50
//     0 <= val <= 100


#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Escribe la solución aquí
    }
};

// Función auxiliar para imprimir los primeros k elementos de un vector
void printVector(const vector<int>& vec, int k) {
    cout << "[";
    for (int i = 0; i < k; ++i) {
        cout << vec[i];
        if (i < k - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    vector<int> expectedNums = {0, 1, 4, 0, 3}; // Valores esperados (el orden no importa)

    Solution sol;
    int k = sol.removeElement(nums, val);

    // Ordenamos ambos vectores para poder comparar (porque el orden no importa)
    sort(nums.begin(), nums.begin() + k);
    sort(expectedNums.begin(), expectedNums.end());

    cout << "Valor devuelto k = " << k << endl;
    cout << "nums modificado (primeros k elementos): ";
    printVector(nums, k);

    cout << "Resultado esperado: ";
    printVector(expectedNums, expectedNums.size());

    // Verificamos que la salida sea correcta
    assert(k == expectedNums.size());
    for (int i = 0; i < k; ++i) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "¡Correcto!" << endl;
    return 0;
}