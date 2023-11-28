#include<stdio.h>
#include<string.h>
void sort(int *arr,int i,int check,int l){
    if (check==1){
        for(int j=i;j<l;j++){
            for (int k=j;k<l;k++){
                if(arr[k]>arr[k+1]){
                    int temp;
                    temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=temp;

                }
            }

        }
    }
    if (check=2){
        for(int j=i;j<l;j++){
            for (int k=j;k<l;k++){
                if(arr[k]<arr[k+1]){
                    int temp;
                    temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=temp;

                }
            }

        }
    }

}
int  *printmin(char str[8],int arr[8]){
    int len=strlen(str)+1;
   
    for (int i=0;i<len;i++){
        arr[i]=i;
    }
    for (int i=0;i<len-1;i++){
        if (str[i]=='D'){
            sort(arr,i,2,len);
        }
        else if (str[i]=='I'){
            sort(arr,i,1,len);
        }
    }
    return arr;

}
int main(){
    int arr[]={};
    int *ptr;
    char istr[8];
    scanf("%s",istr);
    
    ptr=printmin(istr,arr);
    for (int i=0;i<strlen(istr)+1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}