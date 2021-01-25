#include <iostream>
#include <stdarg.h>
using namespace std;

float mult(float a, ...) {
    va_list p;
    va_start(p, a);
    float m = 1;
    float k = a;
    do {
        m *= k;
    } while (k = va_arg(p, double));
    va_end(p);
    return m;
}

int main()
{
    cout << "mult(23.6, 45.2, 0.25) is " << mult(23.6f, 45.2f, 0.25f, 0.0f) << endl;
    cout << "mult(1.2, 5.6, 0.06, 45.8, 2.5, 10.8, 66.8) is " << mult(1.2f, 5.6f, 0.06f, 45.8f, 2.5f, 10.8f, 66.8f, 0.0f) << endl;
    float rez3 = mult(1.25f, 2.5f, 65.0f, 85.25f, 10.025f, 52.2f, 2.258f, 1.125f, 45.2f, 25.2f, 0.02f, 0.0f);
    cout << "mult(1.25, 2.5, 65.0, 85.25, 10.025, 52.2, 2.258, 1.125, 45.2, 25.2, 0.02) is " << rez3 << endl;
    system("pause");
    return 0;
}
