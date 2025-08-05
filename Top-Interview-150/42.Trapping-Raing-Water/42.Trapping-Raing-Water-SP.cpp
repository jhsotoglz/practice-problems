// Se te da un arreglo de `n` enteros no negativos que representan un mapa de elevación,
// donde el ancho de cada barra es 1.
// Calcula cuánta agua se puede atrapar después de llover.


// Ejemplo 1:
// Entrada: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Salida: 6
// Explicación:
// El mapa de elevación representado por el arreglo puede atrapar 6 unidades de agua entre las barras.

// Ejemplo 2:
// Entrada: height = [4,2,0,3,2,5]
// Salida: 9

// Restricciones:
//   n == height.length
//   1 <= n <= 2 * 10^4
//   0 <= height[i] <= 10^5

///////////
// Imports:

///////////


using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        // Escribe tu solución aquí!!!
    }
};

// Función auxiliar para ejecutar y validar casos de prueba
void ejecutarPrueba(vector<int> height, int esperado) {
    Solution sol;
    int resultado = sol.trap(height);

    cout << "Alturas: ";
    for (int h : height) cout << h << " ";
    cout << "\nSalida: " << resultado << endl;
    cout << "Esperado: " << esperado << endl;

    assert(resultado == esperado);
    cout << "Prueba superada.\n" << endl;
}

int main() {
    // Casos de prueba de ejemplo
    ejecutarPrueba({0,1,0,2,1,0,1,3,2,1,2,1}, 6);
    ejecutarPrueba({4,2,0,3,2,5}, 9);

    // Puedes agregar más casos de prueba si lo deseas
    // ejecutarPrueba({...}, ...);

    return 0;
}
