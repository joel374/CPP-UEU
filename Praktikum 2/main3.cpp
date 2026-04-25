#include <iostream>

using namespace std;

int main()
{
    int nilai[10] = {1,2,3,4,5, 6, 7, 8, 9, 10};
    int jumlah = 0;
    for (int i = 0; i < 10; i++) {
        jumlah += nilai[i];
    }
    
    for (int i = 0; i < 10; i++) {
        cout << "Nilai ke-" << i + 1 << ":" << nilai[i] << endl;
    }

    cout << "Kalo di balik begini nih" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << "Nilai ke-" << i + 1 << ":" << nilai[i] << endl;
    }
    
    return 0;
}


// g++ main3.cpp -o main3 && ./main3.exe