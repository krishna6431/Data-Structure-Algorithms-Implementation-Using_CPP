//Data Structure Course
//All Codes Are Written by Krishna
//Matrix

#include <bits/stdc++.h>
using namespace std;

//matrix structure
struct Matrix
{
    int *A;
    int n;
};

//set function
void Set(struct Matrix *m, int i, int j, int x)
{
    if (i >= j)
    {
        m->A[i * (i - 1) / 2 + j - 1] = x;
    }
}

//function for getting value

int get(struct Matrix m, int i, int j)
{
    if (i >= j)
    {
        return m.A[i * (i - 1) / 2 + j - 1];
    }
    else
    {
        return 0;
    }
}

//function for displaying
void display(struct Matrix m)
{
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            if (i >= j)
            {
                cout << m.A[i * (i - 1) / 2 + j - 1] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    struct Matrix m;
    int i, j, x;
    cout << "Enter the Dimensions: " << endl;
    cin >> m.n;
    int size = (m.n) * (m.n + 1) / 2;
    m.A = new int[size];
    cout << "Enter Elements: " << endl;
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {

            int x;
            cin >> x;
            Set(&m, i, j, x);
        }
    }
    display(m);
}