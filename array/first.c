#include<stdio.h>
int main(){
    int n;
    printf("Enter size = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Elements Of Array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int count=1,temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                temp=arr[i];
                count++;
            }
        }
        if(count>1){
            break;
        }
    }
    printf("%d is repeated %d times",temp,count);
    return 0;
}