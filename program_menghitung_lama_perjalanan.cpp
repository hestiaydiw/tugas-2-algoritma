// Program Menghitung Lama Waktu Perjalanan (Soal 2)
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
    cout << "Berangkat pukul = " <<J1<<":"<<M1<<":"<<D1<<"\n";
    
    //diketahui tiba di tujuan pukul 12:15:10
    J2 = 12;
    M2 = 15;
    D2 = 10;
    cout << "Tiba di tujuan pukul = " <<J2<<":"<<M2<<":"<<D2<<"\n";
    
    cout << "Lama perjalanan = ";
    //untuk menghitung lama perjalanan, maka waktu tiba dikurangi dengan waktu berangkat
    J3 = J2-J1;
    M3 = M2-M1;
    D3 = D2-D1;
    
    if (D3<60 && M3<60) //jika detik dan menit nilainya kurang dari 60, maka dihitung dengan rumus berikut
    {
        cout <<J3-1<<" Jam "; //jam dikurangi 1 karena telah diambil oleh perhitungan menit
        cout <<M3-1+60<<" Menit "; //menit dikurangi 1 karena telah diambil oleh perhitungan detik, ditambah dengan 60 yang diambil dari 1 jam karena M2<M1
        cout <<D3+60<<" Detik"; //detik ditambah dengan 60 yang diambil dari 1 menit karena D2<D1 
    }
}
    