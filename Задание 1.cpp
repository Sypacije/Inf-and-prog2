
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string f;
    int x1, y1, x2, y2;

    cout << "Выберите наподающую фигуру: \nP.S. используйте буквенные обозначения: k - король, q - ферзь, b - слон, kn - конь, r - ладья, p - пешка" << endl;
    cin >> f;

    if (f != "k" and f != "q" and f != "b" and f != "kn" and f != "r" and f != "p") {
        cout << "Некорректная фигура." << endl;
        system("pause");
        return 1;
    }

    cout << "Введите координаты наподающей фигуры и фигуры, которая находится под ударом в формате x1, y1, x2, y2: \nP.S. координаты должны лежать в диапазоне от 1 до 8. Координаты не могут совпадать." << endl;
    cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 > 8 or x1 < 1) or (y1 > 8 or y1 < 1) or (x2 > 8 or x2 < 1) or (y2 > 8 or y2 < 1) or (x1 == x2 and y1 == y2)) {
        cout << "Некорректные значения координат." << endl;
        system("pause");
        return 1;
    }

    
    if (f == "p") {
        if (((x2 == x1 + 1) or (x2 == x1 - 1)) and y2 == y1 + 1) {
            cout << "YES" << endl;
        }

        else {
            cout << "NO" << endl;
        }
    }
  
    else if (f == "k") {
        if ((x2 == x1 + 1 or x2 == x1 - 1 or x1 == x2) and (y1 == y2 or y2 == y1 + 1 or y2 == y1 - 1)) {
            cout << ("YES") << endl;
        }

        else {
            cout << ("NO") << endl;
        }
    }

    else if (f == "kn") {
        if (((x2 == x1 + 2 or x2 == x1 - 2) and (y2 == y1 + 1 or y2 == y1 - 1)) or ((x2 == x1 + 1 or x2 == x1 - 1) and (y2 == y1 + 2 or y2 == y1 - 2))) {
            cout << ("YES") << endl;
        }

        else {
            cout << ("NO") << endl;
        }
    }

    else if (f == "b") {
        if ((x1 + y1 == x2 + y2) or (x1 - y1 == x2 - y2)) {
            cout << ("YES") << endl;
        }

        else {
            cout << ("NO") << endl;
        }
    }

    else if (f == "r") {
        if ((x1 == x2) or (y1 == y2)) {
            cout << ("YES") << endl;
        }

        else {
            cout << ("NO") << endl;
        }
    }

    else if (f == "q") {
        if (((x1 == x2) or (y1 == y2)) or ((x1 + y1 == x2 + y2) or (x1 - y1 == x2 - y2))) {
            cout << ("YES") << endl;
        }

        else {
            cout << ("NO") << endl;
        }
    }

    system("pause");
    return 0;
}

