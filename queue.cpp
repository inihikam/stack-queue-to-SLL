#include "data.h"

int main(){

    int pilih;
    string data1;
    int data2;
    do{
        cout << "MENU QUEUE\n";
        cout << "1. Inqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Tampil Data\n";
        cout << "4. Keluar\n";
        cout << "\nPilihan Anda [1-4] : ";
        cin >> pilih;
        if(pilih == 1){
            if(isFull()){
                cout << "Data Penuh\n";
            } else {
                cout << "Masukkan Nama :";
                cin >> data1;
                cout << "Masukkan Nilai :";
                cin >> data2;
                inqueue(data1, data2);
            }
        }
        if(pilih == 2){
            dequeue();
        }
        if(pilih == 3){
            show();
        }
    } while(pilih != 4);
    return 0;
}