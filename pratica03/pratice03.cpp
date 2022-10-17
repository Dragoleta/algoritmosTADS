#include <iostream>
#include "functions.h"
#include "array.h"

#include <cstring>

using namespace std;

int main()
{
    float x = 5.5, y = 10.15, z = 30.7;

    cout << "Before : x = " << x << " y = " << y << endl;
    functions::change(x, y);
    cout << "After : x = " << x << " y = " << y << endl;
    cout << "Min between " << x << " e " << y << ": " << min("strA", "strB") << endl;
    cout << "Max between " << y << " e " << z << ": " << max(y, z) << endl;

    Array<int> arr(10);
    arr.set(4, 5);
    arr.set(7, 15);
    arr.set(8, 22);
    arr.print();
}