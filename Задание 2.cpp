#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int k;
    float p, a;
    cout << "Введите периметр и коэффициент K: ";
    cin >> p >> k;

    if (k < 0) {
        cout << "Неверное значение K." << endl;
        system("pause");
        return 1;
    }

    else {
        a = (p - k) / 3;

        if ((2 * a <= (a + k)) or ((2 * a + k) <= a)) {
            cout << "Треугольник не существует." << endl;
            system("pause");
            return 1;
        }

        else {
            cout << "Длина боковой стороны треугольника равнa " << a << endl;
            system("pause");
            return 0;
        }
    }

}

