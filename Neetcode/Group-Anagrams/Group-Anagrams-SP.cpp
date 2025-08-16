
/*
------------------------
Agrupar Anagramas

Dado un arreglo de cadenas `strs`, agrupa todos los anagramas juntos en sublistas. Puedes devolver la salida en cualquier orden.

Un anagrama es una cadena que contiene exactamente los mismos caracteres que otra cadena, pero el orden de los caracteres puede ser diferente.

Ejemplo 1:
Entrada: strs = ["act", "pots", "tops", "cat", "stop", "hat"]
Salida: [["hat"], ["act", "cat"], ["stop", "pots", "tops"]]

Ejemplo 2:
Entrada: strs = ["x"]
Salida: [["x"]]

Ejemplo 3:
Entrada: strs = [""]
Salida: [[""]]

Restricciones:
- 1 <= strs.length <= 1000
- 0 <= strs[i].length <= 100
- strs[i] está compuesto por letras minúsculas del alfabeto inglés

Complejidad Temporal: O(n * k log k), donde n = número de cadenas y k = longitud máxima de una cadena  
Complejidad Espacial: O(n * k)
------------------------
*/

///////////
// Imports:

///////////

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        // ¡Escribe tu solución aquí!
    }
};

int main()
{
    Solution solution;

    vector<string> strs1 = {"act", "pots", "tops", "cat", "stop", "hat"};
    vector<string> strs2 = {"x"};
    vector<string> strs3 = {""};

    vector<vector<string>> result1 = solution.groupAnagrams(strs1);
    vector<vector<string>> result2 = solution.groupAnagrams(strs2);
    vector<vector<string>> result3 = solution.groupAnagrams(strs3);

    auto printGroups = [](const vector<vector<string>> &groups) {
        for (const auto &group : groups)
        {
            cout << "[ ";
            for (const auto &word : group)
                cout << word << " ";
            cout << "]" << endl;
        }
    };

    cout << "Resultado 1:" << endl;
    printGroups(result1);
    cout << "\nResultado 2:" << endl;
    printGroups(result2);
    cout << "\nResultado 3:" << endl;
    printGroups(result3);

    return 0;
}
