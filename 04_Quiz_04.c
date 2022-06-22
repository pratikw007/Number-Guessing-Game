// Q4. What can be done using one type of loop can also
//   be done using the other two type of loops

#include<stdio.h>

int main(){
    int sum=0,i=1,n=10;
    // scanf("%d",&n);
     
    //  for(i=0;i<=n;i++){
    //          sum += i;

    //  }
    while (i<=n)
    {
     sum +=i;
     i++;   
    }
    

        printf("The Value of sum 1 to 10 is %d",sum);

    return 0;
}