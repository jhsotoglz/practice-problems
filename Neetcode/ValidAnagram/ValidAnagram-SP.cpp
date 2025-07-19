/*
------------------------
Anagrama Válido

Dadas dos cadenas de caracteres s y t, devuelve true si ambas cadenas son anagramas entre sí; de lo contrario, devuelve false.

Un anagrama es una cadena que contiene exactamente los mismos caracteres que otra cadena, pero el orden de los caracteres puede ser diferente.

Ejemplo 1:
Entrada: s = "racecar", t = "carrace"
Salida: true

Ejemplo 2:
Entrada: s = "jar", t = "jam"
Salida: false

Restricciones:
- s y t consisten únicamente en letras minúsculas del alfabeto inglés.

Complejidad de Tiempo: O(n)
Complejidad de Espacio: O(n)
------------------------
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        // ¡Escribe tu solución aquí!
    }
};

int main() {
    Solution solucion;

    string s1 = "racecar", t1 = "carrace";
    string s2 = "jar", t2 = "jam";

    cout << boolalpha;
    cout << "Prueba 1: " << solucion.isAnagram(s1, t1) << endl; // true
    cout << "Prueba 2: " << solucion.isAnagram(s2, t2) << endl; // false

    return 0;
}
