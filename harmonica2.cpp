#include <stdio.h>

int main (void)
{
    int N, i;
    float mediaharmonica, res;

    scanf("%d", &N);
    float vetor[N];

    for (i = 0 ; i < N ; i++)
    {
        scanf("%f", &vetor[i]);
        res = 1/(vetor[i] + 1);
        mediaharmonica = N - 1 /(float)res; 
    }
    printf("%.2f", mediaharmonica);
    return 0;
}
