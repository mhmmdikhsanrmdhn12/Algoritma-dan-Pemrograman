#include <iostream>

using namespace std;

void luas_layang(int d1, int d2)
{
    int luas = 0.5 * d1 * d2;
    cout << "Diagonal 1 = " << d1 << endl;
    cout << "Diagonal 2 = " << d2 << endl;
    cout << "Luas layang-layang = " << luas;
}

main()
{
    int diagonal1, diagoanl2;

    cout << "Masukkan diagonal 1 = ";
    cin >> diagonal1;

    cout << "Masukkan diagoanl 2 = ";
    cin >> diagoanl2;

    luas_layang(diagonal1, diagoanl2);

    return 0;
}
