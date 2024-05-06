#include <iostream>
using namespace std;

main()
{
    float a;
    float t;

    cout << "Masukkan alas = ";
    cin >> a;
    cout << "Masukkan tinggi = ";
    cin >> t;

    float luas = 0.5 * a * t;
    cout << "luas segitiga = " << luas;
}
