#include <iostream>
#include <cmath>

using namespace std;

main()
{
    // 1.a
    int x, y;
    cout << "Masukkan nilai X = ";
    cin >> x;
    y = (5 * pow(x, 2)) + (2 * x) - 4;
    cout << "y = " << y;

    // 1.b
    /*int x, y;
    cout << "Masukkan nilai X = ";
    cin >> x;
    y = (((4 * x) + 2) / (x - 1)) + (3 * x);
    cout << "y = " << y;*/

    // 1.c
    /*float ppn = 0.11;
    float harga_barang, pajak;
    cout << "Masukkan Harga barang = ";
    cin >> harga_barang;
    pajak = (ppn * harga_barang) + harga_barang;
    cout << "Harga Setelah Pajak = " << pajak;*/

    // 2.a
    /*int i, j;
    for (i = 7; i >= 3; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/

    // 2.b
    /*int i, j;
    int nilai = 1;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << nilai << " ";
        }
        nilai += 2;
        cout << endl;
    }*/
}
