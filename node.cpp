#include <iostream> 
#include <conio.h> 
#include <stdio.h>
using namespace std;

struct TNode { //Deklarasi Linked List
int data;   //data bertipe integer
TNode *next;
};  //penutup deklarasi
TNode *head, *tail;  //gunakan head sebagai pointer utama dari linked list

void init(){  // inisialisasi awal linked list
head = NULL;
tail = NULL;  //Untuk pertama kali, head bernilai NULL
}

int isEmpty(){  //Fungsi mengetahui apakah Linked list kosong atau ada isinya
if(tail == NULL) return 1;
else return 0;
}
void insertDepan(int databaru){
TNode *baru;
baru = new TNode;
baru->data = databaru;
baru->next = NULL;
if(isEmpty()==1){
head=tail=baru;
tail->next=NULL;
}
else {
baru->next = head;
head = baru;
}
printf("Data masuk\n");
}

void tambahTengah(int databaru){
TNode *baru,*bantu;
baru = new TNode;
baru->data = databaru;
baru->next = NULL;
if(isEmpty()==1){
head=baru;
tail=baru;
tail->next = NULL;
}
else {
tail->next = baru;
tail=baru;
}
printf("Data masuk\n");
}


void tambahBelakang(int databaru){
TNode *baru,*bantu;
baru = new TNode;
baru->data = databaru;
baru->next = NULL;
if(isEmpty()==1){
head=baru;
tail=baru;
tail->next = NULL;
}
  
else {
tail->next = baru;
tail=baru;
}
printf("Data masuk\n");
}
