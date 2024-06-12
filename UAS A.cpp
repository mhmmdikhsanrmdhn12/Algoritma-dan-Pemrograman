#include <iostream>
#include <math.h>

using namespace std;

string bmi(float bmi)
{
    string keterangan;
    if (bmi < 18.5)
    {
        keterangan = "Kurus";
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        keterangan = "Normal";
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        keterangan = "Gemuk";
    }
    else
    {
        keterangan = "Obesitas";
    }

    return keterangan;
}

int umur_pasien(int tahun_lahir)
{
    int umur_pasien;
    umur_pasien = 2024 - tahun_lahir;
    return umur_pasien;
}

main()
{
    int banyak_data;
    cout << "Berapa data yang akan diinputkan : ";
    cin >> banyak_data;

    int tahun_lahir[banyak_data];
    float bb[banyak_data], tb[banyak_data];
    string nama_pasien[banyak_data], riwayat_penyakit[banyak_data];

    for (int i = 0; i < banyak_data; i++)
    {
        cout << "Data pasien " << i + 1 << endl;
        cout << "Masukkan nama pasien : ";
        cin >> nama_pasien[i];
        cout << "Masukkan riwayat penyakit pasien : ";
        cin >> riwayat_penyakit[i];
        cout << "Masukkan tahun lahir pasien : ";
        cin >> tahun_lahir[i];
        cout << "Masukkan berat badan pasien : ";
        cin >> bb[i];
        cout << "Masukkan tinggi badan pasien : ";
        cin >> tb[i];
        cout << "\n";
    }

    float m[banyak_data], body[banyak_data];

    for (int j = 0; j < banyak_data; j++)
    {
        cout << "========== Rekam Medis Pasien-" << j + 1 << " ==========\n";
        cout << "Nama Pasien : " << nama_pasien[j] << endl;
        cout << "Tahun Lahir : " << tahun_lahir[j] << endl;
        cout << "Umur Pasien : " << umur_pasien(tahun_lahir[j]) << endl;
        cout << "Riwayat Sakit : " << riwayat_penyakit[j] << endl;
        cout << "Pasien memiliki berat badan " << bb[j] << " kg dan tinggi " << tb[j] << " cm\n";
        m[j] = tb[j] / 100;
        body[j] = bb[j] / pow(m[j], 2);
        cout << "Angka BMI Pasien adalah " << body[j] << " dengan status " << bmi(body[j]) << endl;
    }

    return 0;
}