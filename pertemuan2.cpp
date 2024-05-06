#include <iostream>

using namespace std;

main()
{
    int pilih;
    float bil1, bil2;

    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Masukkan Pilihan = ";
    cin >> pilih;

    if (pilih == 1)
    {
        cout << "Masukkan Bilangan 1 = ";
        cin >> bil1;
        cout << "Masukkan Bilangan 2 = ";
        cin >> bil2;
        cout << "Hasil Penjumlahan = " << bil1 + bil2;
    }
    else if (pilih == 2)
    {
        cout << "Masukkan Bilangan 1 = ";
        cin >> bil1;
        cout << "Masukkan Bilangan 2 = ";
        cin >> bil2;
        cout << "Hasil Pengurangan = " << bil1 - bil2;
    }
    else if (pilih == 3)
    {
        cout << "Masukkan Bilangan 1 = ";
        cin >> bil1;
        cout << "Masukkan Bilangan 2 = ";
        cin >> bil2;
        cout << "Hasil Perkalian = " << bil1 * bil2;
    }
    else if (pilih == 4)
    {
        cout << "Masukkan Bilangan 1 = ";
        cin >> bil1;
        cout << "Masukkan Bilangan 2 = ";
        cin >> bil2;
        cout << "Hasil Pembagian = " << bil1 / bil2;
    }
    else
    {
        cout << "Pilihan Tidak ada";
    }

    return 0;
}
