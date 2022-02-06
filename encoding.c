#include<stdio.h>
void main()
{
    char str[5];
    printf("Enter the String to be Encode :\n");
    for(int i=0;i<5;i++)
    {
    scanf("%c",&str[i]);
    }
   
    int i = 0;
 
   while (str[i] != '\0') {
      str[i] = str[i] - 30;  // Subtract 30 From Charcter
      i++;
   }
  
   printf("Encoded string is %s",str);
   
}

