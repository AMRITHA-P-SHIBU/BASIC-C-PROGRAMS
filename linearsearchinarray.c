#include <stdio.h>
int main(){
    int n,key,found=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("Enter the element to search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(array[i]==key){
            found=1;
            printf("Element found at index: %d\n",i);
            break;
        }
    }
    if(!found)
        printf("Element not found\n");
    return 0;
}
