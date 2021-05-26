#include <stdio.h>

//Program sederhana pembayaran SPP

int main(){
	
//Deklarasi
char nama[100];
char jurusan[15];
char kelas[15];
char bulan[100];
int banyakspp,kembalian,uang,spp;
int harga_spp=125000;

//Deskripsi Algoritma
printf("Nama: ");
gets(nama);

printf("\nKelas(X/XI/XII): ");
gets(kelas);

printf("\nJurusan: ");
gets(jurusan);

printf("\nSPP bulan apa?");
gets(bulan);

printf("\nSPP untuk berapa bulan?");
scanf("%d",&banyakspp);

spp=banyakspp*harga_spp;
printf("\nMasukkan jumlah uang: ");
scanf("%d",&uang);
while(uang<spp){
    printf("Maaf uang anda kurang\n");
   printf("\nMasukkan jumlah uang: ");
   scanf("%d",&uang);
}
kembalian=uang-spp;
printf("\n\n======================================================\n");
printf("=================DETAIL PEMBAYARAN SPP====================\n");
printf("Nama: %s \n\n", nama);
printf("Kelas: %s \n\n", kelas);
printf("Pelunasan SPP bulan %s \n\n", bulan);
printf("Total SPP: Rp. %d \n\n", spp);
printf("Total Pembayaran: Rp. %d \n\n", uang);
printf("Kembalian\t: Rp. %d \n\n", kembalian);
printf("======================================================\n");

return 0;
}
