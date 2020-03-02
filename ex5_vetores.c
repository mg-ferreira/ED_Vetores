#include <stdio.h>

int main(){
    float v[] = {8, 5.5, 9.3, 4.7, 5.6, 8.4, 7.1, 7.3, 6.54, 8.17, 1.27, 1.99, 7.86, 8.88, 1.20,
                4.33, 5.81, 6.29, 3.77, 4.68, 5, 3.34, 4.14, 9.79, 2.18, 0.15, 5.98, 9.01, 6.52, 4.4};
    float media=0;

    for(int i = 0; i < 30; ++i){
        media = media + v[i];
    }

    media = media/30;

    printf("A media dos valores eh: %.2f\n", media);
    return 0;
}