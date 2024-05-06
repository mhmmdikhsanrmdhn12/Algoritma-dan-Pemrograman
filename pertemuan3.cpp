#include <iostream>
using namespace std;

main()
{
    int umur;
    char jenis_kelamin;

    cout << "Masukkan umur Anda: ";
    cin >> umur;

    if (umur >= 18)
    {
        cout << "Apakah Anda laki-laki atau perempuan? (L/P): ";
        cin >> jenis_kelamin;

        if (jenis_kelamin == 'L')
        {
            cout << "Selamat datang, Pak!" << endl;
        }
        else if (jenis_kelamin == 'P')
        {
            cout << "Selamat datang, Bu!" << endl;
        }
        else
        {
            cout << "Jenis kelamin tidak valid." << endl;
        }
    }
    else
    {
        cout << "Maaf, Anda belum cukup umur untuk masuk." << endl;
    }

    return 0;
}

/*main()
{
    int i = 1;
    cout << "Mencetak angka dari 1 hingga 10 menggunakan for:" << endl;
    for (i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    int j = 1;
    cout << endl
         << endl;
    cout << "Mencetak angka dari 1 hingga 10 menggunakan while-do:" << endl;
    while (j <= 10)
    {
        cout << j << " ";
        j++;
    }

    int k = 1;
    cout << endl
         << endl;
    cout << "Mencetak angka dari 1 hingga 10 menggunakan do-while:" << endl;
    do
    {
        cout << k << " ";
        k++;
    } while (k <= 10);

    return 0;
}*/
