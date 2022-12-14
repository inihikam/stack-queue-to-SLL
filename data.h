#include <iostream>

using namespace std;

struct queue{
    string nama;
    int nilai;
    queue *next;
};

queue *head=NULL;
queue *tail=NULL;

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

void inqueue(string data1, int data2){
    queue *baru;
    baru = new queue;
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
    cout << "Hasil Inqueue : " << data1 << " " << data2 << "\n";
}

void dequeue(){
    string data1;
    int data2;
    queue *hapus;
    queue *bantu;
    if (isEmpty() == true){
        cout << "Maaf tidak ada data !\n";
    } else {
        if (head == tail){
            hapus = head;
            data1 = hapus->nama;
            data2 = hapus->nilai;
            head = NULL;
            tail = NULL;
            cout << "Hasil Dequeue : " << data1 << " " << data2 << "\n";
            delete hapus;
            top--;
        } else {
            hapus = head;
            head = hapus->next;
            hapus->next = NULL;
            data1 = hapus->nama;
            data2 = hapus->nilai;
            cout << "Hasil Dequeue : " << data1 << " " << data2 << "\n";
            delete hapus;
            top--;
        }
    }
}

void show(){
    if (isEmpty() == true){
        cout << "Maaf data kosong !\n";
    } else {
        queue *list;
        list = head;
        int i = 0;
        cout << "Data queue :\n";
        while (list != NULL){
            cout << list->nama << " " << list->nilai << "\n";
            list = list->next;
            i++;
        }
    }
}