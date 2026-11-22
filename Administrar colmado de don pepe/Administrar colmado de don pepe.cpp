
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Constante con la cantidad de días de la semana
    const int Dias = 7;

    double ventas[Dias];
    string dias[Dias] = { "lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo" };

    double promedio, total = 0;
    int mayor = 0, menor = 0, contador = 0;

    cout << "\n---VENTAS DEL COLMADO DON PEPE---\n" << endl;
    cout << "  --ADMINISTRADOR DE VENTAS--\n";
    cout << endl;
    for (int j = 0; j < Dias; j++) {

        cout << "Ventas del dia " << dias[j] << ": ";
        cin >> ventas[j];

        while (ventas[j] < 0) {
            cout << "Error. Introduzca un monto positivo: ";
            cin >> ventas[j];
        }

        total += ventas[j];
    }

    promedio = total / Dias;

    // Busca qué día tuvo la venta más alta y cuál tuvo la más baja.
    for (int j = 1; j < Dias; j++) {
        if (ventas[j] > ventas[mayor]) {
            mayor = j;
        }

        if (ventas[j] < ventas[menor]) {
            menor = j;
        }

    }

    cout << "--- LISTADO DE VENTAS ---\n" << endl;

    for (int j = 0;j < Dias; j++) {
        cout << dias[j] << ": RD$ " << ventas[j] << endl;
    }

    cout << "\n------ RESUMEN DE LA SEMANA ------\n" << endl;
    cout << "Total Semanal: RD$ " << total << endl;
    cout << "Promedio Diario: RD$" << promedio << endl;
    cout << "Dia con una mayor venta: " << dias[mayor] << ". Monto vendido ese dia: RD$ " << ventas[mayor] << endl;
    cout << "Dia con una menor venta: " << dias[menor] << ". Monto vendido ese dia: RD$" << ventas[menor] << endl;
    cout << "Dias sobre el promedio: ";

    // Revisa cuáles días estuvieron por encima del promedio y contarlos.
    for (int j = 0; j < Dias; j++) {

        if (ventas[j] > promedio) {
            if (contador > 0) {
                cout << ", ";
            }
            cout << dias[j];
            contador++;
        }
    }

    if (contador == 0) {
        cout << "Ninguno.";
    }

    cout << endl;
    cout << "Cantidad de dias: " << contador << endl;

}

