#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 100
#define MAX 200

int isDuplicate(int arr[], int size, int num) {
    for(int i=0; i<size; i++) {
        if(arr[i] == num) return 1;
    }
    return 0;
}

int main(void) {
    int M, N;
    scanf("%d %d", &M, &N);

    if(M <= 2 || N <= 2 || M >= 20 || N >= 20) {
        printf("Invalid size\n");
        return 0;
    }

    int total = M * N;
    int used[1000];
    int count = 0;

    int arr[M][N];
    srand(time(NULL));

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            int num;
            do {
                num = MIN + rand() % (MAX - MIN + 1);
            } while(isDuplicate(used, count, num));
            used[count++] = num;
            arr[i][j] = num;
        }
    }

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


