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
