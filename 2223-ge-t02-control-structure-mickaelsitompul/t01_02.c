// 12S22027 - Ferry Ando H.O. Panjaitan
// 12S22033 - Mickael Heri Irawan Sitompul

#include <stdio.h>

int main() {
    int x1, x2, i; 
    int waktu_ucok = 0, waktu_butet = 0, time_butet=0;
    scanf("%d %d", &x1, &x2);

    // hitung waktu tunggu Ucok
    for (i = 0; i < x1; i += 3) {
        waktu_ucok += 3;
    }
    if (x1 % 3 != 0) {
        waktu_ucok += 3;
    } else if (x1 % 3 == 0)
    {
        waktu_butet -= 3;
    }
    
    // hitung waktu tunggu Butet
    for (i = 0; i < x2; i += 3) {
        waktu_butet += 3;
    }
    if (x2 % 3 != 2) {
        waktu_butet += 3*2;
    }else if (x2 % 3 != 1)
    {
        waktu_butet += 3;
    }else
    {
        printf("Selesai");
    }
    // tampilkan waktu tunggu Ucok, Butet, dan total
    printf("\n%d\n%d\n%d\n", waktu_ucok, waktu_butet, waktu_ucok + waktu_butet);

    return 0;
}