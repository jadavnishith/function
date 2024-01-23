// Q3
#include <stdio.h>
#include <string.h>

int main()
{
    
    char name[]="red";
    printf("Enter Your Name in LowerCase :- ");
    scanf("%s",&name);
    printf("Output In UpperCase :- %s",strupr(name));

    

    return 0;
}

// Q1
// #include <stdio.h>
// #include <string.h>


//     float avg(int arr[],int size){
//         int sum=0;
//         for(int n=0; n<size; n++){
//             sum+=arr[n];
//         }
//         return(float)sum/size;
//     }
//     int main(){
//         int arr[]={6,7,8,9,5};
//         int size=sizeof(arr)/sizeof(arr[0]);
//         float average=avg(arr,size);
//         printf("Average : %.2f\n",average);

//         return 0;
//     }

// Q2
// #include <stdio.h>
// #include <string.h>

// void nick(int n){
//     if(n){
//         nick(n-1);
//         printf("%d ",n);
//     }
// }
// int main(){
//     nick(10);
//     return 0;
// }
