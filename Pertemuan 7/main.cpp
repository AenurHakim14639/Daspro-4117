#include <iostream>

using namespace std;

int main()
{

  int a;
  cout << "masukkan bilangan genap antara 25 sampai 50 : ";
  cin >> a;

  if (a%2==0 && 25<=a && a<=50) {
      cout << "Benar" << endl;
  }
  else {
    cout << "Salah" <<endl;
  }

  int b;
  cout <<"\nMasukan angka ganjil atara lebih dari 13 atau kurang dari 5 : ";
  cin >> b;

  if (b%2==1 && 13<=b || b%2==1 && b<=5) {
        cout <<"Benar" <<endl;
  }
  else {
        cout<<"Salah" <<endl;
  }

  int c;
  cout <<"\nMasukan Bilangan Bulat Antara 25 sampai 50 atau Bilangan Ganjil antara 3 sampai 15 : ";
  cin >> c;

  if (25<=c && c<=50 || c%2==1 && 3<=c && c<=15) {
        cout <<"Benar" << endl;
  }
  else {
        cout <<"Salah" <<endl;
  }

  int d;
  cout << "\nJurusan : \n1. Teknik Informatika \n2. Teknik Informasi \n3. DKV";
  cout <<"\nTuliskan Jurusan Anda : ";
  cin >> d;

  if  (d==1) {
  cout << "Jurusan Anda adalah Teknik Informatika" << endl;
  }
  if (d<=2 && d>=2) {
        cout << "Jurusan Anda adalah Teknik Informasi" << endl;
  }
  if (d<=3 && d>=3 ) {
        cout << "Jurusan Anda adalah DKV" << endl;
  }
  if (3 < d || d  <1) {
    cout << "Ups! Jurusan Tidak Tersedia" <<endl;
  }

    return 0;
}

