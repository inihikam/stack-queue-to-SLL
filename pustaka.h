#include <iostream>

using namespace std;

struct stack{
    string nama;
    int nilai;
    stack *next;
};

stack *head=NULL;
stack *tail=NULL;

int top = 1;
int maks = 5;

bool isFull(){
    if (top > maks){
        return true;
    } else {
        return false;
    }   
}

bool isEmpty(){
    if (top == 1){
        return true;
    } else {
        return false;
    }
}

void push(string data1, int data2){
    stack *baru;
    baru = new stack;
    baru->nama = data1;
    baru->nilai = data2;
    baru->next = NULL;

    if (isEmpty() == true){
        head = baru;
        tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
    
    top++;
    cout << "Hasil PUSH : " << data1 << " " << data2 << "\n";
}

void pop(){
    string data1;
    int data2;
    stack *hapus;
    stack *bantu;
    if (isEmpty() == true){
        cout << "Maaf tidak ada data !\n";
    } else {
        if (head == tail){
            hapus = head;
            data1 = hapus->nama;
            data2 = hapus->nilai;
            head = NULL;
            tail = NULL;
            cout << "Hasil POP : " << data1 << " " << data2 << "\n";
            delete hapus;
            top--;
        } else {
            hapus = head;
            // do{
            //     bantu = hapus;
            //     hapus = hapus->next;
            // } while (hapus->next != NULL);
            while (hapus->next != NULL){
                bantu = hapus;
                hapus = hapus->next;
            }
            
            bantu->next = NULL;
            tail = bantu;
            cout << "Hasil POP : " << hapus->nama << " " << hapus->nilai << "\n";
            delete hapus;
            top--;
        }
    }
}

void show(){
    if (isEmpty() == true){
        cout << "Maaf data kosong !\n";
    } else {
        stack *list;
        list = head;
        int i = 0;
        cout << "Data Stack :\n";
        while (list != NULL){
            cout << list->nama << " " << list->nilai << "\n";
            list = list->next;
            i++;
        }
    }
}