// Program Menghitung Pukul Berapa Sampai Tujuan (soal 1)
// Hesti Widya Ningsih
// 2211600958

#include <iostream>
using namespace std;
int main()
{
    int J1, M1, D1, J2, M2, D2, J3, M3, D3;
    
    //diketahui berangkat pukul 08:52:45
    J1 = 8;
    M1 = 52;
    D1 = 45;
    cout << "Berangkat Pukul = " <<J1<<":"<<M1<<":"<<D1<<"\n";
    
    //diketahui lama perjalanan adalah 5000 detik
    cout << "Lama Perjalanan = 5000 Detik atau ";
    //koonversikan detik ke dalam format jam:menit:detik
    J2 = 5000/3600;
    M2 = (5000 % 3600)/60;
    D2 = (5000%60);
    cout << J2<<" Jam "<<M2<< " Menit " <<D2<< " Detik \n";
    
    cout << "Tiba di Tujuan Pukul = ";
    //untuk menghitung pukul berapa tiba di tujuan, dihitung dengan menjumlahkan waktu berangkat dengan lama waktu perjalanan
    J3 = J1 + J2;
    M3 = M1 + M2;
    D3 = D1 + D2;
    
    if (D3>60 && M3>60) //jika detik dan menitnya melebihi 60, maka dihitung dengan rumus berikut
    {
        cout <<J3+1<<":"; //jam ditambahkan 1 karena perhitungan M3 yang sudah melebihi 60 menit
        cout <<M3+1-60<<":"; //menit ditambahkan 1 karena perhitungan D3 yang melebihi 60 detik, lalu dikurang 60 karena nilai M3>60 menit (1 jam nilainya 60 menit jika melebihi maka masuk waktu ke jam)
        cout <<D3-60; //detik dikurangi 60 karena D3>60 detik (1 menit nilainya 60 detik jika melebihi maka masuk waktu ke menit)
    }
}