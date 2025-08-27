// Dado un arreglo de enteros `nums` ordenado en orden no decreciente,
// elimina algunos duplicados **en el mismo arreglo** de tal forma que cada número único aparezca como máximo **dos veces**.

// El orden relativo de los elementos debe mantenerse igual.

// Como no es posible cambiar el tamaño del arreglo en algunos lenguajes,
// el resultado debe quedar guardado en las primeras `k` posiciones del arreglo `nums`.
// Los valores después de `k` no importan.

// Devuelve `k`, la cantidad de elementos válidos después de eliminar duplicados extra.

// No debes usar espacio adicional para otro arreglo — resuélvelo con O(1) de memoria extra.


// Juez personalizado:

// El juez probará tu solución con el siguiente código:

// int[] nums = [...];             // Arreglo de entrada
// int[] expectedNums = [...];     // Resultado esperado con longitud correcta

// int k = removeDuplicates(nums); // Llama a tu implementación

// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }

// Si todas las afirmaciones se cumplen, tu solución será aceptada.


// Ejemplo 1:

// Entrada: nums = [1,1,1,2,2,3]
// Salida: 5, nums = [1,1,2,2,3,_]
// Explicación: La función debe devolver k = 5, y los primeros 5 elementos deben ser 1, 1, 2, 2 y 3.
// Lo que queda más allá de `k` no importa (por eso se representan como guiones bajos).

// Ejemplo 2:

// Entrada: nums = [0,0,1,1,1,1,2,3,3]
// Salida: 7, nums = [0,0,1,1,2,3,3,_,_]
// Explicación: La función debe devolver k = 7, y los primeros 7 elementos deben ser 0, 0, 1, 1, 2, 3 y 3.
// El resto del arreglo no importa.

// Restricciones:

//     1 <= nums.length <= 3 * 10^4
//     -10^4 <= nums[i] <= 10^4
//     El arreglo `nums` está ordenado en orden no decreciente


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Escribe tu respuesta aqui!
    }
};

// Función auxiliar para imprimir los primeros k elementos del vector
void printVector(const vector<int>& vec, int k) {
    cout << "[";
    for (int i = 0; i < k; ++i) {
        cout << vec[i];
        if (i < k - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    vector<int> expectedNums = {0, 0, 1, 1, 2, 3, 3}; // Resultado esperado (máximo dos veces cada número)

    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << "Valor devuelto k = " << k << endl;
    cout << "nums modificado (primeros k elementos): ";
    printVector(nums, k);

    cout << "Resultado esperado: ";
    printVector(expectedNums, expectedNums.size());

    // Validación del juez personalizado
    assert(k == expectedNums.size());
    for (int i = 0; i < k; ++i) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "¡Correcto!" << endl;
    return 0;
}
