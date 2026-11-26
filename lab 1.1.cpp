#include <iostream>
#include <cmath>

using namespace std;

int task11() {
    double x, y, f;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    f = pow(2, -x) - cos(x) + sin(2 * x * y);

    cout << "Result: " << f << endl;

    return 0;
}
int task10() {

    double x, f;

    cout << "Enter x: ";
    cin >> x;

    if (x == M_PI) {
        cout << "Error: x cannot be equal to pi";
    }
    else {
        f = sqrt(abs(sin(x))) / (x - M_PI);

        cout << "Result: " << f << endl;
    }

    return 0;
}


int task9(){
double x, y, a, b;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    if (y == 0)
    {
        cout << "Error: y cant be 0";
    }
    else if (x * x - 4 * y * y * y <= 0)
    {
        cout << "Error: expression under the root is negative";
    }
    else
    {
        a = (x * x + sqrt(x * x - 4 * y * y * y)) / (2 * y);
        b = (x * x - sqrt(x * x - 4 * y * y * y)) / (2 * y);
    }
        cout << "Result (+): " << a << endl;
        cout << "Result (-): " << b << endl;
return 0;
} 

int task8 (){
    double a, b, c, p;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "Error: a cant be 0";
    }
    else if (b == 0)
    {
        cout << "Error: b cant be 0";
    }
    else if (b * b + 4 * a * c <= 0)
    {
        cout << "Error: expression under the root is negative";
    }
    else
    {
        p = (b + sqrt(b * b + 4 * a * c)) / (2 * a) - pow(a, 3) * c + pow(b, -2);
}
        cout << "Result: " << p << endl;
    

    return 0;
}

int task7()
{
    double x, result;

    cout << "Enter x: ";
    cin >> x;

    if (2 * x - 5 <= 0)
    {
        cout << "Error: expression under the root is negative";
    }
    else if (x * x + 4 * x - 5 == 0)
    {
        cout << "Error: denominator cant be 0";
    }
    else
    {
        result = sqrt(2 * x - 5) / (x * x + 4 * x - 5);

        cout << "Result: " << result << endl;
    }

    return 0;
}

int main()
{
    system ("cls");
    task11();
    task10();
    task9();
    task8();
    task7();
    
}
