#include<stdio.h>
void bubble( int a[100],int n );
int main(){
    int a[100],n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements of the array: ",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    bubble(a, n);
    printf("\nFinal sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
 void bubble(int a[100],int n ){
        for(int i =0 ; i < n-1 ; i++){
             printf("\n--- Pass %d ---\n", i + 1);
            for(int j = 0; j < n-i-1; j++){
                 printf("Comparing %d and %d ", a[j], a[j + 1]);
                if(a[j] > a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    for (int k = 0; k < n; k++)
                {
                    printf("%d ", a[k]);
                }
                printf("\n");
                }
            }
            printf("Array after Pass %d: ", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
        }
