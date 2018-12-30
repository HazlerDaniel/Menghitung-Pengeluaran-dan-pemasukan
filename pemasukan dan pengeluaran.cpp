#include<stdio.h>
#include<conio.h>

int main(){
	int pemasukan,pengeluaran;
	printf("program menghitung pemasukan dan pengeluaran\n");
	printf("masukan jumlah pemasukan =");
	scanf("%d",&pemasukan);
	printf("masukan jumlah pengeluaran =");
	scanf("%d",&pengeluaran);
	
	if(pemasukan<pengeluaran)
	{
		printf("jumlah pemasukan lebih kecil dari pengeluaran\n");
	}
	else if(pemasukan>pengeluaran)
	{
		printf("jumlah pemasukan lebih besar dari pengeluaran\n");
	}
	else
	printf("error");
}
