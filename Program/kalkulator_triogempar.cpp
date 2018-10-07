#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void petunjuk();

main ()
{
petunjuk(); //tampilkan petunjuk

double Hasil;
double Angka;
double AngkaMasukan;
char op;
char jwb;

cout << "Masukan Angka = ";
cin >> Angka;
do
{
//jika angka yang mau di hitung masih nol
if (Angka == 0) {
cout << "MasukanAngka = ";
cin >> Angka;
}
cout << "Operasi : ";
cin >> op;

switch(op)
{
case 'c' : Angka = 0;
break;

case '+' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka + AngkaMasukan;
cout << "Jumlahnya adalah :" << Hasil << endl;
Angka = Hasil;
break;

case '-' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka - AngkaMasukan;
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

case '*' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka * AngkaMasukan;
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

case '/' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka / AngkaMasukan;
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

case '^' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = pow(Angka,AngkaMasukan);
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

}
cout << "Apakah penghitungan mau dilanjutkan(Y/T) \n";
cin >> jwb;
}
while (jwb == 'Y' || jwb == 'y');
return 0;
}

void petunjuk()
{
cout << "Nama : Wisudanto Catur Putra Ragil\n";
cout << "Nim   : 111903102006\n";
cout << "Prodi  : D3 Teknik Elektronika\n";
cout << " Universitas Jember\n";
cout << "=======================================================================\n";
cout << "\t\tPROGRAM CALCULATOR SEDERHANA\t\t\n";
cout << "'+'= Penjumlahan \n";
cout << "'-'= Pengurangan \n";
cout << "'*'= Perkalian \n";
cout << "'/'= Pembagian \n";
cout << "'^'= Perpangkatan\n";
cout << "=======================================================================\n";
}
