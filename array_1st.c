#include<stdio.h>
int main()
{
    
    int m[31],sum=0,i,j=0;
    printf("warning: maximum marks are 60\n");
    for(i=0; i<=30; i++){
        
        printf("enter the marks of student whose roll no. is %d : " ,i+1);
       
         scanf("%d" , &m[i]);
         if (m[i] > 60 || m[i] < 0){
            printf(" enter valid marks between 0 and 60\n");
            i--;
         }
         else { 
            sum += m[i];
         }

         
    }
    
   printf("Thank You, Your marks have been submitted successfully\n");
    char l,y=1,n=0;
    int r;
    printf(" enter roll number of the student you want to get marks or press 0 to exit:");
    scanf("%d", &r);

    while (1){
        if(r==0){
            printf("thank you, exiting the program!");
            break;
        }
        if (r < 0 || r > 31 ){
            printf("invalid roll number!! Please enter roll number between 1 to 31");}



        else printf(" marks of roll number %d are %d" , r ,m[r-1]);

return 0;

    }


}
