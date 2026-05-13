#include <iostream>
using namespace std;

int main()
{

    int opcion;
    float ISSS, AFP, Renta, ValorRenta, salario, descuento, neto;

    do
    {

        cout << "Bienvenido al sistema, digite una opcion: " << endl;
        cout << "1: Calcular salario neto" << endl;
        cout << "2: Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {

        case 1:
            cout << "Digite el salario bruto: " << endl;
            cin >> salario;
            if (salario <= 0)
            {
                cout << "Error, digite un salario bruto valido: " << endl;
                break;
            }

            cout << "Salario bruto: " << salario << endl;
            ISSS = salario * 0.03;
            if (ISSS > 30)
            {
                ISSS = 30;
            }
            cout << "ISSS: " << ISSS << endl;
            AFP = salario * 0.0725;
            cout << "AFP: " << AFP << endl;
            ValorRenta = salario - ISSS - AFP;
            if (ValorRenta >= 0.01 && ValorRenta <= 550.00)
            {
                Renta = 0.00;
                cout << "Renta: " << Renta << endl;
            }
            else if (ValorRenta >= 550.01 && ValorRenta <= 895.24)
            {
                Renta = ((ValorRenta - 550.00) * 0.10) + 17.67;
                cout << "Renta: " << Renta << endl;
            }
            else if (ValorRenta >= 895.25 && ValorRenta <= 2038.10)
            {
                Renta = ((ValorRenta - 895.24) * 0.20) + 60.00;
                cout << "Renta: " << Renta << endl;
            }
            else if (ValorRenta > 2038.10)
            {
                Renta = ((ValorRenta - 2038.10) * 0.30) + 288.57;
                cout << "Renta: " << Renta << endl;
            }
            else
            {
                cout << "Dato erroneo" << endl;
            }
            descuento = ISSS + AFP + Renta;
            cout << "Total de descuentos: " << descuento << endl;
            neto = salario - descuento;
            cout << "Salario neto: " << neto << endl;
            break;
        case 2:
            break;
        default:
            cout << "opcion invalida, digite una opcion correcta: " << endl;
            break;
        }
    } while (opcion < 2 && opcion > 2);
    cout << "Hasta luego." << endl;

    return 0;
}