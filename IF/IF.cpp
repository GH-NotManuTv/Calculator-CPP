#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    int scelta;
    int numero_1 = 0, numero_2 = 0, totale = 0;

    while (scelta != 5)
    {
        cout << "\n\tCalcolatrice\n\tScegli un Opzione: \n\t1) Addizione\n\t2) Sottrazione\n\t3) Moltiplicazione\n\t4) Divisione\n\t5) Chiudi la Calcolatrice\n\tScelta: ";
        cin >> scelta;
        Sleep(2000);
        system("cls");

        if (scelta == 1)
        {
            cout << "\n\tAddizione";
            cout << "\n\tInserisci il Primo numero: ";
            cin >> numero_1;

            cout << "\tInserisci il Secondo numero: ";
            cin >> numero_2;

            totale = numero_1 + numero_2;

            cout << "\n\tRiepilogo: \n\tPrimo Numero: " << numero_1 << "\n\tSecondo Numero: " << numero_2 << "\n\tSomma Fra i due numeri: " << totale;
            cout << "\n\tAuthor & Discord: Manu.#7073";
            Sleep(3000);
            system("cls");
        }

        else if (scelta == 2)
        {
            cout << "\n\tSottrazione";
            cout << "\n\tInserisci il Primo numero: ";
            cin >> numero_1;

            cout << "\tInserisci il Secondo numero: ";
            cin >> numero_2;

            totale = numero_1 - numero_2;

            cout << "\n\tRiepilogo: \n\tPrimo Numero: " << numero_1 << "\n\tSecondo Numero: " << numero_2 << "\n\tSottrazione Fra i due numeri: " << totale;
            cout << "\n\tAuthor & Discord: Manu.#7073";
            Sleep(3000);
            system("cls");
        }

        else if (scelta == 3)
        {
            cout << "\n\tMoltiplicazione";
            cout << "\n\tInserisci il Primo numero: ";
            cin >> numero_1;

            cout << "\tInserisci il Secondo numero: ";
            cin >> numero_2;

            totale = numero_1 * numero_2;

            cout << "\n\tRiepilogo: \n\tPrimo Numero: " << numero_1 << "\n\tSecondo Numero: " << numero_2 << "\n\tMoltiplicazione Fra i due numeri: " << totale;
            cout << "\n\tAuthor & Discord: Manu.#7073";
            Sleep(3000);
            system("cls");
        }
        else if (scelta == 4)
        {
            cout << "\n\tDivisione";
            cout << "\n\tInserisci il Primo numero: ";
            cin >> numero_1;

            cout << "\tInserisci il Secondo numero: ";
            cin >> numero_2;

            totale = numero_1 / numero_2;

            cout << "\n\tRiepilogo: \n\tPrimo Numero: " << numero_1 << "\n\tSecondo Numero: " << numero_2 << "\n\tDivisione Fra i due numeri: " << totale;
            cout << "\n\tAuthor & Discord: Manu.#7073";
            Sleep(3000);
            system("cls");
        }

        else if (scelta == 0 || scelta > 5)
        {
            cout << "\n\tScelta non valida";
            cout << "\n\tAuthor & Discord: Manu.#7073";
            Sleep(2000);
            system("cls");
        }
    }

    return 0;
}