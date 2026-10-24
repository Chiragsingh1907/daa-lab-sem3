#include<stdio.h>

void binary(int a[], int n, int key){
    int low = 0;
    int high = n -1;
    int mid;
    int found = 0;

    while (low <= high){
        mid = (low + high) / 2;
        if (a[mid] == key){
            printf("\nElement %d found at index %d", key, mid);
            found = 1;
            break;
        }
        else if(key < a[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if (found == 0){
        printf("\nElement not found");
    }
}
int main(){
    int a[100], n, key;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the array: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter elements to search: ");
    scanf("%d", &key);

    binary(a, n, key);

    return 0;

}