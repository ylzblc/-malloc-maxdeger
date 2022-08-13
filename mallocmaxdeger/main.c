#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n, i, *ptr, max=0;

    printf("Eleman sayisini giriniz: \n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if(ptr==NULL)
    {
        printf("Yeterli hafiza yok!");
    }

    printf("Dizi elemanlarini giriniz: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", ptr+i);
    }

    for(i=0; i<n; i++)
    {
        if(*(ptr+i)>max)
            max = *(ptr+i);
    }

    printf("En buyuk deger: %d", max);

    return 0;

}
