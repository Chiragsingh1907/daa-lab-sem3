#include<stdio.h>
void min_max(int a[], int n, int low, int high, int *min, int *max){

     int min1, min2, max1, max2;
     int mid;
    
    if ( low == high){
        *min = a[low];
        *max = a[low];
        return ; 
    }
    if (high = low + 1){
        if(a[low] < a[high]){
            *min = a[low];
            *max = a[high];
        }
        else {
            *min = a[high];
            *max = a[low];
        }
        return ; 
    }

    mid = (low + high) / 2;
    min_max(a , low, mid, &min1, &max1);
    min_max(a, mid + 1, high, &min2, &max2); 

    if (min1 < min2 ){
        *min = min1;
    }
    else{
        *min = min2;
    }
    if (max1 > max2){
        *max = max1;
    }
    else{
        *max = max2;
    }
    
}
int main(){
    int a[100], n, min, max;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the %d elements of the array:\n ", n); 
    for(int i = 0 ; i < n ; i++){
        scnaf("%d" , &a[i]);
    }
    min_max(a , 0, n - 1, &min, &max);
    printf("Minimun = %d\n", min);
    printf("Maximun = %d\n", max);

    return 0;
    
}