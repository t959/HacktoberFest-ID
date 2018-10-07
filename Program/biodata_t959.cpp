#include <iostream>

using namespace std;
char nama[50];
char usia[5];
char jenis_kelamin[15];
char hobi[15];

int main()
{
 cout<<"Masukan Nama Kamu : ";
 cin>>nama;
 cout<<"Masukan Usia Kamu : ";
 cin>>usia;
 cout<<"Masukan Jenis Kelamin : ";
 cin>>jenis_kelamin;
 cout<<"Masukan Hobi Kamu : ";
 cin>>hobi;

 cout<<"\n\n";
 cout<<"**************************************" <<endl;
 cout<<"Biodata "<<nama <<endl;
 cout<<"**************************************" <<endl;
 cout<<"\n";
 cout<<"Nama : "<<nama <<endl;
 cout<<"Usia : "<<usia <<endl;
 cout<<"Hobi : "<<hobi <<endl;
 cout<<"Jenis Kelamin : "<<jenis_kelamin <<endl;
 cout<<"\n";
 cout<<"**************************************";
 cout<<"\n";
 return 0;
}
