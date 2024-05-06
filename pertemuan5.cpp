#include <iostream>

using namespace std;

main()
{
    // Mendeklarasikan array dengan 4 elemen bertipe integer
    int angka[4] = {40, 20, 10, 30};

    // Mendeklarasikan array dengan 5 elemen bertipe double
    double harga[5] = {4.0, 4.5, 5.0, 3.0, 3.5};

    // Menampilkan array sesuai dengan indexnya
    cout << "Angka [0] = " << angka[0] << ", angka[1] = " << angka[1] << endl;
    cout << "Angka [2] = " << angka[2] << ", angka[3] = " << angka[3] << "\n\n";

    // Menampilkan semua element array pada variable harga
    for (int i = 0; i < 5; i++)
    {
        cout << harga[i] << " ";
    }

    return 0;
}

/*main()
{
    // Mendeklarasikan array dengan 10 elemen bertipe integer
    int array[10] = {30, 50, 70, 100, 80, 60, 40, 20, 90, 10};

    // Menghitung nilai tertinggi dan terendah
    int nilaiTertinggi = array[0];
    int nilaiTerendah = array[0];

    for (int i = 1; i < 10; i++)
    {
        if (array[i] > nilaiTertinggi)
        {
            nilaiTertinggi = array[i];
        }
        if (array[i] < nilaiTerendah)
        {
            nilaiTerendah = array[i];
        }
    }

    // Menampilkan nilai tertinggi dan terendah
    cout << "Nilai tertinggi: " << nilaiTertinggi << endl;
    cout << "Nilai terendah: " << nilaiTerendah << endl;

    return 0;
}*/
