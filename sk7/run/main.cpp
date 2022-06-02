#include <iostream>
using namespace std;

class sort{

public :
    void input();
    void pengurutan();
    void pencarian();

private:
int jmlhHewan, pilih;
string hewan[30];
string hwnpilih;
char karakter;

};


void sort::input() {
  cout<<"Masukkan jumlah hewan : ";
  cin>>jmlhHewan;
  
  for (int i=0; i<jmlhHewan; i++) {
    cout<<"Input hewan ke-"<<i+1<<" : ";
    cin>>hewan[i];
  }
  cout<<endl;
  cout<<"Sebelum diurutkan."<<endl;
 
  for (int i=0; i<jmlhHewan; i++) {
    cout<<"Hewan ke-"<<i+1<<" : "<<hewan[i]<<"   	 	"<<endl;
  }

}


void sort::pengurutan(){
  int i, j;
  string tmp;
  for (i = 0; i < jmlhHewan; i++){
    for (j = 0; j < jmlhHewan - i - 1; j++){
      if (hewan[j] > hewan[j + 1]){
        tmp = hewan[j];
        hewan[j] = hewan[j + 1];
        hewan[j + 1] = tmp;
      }
    }
  }
  cout<<endl;
  cout<<"Setelah diurutkan."<<endl;

  for (int i=0; i<jmlhHewan; i++) {
    cout<<"Hewan ke-"<<i+1<<" : "<<hewan[i]<<"   	 	"<<endl;
  }

}
void sort::pencarian(){
  cout<<"Pilih Hewan Di Bawah ini : "<<endl;
  
  for (int i=0; i<jmlhHewan; i++) {
    cout<<"Hewan ke-"<<i+1<<" : "<<hewan[i]<<"   		 "<<endl;
  }

  cout<<"Pilih : ";cin>>pilih;
  cout<<"Hewan yang di pilih : "<<hewan[pilih-1]<<endl;
  hwnpilih = hewan[pilih - 1];
  cout<<"cari karakter apa : ";
  cin>>karakter;
  for(int i = 0 ;i < hwnpilih.size(); i++){
    if(hwnpilih[i] == karakter){
      cout<<"huruf "<<karakter<<" ditemukan pada indeks ke-"<<i<<endl;
    }
    else{
      cout<<"huruf "<<karakter<<" tidak ditemukan pada indeks ke-"<<i<<endl;
    }
  }
}

int main() {
  sort x;
  x.input();
  x.pengurutan();
  x.pencarian();
  return 0;
}