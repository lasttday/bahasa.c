#include <stdio.h>					//#Header dan <Header filenya>
//#include <stdin.h>

int main(){

char nama[21];

printf("Masukan nama kalian:");		
//scanf("%[^\n]", nama);			//Digunakan untuk Membaca string namun tidak direkomendasikan karena ini bisa menjadi buffer overflow 


fgets(nama, sizeof(nama), stdin);	//Sebagai gantinya kita memakai ini untuk membaca semua string input biar aman dan lebih direkomendasikan
printf("Nama kamu %s ya\n",nama);

return 0;							//sebagai penanda nilai balik ketika ada program yang salah
}
