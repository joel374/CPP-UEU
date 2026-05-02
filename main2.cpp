#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int baris;
    int kolom;
    cout << "Masukkan jumlah baris matriks = ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks = ";
    cin >> kolom;
    int matriks[baris][kolom];
    float jumlah = 0;
    float rata = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan nilai matriks ke " << i << "," << j << " = ";
            cin >> matriks[i][j];
            jumlah += matriks[i][j];
        }
    }
    
    rata = jumlah / (baris * kolom);
    cout << "Tampikan dari Array :" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "matriks[" << i << "][" << j << "] = " << matriks[i][j] << endl;
        }
    }
    cout << "Jumlah semua nilai matriks = " << jumlah << endl;
    cout << "Rata-rata nilai matriks = " << rata << endl;
    return 0;
}
