#include <stdio.h>

void best3_method1(int score[], int result[]);

int main() {
    int score[4] = {50,85,60,90};
    int best[3];
    int i;
    best3_method1(score,best);
    for(i=0;i<3;i++)
        printf("%d ",best[i]);
    return 0;
}

void best3_method1(int score[], int result[]) {
    int i, j, maxIndex;
    for(i=0;i<3;i++) {
        maxIndex = 0;
        for(j=1;j<4;j++) {
            if(score[j] > score[maxIndex])
                maxIndex = j;
        }
        result[i] = score[maxIndex];
        score[maxIndex] = -1; 
    }
}
