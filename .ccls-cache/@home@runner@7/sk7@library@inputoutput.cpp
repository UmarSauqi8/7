#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Inputoutput{
    public:
           void input();
           void output();

    private:
    int n,i,j,a,k,m;
};

struct data{
char nama[30];
char nim[10];
char prodi[20];
char no[15];};
data mhs[10];

void Inputoutput::input(){
 cout<<"Jumlah data : ";
  cin>>n;
  
   for (i=0; i<n; i++){
      cout<<"\nData ke-"<<i+1<<endl;
      cout<<"  NIM   : ";
      cin>>mhs[i].nim;
      cout<<"  Nama  : "; 
      cin>>mhs[i].nama;
      cout<<"  Prodi : "; 
      cin>>mhs[i].prodi;
      cout<<"  No.HP : ";
      cin>>mhs[i].no;
     
   }
  cout<<endl;
  }

void Inputoutput::output(){
   cout<<"                 DATA MAHASISWA            \n";
   cout<<"+========================================================+\n";
   cout<<"| No |    NIM     |    NAMA    | PRODI |    NO TELP      |\n";
   cout<<"|--------------------------------------------------------|\n";
  
   for(i=0; i<n; i++){
  cout<<" | "<<i+1<<" | "<<mhs[i].nim<<" | "<<mhs[i].nama<<" | "<<mhs[i].prodi<<" | "<<mhs[i].no<<" | "<<endl;
   }
   cout<<"+======================================+\n";
}