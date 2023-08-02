#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int i;
	float bil[7], jumlah=0.0, rata2;
	for(i = 0; i < 7; ++i)
	{
	cout <<i+1<< ". Masukkan Angka ke-" <<i+1<<" : ";
	cin >> bil [i];
	while (bil [i] > 100 || bil [i] <= 0)
	{
	cout << "Error! Angka di antara 1 s/d 100" << endl;
	cout <<i+1<< ". Masukkan Angka ke-" <<i+1<< " : ";
	cin >> bil[i];
	}
	
	jumlah += bil[i];
	}
	rata2 = jumlah / 7;
	cout << "Rata2 Bilangan di atas = " << rata2 << endl;
	
	system ("PAUSE");
	return 0;
}



