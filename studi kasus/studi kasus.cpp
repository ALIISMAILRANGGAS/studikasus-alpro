#include <conio.h>
#include <ctime>
#include <iostream>
using namespace std;

struct penjualan{
	string nama;
	float liter;
	float hasil;
	int n;
} bbm;

int main(){
	time_t now = time(0);
	char* dt = ctime(&now);
	
	printf ("Penjualan SPBU\n");
	printf ("1.Pertamax\n");
	printf ("2.Pertalite\n");
	printf ("Masukkan pilihan :");
	scanf ("%d", &bbm.n);
	printf ("Masukan pembelian perliter : ");
	scanf ("%f", &bbm.liter);
	cout<<"Masukkan nama pelanggan :";
	cin>>bbm.nama;
	
	printf ("\n\n\n\n");
	printf ("SPBU COCO \n");
	printf ("Pertamina 41.551.01\nLempuyangan, JL. Kompol Maksum Jogjakarta\nTlp. (021) 150000\n");
	cout<<dt<<endl;
	printf ("---------------------------------------")
	
	{
		if (bbm.n == 1)
		{
			bbm.hasil = 9000 * bbm.liter;
			printf ("Jenis Bensin : Pertamax\n");
		}
		else
	
}
