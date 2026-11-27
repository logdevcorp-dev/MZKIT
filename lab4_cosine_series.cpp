#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x, suma = 0.0, dodatok;
    int n;

    cout << "Обчислення суми ряду для варіанта 18\n";
    cout << "S = cos(2x)/3 + cos(4x)/15 + cos(6x)/35 + ...\n\n";

    cout << "Введіть значення x (у радіанах): ";
    cin >> x;

    cout << "Введіть кількість членів ряду n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Помилка: n має бути додатним числом.\n";
        return 1;
    }

    cout << fixed << setprecision(6);
    cout << "\n № ітерації\tСума\n";

    for (int i = 1; i <= n; i++) {
        dodatok = cos(2.0 * i * x) / ((2 * i - 1) * (2 * i + 1));
        suma += dodatok;

        cout << setw(6) << i << "\t\t" << suma << endl;
    }

    cout << "\nПідсумкова сума S = " << suma << endl;

    return 0;
}
