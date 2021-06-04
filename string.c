#include <stdio.h>

int main()
{
    //declaring 3 char arrays of size 1000
    char mainstr[1000],substring[1000],finalstr[1000];
    //declaring position variable
    int pos;
    //initializing loop counter to zero
    int i=0,j=0;
    
    //reading mainstring from user
    printf("Enter a main string: \n");
    scanf("%s",mainstr);
    
    //reading substring from user
    printf("Enter substring \n");
    scanf("%s",substring);
    
    //reading position from user
    printf("Enter the position to insert\n");
    scanf("%d",&pos);
    
    //copy the mainstring into finalstring upto the index position-1
    while(i<pos){
        finalstr[i] = mainstr[i];
        i++;
    }
    
    //copy the substring into finalstring
    while(substring[j]!='\0'){
        finalstr[pos+j] = substring[j];
        j++;
    }

    //copy the remaining main string
    while(mainstr[i]!='\0'){
        finalstr[pos+j] = mainstr[i];
        i++;
        j++;
    }
    
    //printing the final string
    printf("final str: %s",finalstr);
}
