//Data Structure Course
//All Codes Are Written by Krishna
//Matrix

#include <bits/stdc++.h>
using namespace std;

//matrix structure
struct Matrix
{
    int A[10];
    int n;
};

//set function
void Set(struct Matrix *m, int i, int j, int x)
{
    if (i == j)
    {
        m->A[i - 1] = x;
    }
}

//function for getting value

int get(struct Matrix m, int i, int j)
{
    if (i == j)
    {
        return m.A[i - 1];
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
            if (i == j)
            {
                cout << m.A[i-1] << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    struct Matrix m;
    m.n = 4;
    Set(&m , 1 ,1 ,11);
    Set(&m , 2 ,2 ,17);
    Set(&m , 3 ,3 ,19);
    Set(&m , 4 ,4 ,23);
    display(m);
    cout << get(m,1,1) << endl;
    cout << get(m,3,3) << endl;
    cout << get(m,3,2) << endl;
    return 0;
}