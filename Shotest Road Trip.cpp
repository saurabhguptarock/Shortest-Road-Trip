#include <iostream>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();
    int x = 0, y = 0;
    while (ch != ' ')
    {
        switch (ch)
        {
        case 'N':
            y++;
            break;
        case 'E':
            x++;
            break;
        case 'S':
            y--;
            break;
        case 'W':
            x--;
            break;
        }
        ch = cin.get();
    }
    if (x >= 0 && y >= 0)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "E";
        }
        for (int i = 0; i < y; i++)
        {
            cout << "N";
        }
    }
    else if (x <= 0 && y >= 0)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "W";
        }
        for (int i = 0; i < y; i++)
        {
            cout << "N";
        }
    }
    else if (x <= 0 && y <= 0)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "W";
        }
        for (int i = 0; i < y; i++)
        {
            cout << "S";
        }
    }
    else if (x >= 0 && y <= 0)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "E";
        }
        for (int i = 0; i < y; i++)
        {
            cout << "S";
        }
    }
    else if (x == 0 && y == 0)
    {
        cout << "At Origin";
    }
}
