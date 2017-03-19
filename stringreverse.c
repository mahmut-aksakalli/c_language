#include<stdio.h>

int  str_len(char str[]);

int main() {
   char str[100], temp;
   int i, j = 0;
 
   printf("\nEnter the string :");
   gets(str);
 
   i = 0;
   j = str_len(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 
   printf("\nReverse string is :%s", str);
   return (0);
}

int str_len(char str[]){
	int i=0;
	for(i=0;str[i]!='\0';i++);
	return i;
	
}
