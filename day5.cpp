#include <iostream>
using namespace std;

int main() {
    int data[10] = {9, 2, 5, 6, 3, 7, 12, 25, 21, 13};
    int n = 10, temp;
    // n = sizeof(data)/sizeof(data[0]);
    
    // cout<<n<<endl;
    cout<<"Sebelum di sort"<<endl;
    for(int i = 0; i < n; i++) {
        cout<<data[i]<< " ";
    }
    cout<<endl<<"Bubble sort"<<endl
    <<"============"<<endl;
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(data[j] > data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        
        }
        cout<<"Step ke-" << i + 1 << ": ";
        for(int index = 0; index < n; index++) {
            cout<<data[index]<< " ";
        }
        cout<<endl;
    }

    cout<<"Tampilkan hasil"<<endl;
    for(int i = 0; i < n; i++) {
        cout<<data[i]<< " ";
    }
    cout<<endl;

    return 0;
}

// g++ day3.cpp -o day3 && ./day3