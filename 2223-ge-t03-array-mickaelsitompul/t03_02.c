// 12S22033 - Mickael Heri Irawan Sitompul
// 12S22027 - Ferry Ando H.O Panjaitan

#include <stdio.h>

void main(int _argv, char **_argc)
{
    int input;
    int i, x;
    int nilai, kecil = 0, besar = 0;
    float ratarata, ratarataRendah = 0;
    
    scanf("%d", &input);
    
    int nilaiinput[input];

    for(i = 0; i < input; i++){
        scanf("%d", &nilai);
        nilaiinput[i] = nilai;
        
        if(i==0){
            besar = nilai;
            kecil = nilai;
        } else{
            if(nilai > besar){
                besar = nilai;
            }
            
            if (nilai < kecil){
                kecil = nilai;
            }   
        }
    }
    
    for(x=0; x < input; x++){
        if(x + 1 < input){
            ratarata = (float)( nilaiinput[x] + nilaiinput[x+1] ) / 2;
            
            if(x==0){
                ratarataRendah = ratarata;
            }
            
            
            if(ratarata < ratarataRendah){
                ratarataRendah = ratarata;
            }
        }
    }
    
    printf("%d\n", kecil);
    printf("%d\n", besar);
    printf("%.2f\n", ratarataRendah);
}