void mhs::proses(){
  for(int i=1; i<=jumlah; i++){
    if (nim[i]==cari){
      x=1;
      cout<<"Berikut data yang anda cari : "<<endl;
      cout<<"Nama : "<<nama[i]<<endl; 
      cout<<"NIM : "<<nim[i]<<endl; 
      cout<<"Prodi : "<<prodi[i]<<endl; 
      cout<<"No. tlp : "<<telp[i]<<endl; 
      
    }
  }
  ulang();
}
void mhs::ulang(){
  cout<<"\nMengurutkan data NIM : "<<endl;
  cout<<"1. Ascending"<<endl;
  cout<<"2. Descending"<<endl;
  cout<<"Masukkan Pilihanmu : ";
  cin>>pil;

  if (pil==1){
    for(int i=1; i<=jumlah; i++){
      for(int j=1; j<=jumlah; j++){
        if(nim[i]<nim[j]){
          nnim=nim[i];
          nim[i]=nim[j];
          nim[j]=nnim;
        }
      }
      cout<<"Data NIM yang diurutkan secara Ascending : ";
      for(int i=1; i<=jumlah; i++){
        cout<<nim[i]<<" ";
      }
    }
  } else if (pil==2){
    for(int i=1; i<=jumlah; i++){
      for(int j=1; j<=jumlah; j++){
        if (nim[i]>nim[j]){
          nnim=nim[i];
          nim[i]=nim[j];
          nim[j]=nnim;
        }
      }
    }
    cout<<"\nData nim yang diurutkan secara Descending : ";
    for (int i=1; i<=jumlah; i++){
      cout<<nim[i]<<" ";
    }
  }else{
    cout<<"Pilihan tidak sesuai : "<<endl;
    system("clear");
    ulang();
  }
}