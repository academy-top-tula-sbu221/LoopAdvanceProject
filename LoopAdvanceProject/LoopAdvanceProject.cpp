#include <iostream>

using namespace std;

void printStars(int count = 20)
{
    for (int i = 0; i < count; i++)
        cout << "*";
    cout << "\n";
}

void printChars(int count = 20, char symbol = '*')
{
    for (int i = 0; i < count; i++)
        cout << symbol;
    cout << "\n";
}

int amount(int n)
{
    int sum{};
    for (int i = 1; i <= n; i++)
        sum += i; // sum = sum + i;

    return sum;
}

double power(double x, int n)
{
    double power{ 1 };
    for (int i = 0; i < n; i++)
        power *= x; // power = power * x;

    return power;
}

int main()
{
    printStars();
    cout << "input radius: ";
    double radius;
    cin >> radius;
    printChars(20, '=');
    cout << "square of circle = " << power(radius, 2) * 3.1415 << "\n";
    printStars();
    
    
    return 0;
}
