/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{

    char a[1000],b[1000],c[1000];
    int pos,i=0,j=0;
    printf("Enter a main string: \n");
    scanf("%s",a);

    printf("Enter substring \n");
    scanf("%s",b);
    

    printf("Enter the position to insert\n");
    scanf("%d",&pos);
    

    while(i<pos){
        c[i] = a[i];
        i++;
    }

    while(b[j]!='\0'){
       c[pos+j] = b[j];
        j++;
    }

    while(a[i]!='\0'){
        c[pos+j] = a[i];
        i++;
        j++;
    }
    
    printf("final str: %s",c);
}
