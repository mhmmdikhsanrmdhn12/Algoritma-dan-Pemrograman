#include <iostream>
using namespace std;

main()
{
    int banyak_menu, pilihan, diskon, ppn,
        total_belanja, total_bayar;

    cout << "kode\t nama menu\t jenis menu\t harga satuan\n";
    cout << "1\t Iced Sundae\t Ice Cream\t Rp 16.000\n";
    cout << "2\t Iced Coffee\t Drink\t\t Rp 18.000\n";
    cout << "3\t Coffee\t\t Food\t\t Rp 22.000\n";

    cout << "Masukkan total menu yang ingin diinputkan = ";
    cin >> banyak_menu;

    int harga[banyak_menu];

    for (int i = 0; i < banyak_menu; i++)
    {
        cout << "Masukkan kode menu yang dipilih = ";
        cin >> pilihan;

        if (pilihan == 1)
        {
            harga[i] = 16000;
        }
        else if (pilihan == 2)
        {
            harga[i] = 18000;
        }
        else if (pilihan == 3)
        {
            harga[i] = 22000;
        }
        else
        {
            harga[i] = 0;
        }

        total_belanja += harga[i];
    }

    ppn = total_belanja * 0.11;

    if (total_belanja > 50000)
    {
        diskon = total_belanja * 0.15;
        total_bayar = diskon + ppn;
    }
    else
    {
        total_bayar = total_belanja + ppn;
    }

    cout << "Total yang harus di bayar = Rp " << total_bayar;

    return 0;
}
