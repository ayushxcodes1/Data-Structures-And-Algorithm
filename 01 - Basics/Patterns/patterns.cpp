#include <bits/stdc++.h>

using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print3(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print4(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void print5(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print8(int n)
{
    for (int i = n; i > 0; i--)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void print9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void print10(int n)
{
    //Upper Half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //Lower Half
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if(i > n) stars = 2 * n - i; 
       
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    // print1(4);
    // print2(5);
    // print3(5);
    // print4(5);
    // print5(4);
    // print6(5);
    // print7(5);
    // print8(5);
    // print9(5);
    print11(5);
    return 0;
}
