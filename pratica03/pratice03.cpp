#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    float x = 5.5, y = 10.15, z = 30.7;

    cout << "Before : x = " << x << " y = " << y << endl;
    change(x, y);
    cout << "After : x = " << x << " y = " << y << endl;
    cout << "Min between " << x << " e " << y << ": " << min(x, y) << endl;
    cout << "Max between " << y << " e " << z << ": " << max(y, z) << endl;
}