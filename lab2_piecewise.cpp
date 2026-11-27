#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    const double a = 0.7;
    int choice;
    double x, y;

    do {
        cout << "\n--- МЕНЮ ---\n";
        cout << "1 - Обчислити значення функції\n";
        cout << "0 - Вийти з програми\n";
        cout << "Оберіть пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введіть значення x: ";
                cin >> x;

                if (x > 0) {
                    y = sqrt(pow(x, 3) / (x + a)) - log(x);
                } else if (x < 0) {
                    y = 2 * a * log(-x);
                } else {
                    y = 0;
                }

                cout << fixed << setprecision(4);
                cout << "Значення функції y = " << y << endl;
                break;

            case 0:
                cout << "Роботу програми завершено.\n";
                break;

            default:
                cout << "Помилка: такого пункту меню немає.\n";
        }

    } while (choice != 0);

    return 0;
}
