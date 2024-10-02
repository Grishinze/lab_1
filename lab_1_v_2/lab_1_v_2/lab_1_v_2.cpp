#include <iostream>
using std::cin;
using std::cout;

bool trY(double x, double y)
{
    if (x <= 3 && y <= 4 && y <= 4 - (4.0 / 3.0) * x)
    {
        if (x >= 0 && y >= 0)
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "");
    double x, y;

    bool isHuman = false;
    if (argc <= 1 || strcmp(argv[1], "false") != 0)
    {
        isHuman = true;
    }

    if (isHuman)
    {
        cout << "Привествую в моей новой программе по угадыванию попал в триУгольник или нет" << "\n";
        cout << "Введите числа х и y" << "\n";
    }

    while (true)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            break;
        }
        if (trY(x,y))
        {
            if (isHuman)
            {
                cout << "ДА, ты попал в триУгольник" << "\n";
            }
            else
            {
                cout << "YES" << "\n";
            }
        }
        else 
        {
            if (isHuman)
            {
                cout << "Нет, не попал..." << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }
}

