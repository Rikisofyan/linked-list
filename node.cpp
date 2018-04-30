#include <iostream> 
#include <conio.h> 
#include <stdio.h>
using namespace std;

struct TNode {
int data;  
TNode *next;
};  //penutup deklarasi
TNode *head, *tail; 

void init(){  
head = NULL;
tail = NULL; 
}

int isEmpty(){  
if(tail == NULL) return 1;
else return 0;
}
void inputDepan(int databaru){
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
void hapusDepan(){
TNode *hapus;
int d;
if (isEmpty()==0){
if(head!=tail){
hapus = head;
d = hapus->data;
head = head->next;
delete hapus;
} else {
d = tail->data;
head=tail=NULL;
}
printf("%d terhapus\n",d);
} else printf("Masih kosong\n");
}

void hapusTengah(){
TNode *bantu,*hapus;
int d;
if (isEmpty()==0){
if(head!=tail){
hapus = bantu;
d = hapus->data;
head = head->next;
delete hapus;
} else {
d = tail->data;
head=tail=NULL;
}
printf("%d terhapus\n",d);
} else printf("Masih kosong\n");
}

void hapusBelakang(){
TNode *bantu,*hapus;
int d;
if (isEmpty()==0){
bantu = head;
if(head!=tail){
while(bantu->next!=tail){
bantu = bantu->next;
}
hapus = tail;
tail=bantu;
d = hapus->data;
delete hapus;
tail->next = NULL;
}else {
d = tail->data;
head=tail=NULL;
}
cout<<d<<" terhapus\n";
} else cout<<"Masih kosong\n";
}

void clear()
{
TNode *bantu,*hapus;
bantu = head;
while(bantu!=NULL)
{
hapus = bantu;
bantu = bantu->next;
delete hapus;
}
head = NULL;
tail = NULL;
}
void tampil(){  
TNode *bantu;  
bantu=head;  
if(isEmpty()==0){ 
while(bantu!=NULL){ 
cout<<bantu->data<<endl; 
bantu=bantu->next;  
}
}
else
cout<<"Masih Kosong"<<endl;
}
int main(){  
int pil;
int clrscr();
do{
clrscr();
int n;
cout<<"1.input Depan"<<endl;
cout<<"2.input Tengah"<<endl;
cout<<"3.input Belakang"<<endl;
cout<<"4.Display"<<endl;
cout<<"5.Hapus Depan"<<endl;
cout<<"6.Hapus Tengah"<<endl;
cout<<"7.Hapus Belakang"<<endl;
cout<<"8.Hapus Semua"<<endl;
cout<<"9.Exit"<<endl;
cout<<"Masukan Pilihan Anda :";pil=getch();
switch(pil){
case '1' : clrscr();
cout<<"Masukan data :";cin>>n;
isEmpty();
inputDepan(n);
break;
case '2': clrscr();
cout<<"input data :";cin>>n;
isEmpty();
tambahBelakang(n);
break;
case '3': clrscr();
cout<<"input data :";cin>>n;
isEmpty();
tambahBelakang(n);
break;
case '4': clrscr();
isEmpty();
tampil();
break;
