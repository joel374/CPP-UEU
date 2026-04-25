#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int nilai[5];
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }
    
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i + 1 << ":" << nilai[i] << endl;
    }

    cout << "Kalo di balik begini nih" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << "Nilai ke-" << i + 1 << ":" << nilai[i] << endl;
    }
    
    return 0;
}
