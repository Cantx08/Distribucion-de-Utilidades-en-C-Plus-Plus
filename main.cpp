#include <iostream>
using namespace std;

int main()
{
    cout << "15 Programa que indica el valor correspondiente a las utilidades de cada socio";
    float socioA, socioB, socioC, valor;

    // Los utilidades deben ser mayores a 0
    cout << "\nDigite el valor total de las utilidades: USD ";
    cin >> valor;
    // Al socio A le corresponde el 40% de las utilidades, al socio B el 25% y al socio C el 35%
    socioA = 0.4 * valor;
    socioB = 0.25 * valor;
    socioC = 0.35 * valor;

    // Mostrar resultados en consola
    cout << "\n***** DISTRIBUCION DE UTILIDADES *****";
    cout << "\nSocio A: USD " << socioA;
    cout << "\nSocio B: USD " << socioB;
    cout << "\nSocio C: USD " << socioC;
    return 0;
}
