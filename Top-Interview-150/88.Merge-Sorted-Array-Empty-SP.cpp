// Se te dan dos arreglos de enteros nums1 y nums2, ordenados en orden no decreciente, 
// y dos enteros m y n que representan la cantidad de elementos válidos en nums1 y nums2 respectivamente.

// Fusiona nums1 y nums2 en un solo arreglo ordenado en orden no decreciente.

// El arreglo final ordenado no debe ser retornado por la función, sino almacenado dentro del arreglo nums1.
// Para permitir esto, nums1 tiene una longitud de m + n, donde los primeros m elementos son los que deben ser fusionados, 
// y los últimos n elementos están establecidos en 0 y deben ser ignorados. nums2 tiene una longitud de n.

 
// Ejemplo 1:

// Entrada: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Salida: [1,2,2,3,5,6]
// Explicación: Los arreglos que estamos fusionando son [1,2,3] y [2,5,6].
// El resultado de la fusión es [1,2,2,3,5,6], con los elementos subrayados provenientes de nums1.

// Ejemplo 2:

// Entrada: nums1 = [1], m = 1, nums2 = [], n = 0
// Salida: [1]
// Explicación: Los arreglos que estamos fusionando son [1] y [].
// El resultado de la fusión es [1].

// Ejemplo 3:

// Entrada: nums1 = [0], m = 0, nums2 = [1], n = 1
// Salida: [1]
// Explicación: Los arreglos que estamos fusionando son [] y [1].
// El resultado de la fusión es [1].
// Nota: como m = 0, no hay elementos válidos en nums1. El 0 solo está allí para asegurar que el resultado 
// de la fusión pueda almacenarse en nums1.

 
// Restricciones:

//     nums1.length == m + n
//     nums2.length == n
//     0 <= m, n <= 200
//     1 <= m + n <= 200
//     -109 <= nums1[i], nums2[j] <= 109

// Pregunta adicional: ¿Puedes diseñar un algoritmo que funcione en tiempo O(m + n)?

# include <iostream>
# include <vector>
using namespace std;

class Solution {
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // ¡Escribe la solución aquí!
    }
};

int main() {
    
    // Ejemplo 1
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    // Salida
    cout << "Arreglo fusionado: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
