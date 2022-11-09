#include "pustaka.h"

int main()
{
    int pilih;
    string data1;
    int data2;
    do
    {
        cout<<"\nMENU STACK"<<endl;
        cout<<"1. Push Data"<<endl;
        cout<<"2. Pop Data"<<endl;
        cout<<"3. Tampil Data"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<endl<<"Pilihan anda [1-4] : ";
        cin>>pilih;
        if(pilih==1){
            if (isFull() == true){
                cout << "Maaf data penuh !\n";
            } else {
                cout << "Masukkan Nama :";
                cin >> data1;
                cout << "Masukkan Nilai :";
                cin >> data2;
                push(data1, data2);
            }
        }
        if(pilih==2){
            pop();   
        }
        if(pilih==3){
            show();
        }
    }
    while(pilih!=4);
    return 0;
}