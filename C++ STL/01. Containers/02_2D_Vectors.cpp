#include <bits/stdc++.h>
using namespace std;

int main()
{
    //----- 2D vector-----------

    // vector<vector<int>> arr(rows, vector<int>(columns, initial_value));
    // The outer vector (vector<vector<int>>) stores multiple inner vectors.
    // Each inner vector (vector<int>) stores integer elements.
    // Each inner vector represents one row.

    vector<vector<int>> arr(4, vector<int>(4, 0));

    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 3},
    };

    cout << v[0][0] << endl;
    cout << v[1][2] << endl;
    cout << v[2][1] << endl;

    for (auto row : arr)
    {
        for (auto element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    for (auto row = v.begin(); row != v.end(); row++)
    {

        for (auto col = row->begin(); col != row->end(); col++)
        {
            cout << *col << " ";
        }

        cout << endl;
    }

    vector<vector<int>> brr(5, vector<int>(5, 0));
    int totalRows = brr.size();
    int totalCols = brr[0].size();

    cout << "No. of rows in 2D vector brr : " << totalRows << endl;

    cout << "No. of col in 2D vector brr : " << totalCols << endl;

    // A jagged vector (also called a jagged 2D vector) is a 2D vector in which each row can have a different number of columns (elements).

    vector<vector<int>> box = {
        {1, 2, 3, 4},
        {4, 2},
        {6, 8, 1}};

    vector<vector<int>> b(4);
    b[0] = vector<int>(4);
    b[1] = vector<int>(2);
    b[2] = vector<int>(5);
    b[3] = vector<int>(3);

    int totalRowCnt = b.size();
    for (int i = 0; i < totalRowCnt; i++)
    {
        cout << "Total col in " << i << " row : " << b[i].size() << endl;
    }

    vector<vector<int>> c(3, vector<int>(2));

    for (int i = 0; i < c.size(); i++)
    {

        for (int j = 0; j < c[i].size(); j++)
        {
            cin >> c[i][j];
        }
    }

    for (int i = 0; i < c.size(); i++)
    {

        for (int j = 0; j < c[i].size(); j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    
    vector<vector<int>> d = {
        vector<int>(3),
        vector<int>(2),
        vector<int>(6),
    };


    return 0;
}