#include <iostream>

using namespace std;

struct Mahasiswa{
    char NIM[12];
    char Nama[50];
    float IPK;
    string noHP;
    int Umur;
};


int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa = ";
    cin >> n;
    Mahasiswa mhs[n];

    for (int i = 0; i < n; i++) {
        // Input-an
        cout << "Data Mahasiswa " << i + 1 << endl;
        cout << "Masukkan NIM = ";
        cin >> mhs[i].NIM;
        cout << "Masukkan Nama = ";
        cin >> mhs[i].Nama;
        cout << "Masukkan IPK = ";
        cin >> mhs[i].IPK;
        cout << "Masukkan No. HP = ";
        cin >> mhs[i].noHP;
        cout << "Masukkan Umur = ";
        cin >> mhs[i].Umur;
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        // Output-an
        cout << "Data Mahasiswa " << i + 1 << endl;
        cout << "NIM = " << mhs[i].NIM << endl;
        cout << "Nama = " << mhs[i].Nama << endl;
        cout << "IPK = " << mhs[i].IPK << endl;
        cout << "No. HP = " << mhs[i].noHP << endl;
        cout << "Umur = " << mhs[i].Umur << endl;
        cout << endl;
    }

    return 0;
}

// g++ day3.cpp -o day3 && ./day3