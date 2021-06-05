/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int i,x,n;
    float sum=1;
    printf("Enter x value: \n");
    scanf("%d",&x);
    
    printf("Enter n value: \n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum += (pow(x,i)/(i*2));
        }
        else{
            sum -= (pow(x,i)/(i*2));
        }
    }
    printf("The value is : %.2f",sum);
}
