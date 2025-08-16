/*
------------------------
Contiene Duplicados

Dado un arreglo de enteros llamado nums, devuelve true si algún valor aparece más de una vez en el arreglo; de lo contrario, devuelve false.

Ejemplo 1:
Entrada: nums = [1, 2, 3, 3]
Salida: true

Ejemplo 2:
Entrada: nums = [1, 2, 3, 4]
Salida: false

Complejidad de tiempo: O(n)
Complejidad de espacio: O(n)
------------------------
*/

///////////
// Imports:

///////////

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // ¡Escribe tu solución aquí!
    }
};

int main() {
    Solution solucion;

    vector<int> prueba1 = {1, 2, 3, 3};
    vector<int> prueba2 = {1, 2, 3, 4};

    cout << boolalpha;
    cout << "Prueba 1: " << solucion.hasDuplicate(prueba1) << endl; // true
    cout << "Prueba 2: " << solucion.hasDuplicate(prueba2) << endl; // false

    return 0;
}
