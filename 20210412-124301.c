/*Simple Login Program*/

#include<stdio.h>


int main()
{
    int ID [3][2]={{1111,2222}/*user 1*/, {3333,4444}/*user 2*/, {5555,6666}/*user 3*/};
    int user, password;

//inputing data...
printf("Enter ID number: ");
scanf("%d", &user);
printf("Enter password: ");
scanf("%d",&password);

// validating
 if(user == ID [0][0] && password == ID [0][1]) {
        printf("\nYou successfully logged in\n");
        printf("ID# : %d\n", ID[0][0]);
    } else if (user == ID[1][0] && password == ID[1][1]) {
        printf("\nYou successfully logged in\n");
        printf("ID# : %d\n", ID[1][0]);
    } else if (user == ID[2][0] && password == ID[2][1]) {
        printf("\nYou successfully logged in\n");
        printf("ID# : %d\n", ID[2][0]);
    } else { printf("\n Invalid ID/PIN! \n"); }
    
return 0;
}