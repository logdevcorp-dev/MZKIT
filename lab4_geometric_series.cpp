#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;

    cout << "Обчислення суми ряду S = 1/4 + 1/4^2 + 1/4^3 + ...\n";
    cout << "Введіть кількість членів ряду n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Помилка: кількість членів ряду має бути додатною.\n";
        return 1;
    }

    cout << fixed << setprecision(10);

    // Цикл for
    double sumaFor = 0.0;

    cout << "\nОбчислення за допомогою циклу for:\n";
    cout << "№ ітерації\tСума\n";

    for (int k = 1; k <= n; k++) {
        sumaFor += 1.0 / pow(4.0, k);
        cout << setw(6) << k << "\t\t" << sumaFor << endl;
    }

    cout << "Сума за допомогою for = " << sumaFor << endl;

    // Цикл while
    double sumaWhile = 0.0;
    int k = 1;

    cout << "\nОбчислення за допомогою циклу while:\n";
    cout << "№ ітерації\tСума\n";

    while (k <= n) {
        sumaWhile += 1.0 / pow(4.0, k);
        cout << setw(6) << k << "\t\t" << sumaWhile << endl;
        k++;
    }

    cout << "Сума за допомогою while = " << sumaWhile << endl;

    // Цикл do-while
    double sumaDoWhile = 0.0;
    k = 1;

    cout << "\nОбчислення за допомогою циклу do-while:\n";
    cout << "№ ітерації\tСума\n";

    do {
        sumaDoWhile += 1.0 / pow(4.0, k);
        cout << setw(6) << k << "\t\t" << sumaDoWhile << endl;
        k++;
    } while (k <= n);

    cout << "Сума за допомогою do-while = " << sumaDoWhile << endl;
return 0;
}

// The infinite series converges to 1/3.
