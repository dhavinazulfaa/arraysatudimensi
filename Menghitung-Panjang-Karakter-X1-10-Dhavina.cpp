#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
		//mendeklarasikan teks1 dan teks2
		char teks1[10], teks2[10];
		int jlhdepan, jlhkel, jlhhuruf;
		
		//menampilkan pesan u/ meminta masukan dari pengguna
		cout << "Masukkan Nama Depan Anda?: ";
		cin >> teks1;
		cout << "Masukkan Nama Keluarga Anda?: ";
		cin >> teks2;
		//menghitung panjang teks
		jlhdepan = strlen(teks1);
		jlhkel = strlen(teks2);
		jlhhuruf = jlhdepan + jlhkel;
		
		//menampilkan hasil ke pengguna
cout << "Nama Lengkap Anda: " << teks1 << " " << teks2 <<
endl;
cout << "Jumlah Huruf Nama Anda : " << jlhhuruf << " Huruf"
<<endl;
  system ("PAUSE");
  return 0;
}
