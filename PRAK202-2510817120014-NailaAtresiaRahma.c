#include <stdio.h>

int main()
{
    float num1, num2;

    printf ("Masukkan Nilai Pertama : ");
    scanf ("%f", &num1);
    printf ("Masukkan Nilai Kedua   : ");
    scanf ("%f", &num2);

    printf ("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"", num1, num2, num1 + num2);

    return 0;
}