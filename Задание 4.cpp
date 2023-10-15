#include <cmath>
#include <iostream>

using namespace std;


int main()
{
    float a, x, y, c;
    cin >> a >> x;
    c = a * x;

    if ((c >= -10 and c <= -7) or (c >= 0 and c <= 5.4)) {
        y = sqrt(sin(pow(a, 2) * x));
        cout << "Y = " << y << endl;
    }

    else if (c > -7 and c < 0) {
        y = a * sqrt(cos(pow(x, 3)));
        cout << "Y = " << y << endl;
    }

    else if (c < 10 or c > 7) {
        y = a + log(abs(c));
        cout << "Y = " << y << endl;
    }

    system("pause");
    return 0;
}
