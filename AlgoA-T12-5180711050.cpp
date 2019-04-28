#include<conio.h>
#include <iostream>
#include <windows.h>

using namespace::std;
struct data{
int nik;
int antrian;
string nama;
};
data batas[100];
data temp;
int a,input,c,d;

void inputdata()
{    cout<<endl<<"Jumlah Data Yang Akan diinput : ";cin>>input;
  d=0;
  for(c=0;c<input;c++){
  d=d+1;
  cout<<"Data ke-"<<d<<endl;
  cout<<"NIK        : ";cin>>batas[a].nik;
  cout<<"Nama       : ";cin>>batas[a].nama;
  cout<<"No Antrian : ";cin>>batas[a].antrian;
  a++;}}

void hapusdata()
{int hapus,y;
 cout<<"Hapus data ke-";cin>>hapus;
 y=hapus-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}

 cout<<" Data ke-"<<hapus<<"Terhapus";
 getch();
}

void editdata(){
int edit,l;
cout<<"Masukan Data yang akan diedit : ";cin>>edit;
l=edit-1;
cout<<"NIK          : ";cin>>batas[l].nik;
cout<<"Nama         : ";cin>>batas[l].nama;
cout<<"No Antrian    : ";cin>>batas[l].antrian;
}

void sortdata(){
int b,i;
 for (i=0;i<input;i++)
        {
            cout<<"NIK          : "<<batas[i].nik<<endl;
            cout<<"Nama         : "<<batas[i].nama<<endl;
            cout<<"No Antrian   : "<<batas[i].antrian<<endl;

        }
cout<<endl;
    for (i=0;i<input;i++)
        {
            for (b=0;b<input-1;b++)
                {
                    if (batas[b].nik>batas[b+1].nik)
                        {
                            temp.nik = batas[b].nik;
                            batas[b].nik = batas[b+1].nik;
                            batas[b+1].nik = temp.nik;

                            temp.antrian = batas[b].antrian;
                            batas[b].antrian = batas[b+1].antrian;
                            batas[b+1].antrian = temp.antrian;

                        }
                }
        }

cout<<" SETELAH DATA DI SORTING: \n";
for (b=0;b<input;b++)
    {
        cout<<" ========================================\n";
        cout<<"NIK          : "<<batas[i].nik<<endl;
        cout<<"No Antrian   : "<<batas[i].antrian<<endl;
    }
        cout<<" ========================================\n";

}

void searchingdata(){
string cari;
int m;
cout<<"Masukan Nama : ";cin>>cari;
for (int i =0;i<input;i++){
    if (batas[i].nama==cari){
            m=i;
        cout<<"Data di Temukan Pada index ke = "<<m+1<<endl;
        cout<<"NIK : "<<batas[m].nik<<endl;
        cout<<"Nama : "<<batas[m].nama<<endl;
        cout<<"No Antrian : "<<batas[m].antrian<<endl;
    }
else { cout<<"Data tidak ada";}
}

}




int main()
{     int pilih;
    char w;
    getch();
    awal:
  do{
  cout<<"================================ PILIHAN MENU ================================="<<endl;
  cout<<"1. Input data"<<endl;
  cout<<"2. Hapus Data"<<endl;
  cout<<"3. Edit Data"<<endl;
  cout<<"4. Sort Data"<<endl;
  cout<<"5. Searching Data"<<endl;
  cout<<"6. Keluar"<<endl<<endl;
  cout<<"Masukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {inputdata();}
  else if(pilih==2)
   {hapusdata();}
  else if(pilih==3)
   {editdata();}
 else if (pilih==4)
   {sortdata();}
 else if (pilih==5)
   {searchingdata();}
  else
   cout<<"ULANG ";
   cout<<"ULANG : [y][n]"<<endl;cin>>w;
}
while(w=='y');
}
