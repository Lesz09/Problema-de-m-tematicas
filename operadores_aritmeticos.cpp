#include <iostream>

using namespace std;

int main(){
    // Luis compró 8 cuadernos a 25 pesos cada uno y 7 bolígrafos. En total se gastó 298 pesos, ¿cuánto costó cada bolígrafo?

    // Materiales
    int cuadernos, boligrafos;
    // Cantidad de materiales
    cuadernos = 8;
    boligrafos = 7;
    // Precio de los materiales
    int precio_cuadernos; // Declaración
    int precio_desconocido_boligrafos; // Declaración
    precio_cuadernos = 25; // Asignación de precio
    // Costo total 
    int gasto = 298;

    precio_desconocido_boligrafos = (gasto - (cuadernos * precio_cuadernos)) / boligrafos;
    cout << "Cuanto costo cada boligrafo? " << precio_desconocido_boligrafos;
}