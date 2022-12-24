
// таблица умножения
/*
int leftOper{ 1 };
while (leftOper < 10)
{
    int rightOper{ 1 };
    while (rightOper < 10)
    {
        cout << leftOper << " * " << rightOper << " = " << leftOper * rightOper << "\n";
        rightOper++;
    }
    leftOper++;
    cout << "\n";
}
*/


// вывод прямоугольника
/*
int width, height;
cout << "input width: ";
cin >> width;
cout << "input height: ";
cin >> height;

int i{};
while (i < height)
{
    int j{};
    while (j < width)
    {
        cout << "*";
        j++;
    }
    cout << "\n";
    i++;
}
*/


// вывод треугольника
/*
int n;
cout << "input n: ";
cin >> n;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(i == j || i == n - j - 1 || i == n / 2 || j == n / 2)
            cout << "* ";
        else
            cout << "  ";
    }
    cout << "\n";
}
*/


// счастливые билетики
//1
/*
int lucky{};

for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        for (int k = 0; k < 10; k++)
        {
            for (int l = 0; l < 10; l++)
            {
                for (int m = 0; m < 10; m++)
                {
                    for (int n = 0; n < 10; n++)
                    {
                        if (i + j + k == l + m + n)
                            lucky++;
                    }
                }
            }
        }
    }
}
cout << lucky << "\n";


//2
lucky = 0;
for (int i = 0; i < 1000000; i++)
{
    int d1 = i % 10;

    if ((d1 + i / 10 % 10 + i / 100 % 10) == (i / 1000 % 10 + i / 10000 % 10 + i / 100000))
        lucky++;
}
cout << lucky << "\n";
*/
