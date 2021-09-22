#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,hasil;
    //ini adalah inisialisasi awal

    printf("Program Perkalian \n\n");\

    printf("Masukkan angka pertama = ");
    scanf("%d", &a);
    //ini adalah masukan dari angka pertama

    printf("Masukkan angka kedua = ");
    scanf("%d", &b);
    //ini adalah masukan dari angka kedua

    hasil = a * b;
    //ini adalah proses


    printf("Hasil dari perkalian = %d", hasil);

    return 0;

}
