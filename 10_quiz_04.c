// prime number
#include<stdio.h>

int main(){
     int n = 40,prime=0;
     for (int i = 2 ; i < n; i++){
        if(n%i==0){ 
            break;
        }
     }
     if(prime==1){
            printf("This is a prime Numbers :-");
     }
     else{
        printf("THis is a prime No.");
     }
    return 0;
}