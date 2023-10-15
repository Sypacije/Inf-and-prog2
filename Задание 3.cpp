#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float x, y, s;
    cin >> x >> y;
    s = pow(x, 2) + pow(y, 2);
    if ((x < 0 and y < 0 and s < 1) or (0.2 > x > 0 and y < 0 and s < 1)) {
        cout << "Точка M(" << x << "," << y << ") лежит в заштрихованной области." << endl;
    }

    else if ((y == 0 and x >= (-1) and x < 0.2) or (y < 0 and x == 0.2 and s == 1) or (x >= (-1) and x < 0.2 and y < 0 and s == 1)) {
        cout << "Точка M(" << x << "," << y << ") лежит на границе заштрихованной области." << endl;
    }

    else {
        cout << "Точка M(" << x << "," << y << ") лежит вне заштрихованной области." << endl;
    }

    system("pause");
    return 0;
}