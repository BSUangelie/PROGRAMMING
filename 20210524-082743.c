#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char name[20]="text.txt";
  char str1;

    printf("\n\n Write multiple lines in a text file and read the file :\n");
	printf("------------------------------------------------------------\n");   
	printf(" Input the number of lines to be written : ");
	scanf("%d", &n);

	printf("\n INPUT \n");

	fptr = fopen (name,"w"); 
	for(i = 0; i < n+1;i++)
		{
		fgets(str, sizeof str, stdin);
		fputs(str, fptr);
		}
  fclose (fptr);

/*-------------- read the file -------------------------------------*/
	fptr = fopen (name, "r");  
	printf("\n Inside of the %s is  :\n",name);
	str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    printf("\n\n");
    fclose (fptr);
    return 0;
}