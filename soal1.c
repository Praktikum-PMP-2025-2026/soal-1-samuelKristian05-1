#include <stdio.h>
#include <math.h>

#define kiri rusak[i-geserKiri]
#define kanan rusak[i-geserKanan]

int main() {
    int N, sum;
    char rusak[N];
    char bener[N];

    /* input */
/*  printf("Berapa banyak angka:\t");
    scanf("%d", &N);
    int a = 1;
    while (a < N+1) {
        scanf("%d", &rusak[a-1]);
        
    }
    return rusak[N]; */

    int j = 0; /* index bener[] */
    for (int i = 0; i < N; i++) {
        if (rusak[i] != -1) {       /* valid */
            bener[j] = rusak[i];
            i += 1;
            j += 1;
        } 
        else {                      /* tidak valid */
            /* obtain di kirinya yg valid */
            int geserKiri = 1;
            int geserKanan = 1;
            while (kiri != -1) {       /* ok kiri valid */
                if (kanan != -1) {    /* ok kanannya valid */
                    bener[j] = floor(0.5 * (kiri+kanan));
                    i += 1; 
                    j += 1;                 
                }
            }
            
        }
    }
    sum = 0;
    int z = 0;
    while (z < ) {
        sum += bener[j];
    }
}

// 6    5 -1 7 -1 -1 4
// RECOVERED 5 6 7 5 4 4 MAX_SUM 31
