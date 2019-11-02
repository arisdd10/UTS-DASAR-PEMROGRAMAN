#include <iostream>
using namespace std;
int main()
{
cout <<"===============================================\n";
cout <<"Nama    :Aris Kurniawan                        \n";
cout <<"NIM     :A2.1900023                            \n";
cout <<"Jurusan :Teknik Informatika                    \n";
cout <<"===============================================\n";
cout <<"         LATIHAN INPUT OUTPUT                  \n";
cout <<"***********************************************\n\n";
char tampilkan[1];
char nama[50], alamat[50], ttl[50], jk[50], no[50];
cout <<"===============================================\n";
cout <<"         DAFTAR RIWAYAT HIDUP                  \n";
cout <<"===============================================\n";
cout <<" Nama : ";
cin.getline(nama,50);
cout <<" Alamat : ";
cin.getline(alamat,50);
cout <<" Tempat Tanggal Lahir : ";
cin.getline(ttl,50);
cout <<"Jenis Kelamin : ";
cin.getline(jk,50);
cout <<"No Telp/HF : ";
cin.getline(no,50);
cout <<"Jurusan : Teknik Informatika STMIK Sumedang ";
cin.getline(tampilkan,1);
return 0;
}
