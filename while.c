#include <stdio.h>
#include <stdlib.h>

int main(){

int umur;

while (1) {
	printf("Masukan Umurkamu Bung:");
	scanf("%d", &umur);

if (umur < 0 ||umur > 100) {
	printf("Umur kamu %d tahun tidak logis\n", umur);
	continue;
}

	switch(umur >= 18){
	case 1:
	printf("Selamat umur anda mencukupi %d tahun\n", umur);
	break;
		case 0:
			printf("Maaf umur anda %d tidak mencukupi untuk masuk\n", umur);
				break;
	}
}
return 0;
}
