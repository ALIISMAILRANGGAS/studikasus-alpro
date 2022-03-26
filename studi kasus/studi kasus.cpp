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
}
