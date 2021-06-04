/******************************************************************************

Author: Pavani Bhemisetty

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{   
    //declaring variables
    int x,n,i;
    
    // initialize sum to zero
    int sum = 0;

    
    //reading x from user
    printf("Enter x value: \n");
    scanf("%d",&x);
    
    //reading n from user
    printf("Enter n values: \n");
    scanf("%d",&n);
    
    //adding sum
    for(i=0;i<=n;i++){
        sum += pow(x,i);
    }
    
    // printing the sum
    printf("The sum is: %d\n",sum);
}

