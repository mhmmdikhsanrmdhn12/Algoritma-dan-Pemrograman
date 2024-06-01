#include <iostream>

using namespace std;

int luas_persegi_panjang(int p, int l);

main()
{
    int panjang, lebar, luas;

    cout << "Masukkan nilai panjang = ";
    cin >> panjang;

    cout << "Masukkan nilai lebar = ";
    cin >> lebar;

    luas = luas_persegi_panjang(panjang, lebar);

    cout << "Luas persegi panjang = " << luas;

    return 0;
}

int luas_persegi_panjang(int p, int l)
{
    int luas = p * l;
    cout << "Panjang = " << p << endl;
    cout << "Lebar = " << l << endl;
    return luas;
}
