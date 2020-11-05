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

//******************************************************* MAIN *****************************************************************

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
//*****************************************************************************************************************************
//***************************************************** INTRO FUNCTION ********************************************************
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
//**************************************************************************************************************************
//************************************************* START FUNCTION *********************************************************

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
        
  
    system("cls");
    
//================================== MATCH STARTS ============================================
    int wicketPuanA=0;
	int wicketPuanB =0;
    int runsPuanA=0;
	int runsPuanB=0;
    int j,i; //just for loops
    //Team A :
	int score1a=0,score2a=0,score3a=0,scoreVurucu_A=0,scoreAtici_A = 0;
	char aticiTakim1[10], vurucu1Takim1[10], vurucu2Takim1[10],vurucu3Takim1[10];
	
	//Team B :
	int score1b=0,score2b=0,score3b=0,scoreVurucu_B=0,scoreAtici_B = 0;
	char aticiTakim2[10], vurucu1Takim2[10], vurucu2Takim2[10],vurucu3Takim2[10];
	
    //ENTERING SCORES OF TEAM A :
	printf ("=========================================================\n");
	printf ("Enter name of Bowler for %s \t: \t", takim1);
	scanf ("%s", aticiTakim1);
	
	printf ("\nEnter 6 shoot scores of %s : \n",aticiTakim1);
	for (i = 0; i <= 5; i++) {
          printf("\nScore : \t"); 
          scanf("%d", & scoreAtici_A);
          wicketPuanA += scoreAtici_A;
      }
    
	printf ("\n Total wicket scores of %s : %d\n ", aticiTakim1,wicketPuanA);
	printf("Press any key to proceed with Batsmans of team %s .",takim1);
    getch();
    system("cls");
	
	printf ("=========================================================\n");
	printf ("Enter names of 3 Batsman for %s \t: \t", takim1);
	printf ("\nBatsman 1 : ");
	scanf ("%s",vurucu1Takim1);
	printf ("\nBatsman 2 : ");
	scanf ("%s",vurucu2Takim1);
	printf ("\nBatsman 3 : ");
	scanf ("%s",vurucu3Takim1);
	
	printf ("\n\nEnter runs score of %s : \n",vurucu1Takim1);
    printf("\nScore : \t"); 
    scanf("%d", & score1a);
    printf ("\nEnter runs score of %s : \n",vurucu2Takim1);
    printf("\nScore : \t"); 
    scanf("%d", & score2a);
    printf ("\nEnter runs score of %s : \n",vurucu3Takim1);
    printf("\nScore : \t"); 
    scanf("%d", & score3a);
    scoreVurucu_A = score1a + score2a + score3a;
    runsPuanA += scoreVurucu_A;
      
    
	printf ("\n Total runs of Batsmans ; %s , %s and %s : %d\n ", vurucu1Takim1, vurucu2Takim1, vurucu3Takim1,runsPuanA);
	printf("Press any key to proceed with team %s .",takim2);
	printf ("=========================================================\n"); //END OF TEAM A SCORING
    getch();
    system("cls");
	
	//ENTERING SCORES OF TEAM B:
	printf ("=========================================================\n");
	printf ("Enter name of Bowler for %s \t: \t", takim2);
	scanf ("%s", aticiTakim2);
	
	printf ("\nEnter 6 shoot scores of %s : \n",aticiTakim2);
	for (j = 0; j <= 5; j++) {
          printf("\nScore : \t"); 
          scanf("%d", & scoreAtici_B);
          wicketPuanB += scoreAtici_B;
      }
    
	printf ("\n Total wicket scores of %s : %d\n ", aticiTakim2,wicketPuanB);
	printf("Press any key to proceed with Batsmans of team %s ...\n",takim2);
    getch();
    system("cls");
	
	printf ("=========================================================\n");
	printf ("Enter names of 3 Batsman for %s \t: \t", takim2);
	printf ("\nBatsman 1 : ");
	scanf ("%s",vurucu1Takim2);
	printf ("\nBatsman 2 : ");
	scanf ("%s",vurucu2Takim2);
	printf ("\nBatsman 3 : ");
	scanf ("%s",vurucu3Takim2);
	
	printf ("\n\nEnter runs score of %s : \n",vurucu1Takim2);
    printf("\nScore : \t"); 
    scanf("%d", & score1b);
    printf ("\nEnter runs score of %s : \n",vurucu2Takim2);
    printf("\nScore : \t"); 
    scanf("%d", & score2b);
    printf ("\nEnter runs score of %s : \n",vurucu3Takim2);
    printf("\nScore : \t"); 
    scanf("%d", & score3b);
    scoreVurucu_B = score1b + score2b + score3b;
    runsPuanB += scoreVurucu_B;
      
    
	printf ("\n Total runs of batsmans ; %s , %s and %s : %d\n ", vurucu1Takim2, vurucu2Takim2, vurucu3Takim2,runsPuanB);
	printf("Inning is over.\nPress any key to display match score...\n");
	printf ("=========================================================\n");//END OF TEAM B SCORING
    getch();
    system("cls");

//================================= MATCH IS OVER ======================================
	
	//TIME TO DISPLAY WHOLE SCORE :
	
	printf ("----------------------------------------------------------------------\n");
	printf ("|                           TEAM %s                             |\n",takim1);
	printf ("|  TOTAL WICKETS : %d \t                TOTAL RUNS : %d          |\n", wicketPuanA,runsPuanA);
	printf ("|\n\n");
	printf ("|  Bowler : %s                          Batsmans : %s - %s - %s |\n",aticiTakim1, vurucu1Takim1, vurucu2Takim1,vurucu3Takim1);
	printf ("----------------------------------------------------------------------\n");
	printf ("----------------------------------------------------------------------\n");
	printf ("|                           TEAM %s                             |\n",takim2);
	printf ("|  TOTAL WICKETS : %d \t                TOTAL RUNS : %d          |\n", wicketPuanB,runsPuanB);
	printf ("|\n\n");
	printf ("|  Bowler : %s                          Batsmans : %s - %s - %s |\n",aticiTakim2, vurucu1Takim2, vurucu2Takim2,vurucu3Takim2);
	printf ("----------------------------------------------------------------------\n");
	printf ("\n\n\n\n");
	
	if (runsPuanA > runsPuanB)
	{
		printf ("TEAM %s WON THE CRICKET MATCH !!",takim1);
	}
	else
	{
		printf ("TEAM %s WON THE CRICKET MATCH !!",takim2);
	}
	
	//SAVING ALL SCORES INTO TXT FILES
	FILE * f, * f2;
    f = fopen("Takim A.txt", "w");
    f2 = fopen("Takim B.txt", "w");
    fprintf(f, "Batsmans : %s - %d | %s - %d | %s - %d\n\nBowler  : %s - %d", vurucu1Takim1,score1a, vurucu2Takim1,score2a, vurucu3Takim1,score3a,aticiTakim1,wicketPuanA);
    fprintf(f2,"Batsmans : %s - %d | %s - %d | %s - %d\n\nBowler  : %s - %d", vurucu1Takim2,score1b, vurucu2Takim2,score2b, vurucu3Takim2,score3b,aticiTakim2,wicketPuanB);
    fclose(f);
    fclose(f2);
      
}
//*******************************************************************************************************************************


//************************************************* USER MANUAL *****************************************************************
void userManual (){
  system ("cls");
  printf("\t\t\t\t**** CRICKET SCORING PROGRAM ****\n");
  printf("\t\t\t\t******** USER MANUAL ********\n");

  printf("\n1. First enter the name of two playing teams\n");
  printf("2. Enter the First Team's Bowler's name''\n");
  printf("3. Please do not enter no. of overs or score in character form\n");
  printf("4. Enter six scores of Bowler's. That will be wicket score. '\n");
  printf("5. After that press any key to next step.\n");
  printf("6. Enter Batsman's names for First Team. Program will ask for just three player.\n");
  printf("7. Then program will ask you batsman's scores. Enter scores correctly.'\n");
  printf("8. Be careful with the points. Runs points should be 1, 4 and 6\n");
  printf("9. When done with First Team,press any key. Do the same process for Second Team.\n");
  printf("10. After all, program will display the total score in a table.\n\n\n");
  printf("BONUS : THAT PROGRAM CAN RECORD YOUR SCORES IN TXT FILE.\n\n");

  printf("\n\n\t\tPress any key to go back ...\t ");
  getch();
  system ("cls");
  main ();
}
//*****************************************************************************************************************************

