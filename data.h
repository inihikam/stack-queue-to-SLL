#include <iostream>

using namespace std;

struct queue{
    string nama;
    int nilai;
    queue *next;
};

queue *head, *tail;

int top = 1;
int max = 5;

bool isFull(){
    if(top > max){
        return true;
    } else {
        return false;
    }
}

bool isEmpty(){
    if(top == 1){
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
    if(head == tail){
        head == baru;
        tail == baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

void dequeue(){
    queue *hapus;
    if(isEmpty()){
        cout << "Data Kosong\n";
    } else {
        if(head == tail){
            hapus = head;
            head = NULL;
            tail = NULL;
            delete hapus;
        } else {
            hapus = head;
            head = head->next;
            hapus->next = NULL;
            delete hapus;
        }
    }
}

void show(){
    queue *list;
    list = head;
    if(isEmpty()){
        cout << "Maaf data kosong";
    } else {
        while(list->next != NULL){
            cout << list->nama << " " << list->nilai << "\n";
            list = list->next;
        }
    }
}