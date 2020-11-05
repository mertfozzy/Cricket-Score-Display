/*
Beykoz University - Computer Enginerring
Name: Mert Altuntaş
ID : 1804010005
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>

//==========================================================================================

int main() {
intro_ekrani();
int rakam;
printf("Press \n[1] - START THE MATCH \n[2] - READ USER MANUAL \n[3] - TO EXIT\n");
printf("\n\nEnter Your Choice\n\n\n");
scanf("%d", & rakam);

switch(rakam){
	
	case 1 : startFonksiyonu();
	break;
	
	case 2 : userManual();
	break;
	
	default: printf("\nWrong choise. Please enter the correct numbers to use program.\n");
    break;
	
}

}


//==========================================================================================
void intro_ekrani(){
  printf("\n----------------------------------\n");
  printf("|  Software Engineering Project  |");
  printf("\n----------------------------------\n");
  printf("|     Made By: Mert Altuntas     |");
  printf("\n----------------------------------\n");
  printf("|\t  ID:   1804010005       |");
  printf("\n----------------------------------\n\n\n");

  printf("Loading  ");
  int j, a;
  for (a = 0; a <= 5; a++) {
    printf(".");
    for (j = 0; j <= 380000000; j++);
  }
  system("cls");
}
//==========================================================================================

void startFonksiyonu(){
	char takim1[10], takim2[10];
	int oversayisi;
	boolean check = false;
	
	x :
	printf ("\nEnter the name of Team 1 \t: \t");
	scanf("%s", takim1);
	
	printf("\nEnter the name of Team 2 \t: \t");
    scanf("%s", takim2);

        strcmp(takim1, takim2) == 0 ? check = false : (check = true);
        if (check == false) {
          printf("\n Can't have same name for 2 teams!!!");
          printf("\n Press any key to enter again ...");
          goto x;
        }
        
    printf ("\nHow many overs will be played in each inning \t: \t");
    scanf ("%d", &oversayisi);
    
    system("cls");
    
    int wicketPuan = 0;
    int j; 
	int score = 0;
	char aticiTakim1[10], vurucuTakim1[10];
	printf ("=========================================================\n");
	printf ("Enter name of bowler for %s \t: \t", takim1);
	scanf ("%s", aticiTakim1);
	
	printf ("\nEnter 6 shoot scores of %s : \n",aticiTakim1);
	for (j = 0; j <= 5; j++) {
          printf("\nScore : \t"); 
          scanf("%d", & score);
          wicketPuan += score;
      }
    
	printf ("\n Total wicket scores of %s : %d\n ", aticiTakim1,wicketPuan);
	printf ("=========================================================\n");
}

void userManual (){
	
}


