// 12S22033 - Mickael Heri Irawan Sitompul
// 12S22027 - Ferry Ando H.O Panjaitan


#include <stdio.h>

void main(int _argv, char **_argc)
{
    int banyak_nilai ;

    scanf("%d", &banyak_nilai);
    int nilai[banyak_nilai];
    

    int i;
    for(i=0;i<banyak_nilai;i++){
        scanf("%d", &nilai[i]);
    }

    int kecil=nilai[1];
    for(i=0;i!=banyak_nilai;i++){
        if(kecil>nilai[i]){
            kecil=nilai[i];
        }
    }

    int besar=nilai[1];
    for(i=0;i!=banyak_nilai;i++){
        if(besar<nilai[i]){
            besar=nilai[i];
        }
    }

    printf("%d\n", kecil) ;
    printf("%d\n", besar) ;


    
}