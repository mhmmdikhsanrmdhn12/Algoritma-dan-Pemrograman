#include <iostream>

using namespace std;

main()
{
    int data[3][4] = {
        {10, 2, 4, 1},
        {11, 8, 6, 9},
        {12, 5, 3, 7}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << data[i][j];
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
