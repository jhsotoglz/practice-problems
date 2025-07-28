// Dado un arreglo de enteros `nums` ordenado en orden no decreciente,
// elimina los elementos duplicados **en el mismo arreglo** de manera que
// cada elemento único aparezca **una sola vez**.

// El orden relativo de los elementos debe mantenerse igual que en la entrada.

// Considera que el número de elementos únicos se llama `k`. Para que tu solución sea aceptada, debes hacer lo siguiente:

//     Modifica el arreglo `nums` de manera que los primeros `k` elementos contengan los elementos únicos en el mismo orden en que aparecieron.
//     Los elementos restantes **no importan**, al igual que el tamaño original del arreglo.
//     Devuelve `k`.

// Juez personalizado:

// El juez probará tu solución con el siguiente código:

// int[] nums = [...]; // Arreglo de entrada
// int[] expectedNums = [...]; // Resultado esperado con longitud correcta

// int k = removeDuplicates(nums); // Llama a tu implementación

// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }

// Si todas las afirmaciones se cumplen, entonces tu solución será aceptada.


// Ejemplo 1:

// Entrada: nums = [1,1,2]
// Salida: 2, nums = [1,2,_]
// Explicación: Tu función debe devolver k = 2, y los dos primeros elementos deben ser 1 y 2.
// No importa qué valores haya después del índice k (por eso se muestran como guiones bajos).

// Ejemplo 2:

// Entrada: nums = [0,0,1,1,1,2,2,3,3,4]
// Salida: 5, nums = [0,1,2,3,4,_,_,_,_,_]
// Explicación: Tu función debe devolver k = 5, y los primeros cinco elementos deben ser 0, 1, 2, 3 y 4.
// No importa qué valores haya después del índice k.

// Restricciones:

//     1 <= nums.length <= 3 * 10^4
//     -100 <= nums[i] <= 100
//     nums está ordenado en orden no decreciente


using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Escribe tu respuesta aqui!
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
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> expectedNums = {0, 1, 2, 3, 4}; // Elementos únicos esperados

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
