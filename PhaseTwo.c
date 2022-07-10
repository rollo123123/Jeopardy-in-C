/*
	COMPRO2 Jeopardy BACK-END Application
	SY, Nicolas
	VELARDE, Rollo
	S18A
	NOTE!! Goto label, break (except in switch), global variables, are not allowed. NOTE!!
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

typedef char string100[101];

typedef struct
{	
	string100 finJepQuestion;
	string100 finJepAnswer;
} final;

typedef struct
{
	string100 questions[5];
	string100 answer[5];
	string100 categname;
} structcategory;

typedef struct
{
	int catCtr;
	string100 gamename;
	final jeopardy[1];
	structcategory categories[4];
} game;

struct node
{
   game nGame;
   struct node *pLink;
};

typedef struct node structNodeType;
typedef structNodeType *ptrNode;

/* these are just some design functions to make the program aesthetically pleasing (hopefully) c: */

void
printjep()
{
	printf("___  _________     ___ _____ ___________  ___  ______________   __\n");
	printf("|  \\/  || ___ \\   |_  |  ___|  _  | ___ \\/ _ \\ | ___ \\  _  \\ \\ / /\n");
	printf("| .  . || |_/ /     | | |__ | | | | |_/ / /_\\ \\| |_/ / | | |\\ V / \n");
	printf("| |\\/| ||  __/      | |  __|| | | |  __/|  _  ||    /| | | | \\ /  \n");
	printf("| |  | || |     /\\__/ / |___\\ \\_/ / |   | | | || |\\ \\| |/ /  | |  \n");
	printf("\\_|  |_/\\_|     \\____/\\____/ \\___/\\_|   \\_| |_/\\_| \\_|___/   \\_/  \n\n");
}

void
printp1()
{
	printf("______ _   _   ___   _____ _____   _____ _   _  _____  ______ _   _ _   _ _____ _____ _____ _____ _   _  _____ \n");
	printf("| ___ \\ | | | / _ \\ /  ___|  ___| |  _  | \\ | ||  ___| |  ___| | | | \\ | /  __ \\_   _|_   _|  _  | \\ | |/  ___|\n");
	printf("| |_/ / |_| |/ /_\\ \\\\ `--.| |__   | | | |  \\| || |__   | |_  | | | |  \\| | /  \\/ | |   | | | | | |  \\| |\\ `--. \n");
	printf("|  __/|  _  ||  _  | `--. \\  __|  | | | | . ` ||  __|  |  _| | | | | . ` | |     | |   | | | | | | . ` | `--. \\\n");
	printf("| |   | | | || | | |/\\__/ / |___  \\ \\_/ / |\\  || |___  | |   | |_| | |\\  | \\__/\\ | |  _| |_\\ \\_/ / |\\  |/\\__/ /\n");
	printf("\\_|   \\_| |_/\\_| |_/\\____/\\____/   \\___/\\_| \\_/\\____/  \\_|    \\___/\\_| \\_/\\____/ \\_/  \\___/ \\___/\\_| \\_/\\____/  (^__^)V\n");	
}

void
printexit()
{
	printf(" _____ _   _   ___   _   _  _   __ __   _______ _   _   _ \n");
	printf("|_   _| | | | / _ \\ | \\ | || | / / \\ \\ / /  _  | | | | | |\n");
	printf("  | | | |_| |/ /_\\ \\|  \\| || |/ /   \\ V /| | | | | | | | |\n");
	printf("  | | |  _  ||  _  || . ` ||    \\    \\ / | | | | | | | | |\n");
	printf("  | | | | | || | | || |\\  || |\\  \\   | | \\ \\_/ / |_| | |_|\n");
	printf("  \\_/ \\_| |_/\\_| |_/\\_| \\_/\\_| \\_/   \\_/  \\___/ \\___/  (_)\n");
}

void
printgame()
{
	printf(" _____   ___  ___  ___ _____ _____ \n");
	printf("|  __ \\ / _ \\ |  \\/  ||  ___/  ___|\n");
	printf("| |  \\// /_\\ \\| .  . || |__ \\ `--. \n");
	printf("| | __ |  _  || |\\/| ||  __| `--. \\\n");
	printf("| |_\\ \\| | | || |  | || |___/\\__/ /\n");
	printf(" \\____/\\_| |_/\\_|  |_/\\____/\\____/ \n");
}

void
awit()
{
/*
Octave:				0 1 2 3 4 5 6 7

Note:
C         	16 33 65 131 262 523 1046 2093
C# 			17 35 69 139 277 554 1109 2217
D 			18 37 73 147 294 587 1175 2349
D# 			19 39 78 155 311 622 1244 2489
E 			21 41 82 165 330 659 1328 2637
F 			22 44 87 175 349 698 1397 2794
F# 			23 46 92 185 370 740 1480 2960
G 			24 49 98 196 392 784 1568 3136
G# 			26 52 104 208 415 831 1661 3322
A 			27 55 110 220 440 880 1760 3520
A# 			29 58 116 233 466 932 1865 3729
B 			31 62 123 245 494 988 1975 3951
*/	
	printf("WEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE\n\n");
	printf("                              .sssssssss.\n                        .sssssssssssssssssss\n                      sssssssssssssssssssssssss\n                     ssssssssssssssssssssssssssss\n                      @@sssssssssssssssssssssss@ss\n                      |s@@@@sssssssssssssss@@@@s|s\n               _______|sssss@@@@@sssss@@@@@sssss|s\n             /         sssssssss@sssss@sssssssss|s\n            /  .------+.ssssssss@sssss@ssssssss.|\n           /  /       |...sssssss@sss@sssssss...|\n          |  |        |.......sss@sss@ssss......|\n          |  |        |..........s@ss@sss.......|\n          |  |        |...........@ss@..........|\n           \\  \\       |............ss@..........|\n            \\  '------+...........ss@...........|\n             \\________ .........................|\n                      |.........................|\n                     /...........................\\\n                    |.............................|\n                       |.......................|\n                           |...............|\n");
	Beep(220, 290);
	Beep(245, 950);
	Beep(294, 290);
	Beep(392, 950);
	Beep(262, 290);
	Beep(245, 950);
	Beep(330, 290);
	Beep(494, 950);
	Beep(262, 290);
	Beep(245, 950);
	Beep(294, 290);
	Beep(392, 950);
	Beep(494, 290);
	Beep(494, 290);
	Beep(392, 290);
	Beep(392, 290);
	Beep(330, 290);
	Beep(311, 290);
	Beep(370, 290);
	Beep(440, 290);
	Beep(494, 290);
	Beep(392, 950);
	Beep(440, 290);
	Beep(494, 950);
	
	Beep(440, 250);
	Beep(415, 230);
}

//other functions

int
numValid(int x) //prevents user to enter <0 and >5 in the EDIT CATEGORY MENU ONLY (questions)
{
	if(x <= 0 || x >= 6){
	printf("\n");
	printf("ERROR: INVALID INPUT. PLEASE TRY AGAIN. \n\n");
	system("pause");
	system("cls");
	return 1;
	}
	
	return 0;
}

int
valid(string100 input) //prevents user to enter '\n'
{
	
	if(strlen(input) == 0)
	{
		printf("\n");
		printf("ERROR: INVALID INPUT. PLEASE TRY AGAIN. \n\n");
		system("pause");
		system("cls");
		return 1;
	}
	
	return 0;
}

int
dupeCateg(string100 categname, structcategory categarray[], int ctr) //checks if category already exists
{
	int i;
	
	for(i=0;i<ctr;i++){
	if(strcasecmp(categname, categarray[i].categname) == 0){
		printf("\n");
		printf("ERROR: CATEGORY ALREADY EXISTS. PLEASE TRY AGAIN.\n\n");
		system("pause");
		system("cls");
		return 1;
		}
	}
	return 0;
}

void
clear(void) //to fix \n problem; acts a buffer, a place where data is held until it is processed
{
  while ( getchar() != '\n' );
}

void
tempLow(string100 input, string100 low) //converts string characters to lowercase
{
	int i;
	int num = strlen(input);
	
	for(i=0;i<num;i++){
		
		if(input[i]>='A'&&input[i]<='Z')
			low[i] = input[i]+32;
		else
		low[i] = input[i];
		}
		low[num] = '\0';
}

void //removes the newline from a string (fgets)
chomp(char* string)
{
	int n = strlen(string) - 1;
	
	if( (*string && string[n] == '\n') )
		string[n] = '\0';
}

//Phase Two Functions

void
addGame(ptrNode *pGame) //Creates a game node
{
	ptrNode pNew, pRun;
	system("cls");
	
	pNew = malloc(sizeof(structNodeType));
	pNew->nGame.catCtr = 0;
	pNew->pLink = NULL;
	
	do{
	printf("Enter new Game Name: ");
		gets(pNew->nGame.gamename);
	}while(valid(pNew->nGame.gamename) != 0);
	
	if(*pGame == NULL) //Adds to the head of the list of games
		*pGame = pNew;
			
	else{	
		pRun = *pGame;
		while(pRun->pLink != NULL) //traverses the list and stops at the last game
			pRun = pRun->pLink; 
			pRun->pLink = pNew; //connect the last node to the new game
		}
		
	printf("\nGAME \"%s\" ADDED SUCCESSFULLY!\n\n", pNew->nGame.gamename);
	system("pause");
}

void
delGame(ptrNode *pGame) //Allows user to delete a node (game) from the linked list of games. (User enters a name and if found, it'll get deleted)
{
	ptrNode pRun, pTrail;
	string100 delGame;
	
	system("cls");
	
	if(*pGame == NULL)
		printf("ERROR: NO GAMES FOUND!\n\n");

	else if(*pGame != NULL){
	
	do{
	printf("Enter Game name to Delete: ");
		gets(delGame); //GET GAME NAME	
	}while(valid(delGame) != 0);
	
	
	if(strcasecmp(delGame, (*pGame)->nGame.gamename) == 0){ //deletes the head
    pRun = *pGame;
	*pGame = (*pGame)->pLink;
	free (pRun);
	printf("\nGAME \"%s\" SUCCESSFULLY DELETED!\n\n", delGame);
  	}

  	else{
	pRun = *pGame;
	while(strcasecmp(delGame, pRun->nGame.gamename) != 0 && pRun->pLink != NULL){
		pTrail = pRun;
		pRun = pRun->pLink;
	}
	
	if(strcasecmp(delGame, pRun->nGame.gamename) == 0){ //delete at the middle of the list or the end
		pTrail->pLink = pRun->pLink;
		free(pRun);
		printf("\nGAME \"%s\" SUCCESSFULLY DELETED!\n\n", delGame);
		}
	else{
		system("cls");
		printf("ERROR: GAME NOT FOUND!\n\n");
	}
   	
		}
  	}
	
	system("pause");
}

void
viewGame(ptrNode pGame) //Shows a list of games
{
	ptrNode pRun = pGame;
	int i = 1;
	
	system("cls");
	if(pGame == NULL)
	printf("ERROR: NO GAMES FOUND!\n\n");

	else{
	printgame();
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	while (pRun!=NULL)
	{
		printf("%d. %s\n", i, pRun->nGame.gamename);
		pRun = pRun->pLink;
		i++;
	}
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\n");
	}
	
}

ptrNode
selGame(ptrNode pGame) //Chooses the game that is currently active/selected. Once game is selected, Phase One will launch
{
	ptrNode pRun, pChosen = pGame;
	string100 sGame;
	system("cls");
	
	if(pGame == NULL)
		printf("ERROR: NO GAMES FOUND!\n\n");
	
	else if(pGame != NULL){
	
	do{
	viewGame(pGame);
	printf("Input Game name: ");
		gets(sGame); //GET GAME NAME	
	}while(valid(sGame)!=0);
		
	if(strcasecmp(sGame, pGame->nGame.gamename) == 0){ //selects the first game node
		pChosen = pGame;
		printf("\nGAME \"%s\" SUCCESSFULLY CHOSEN!\n\n", sGame);
	}
	
	else{
	pRun = pGame;
	while(strcasecmp(sGame, pRun->nGame.gamename) != 0 && pRun->pLink != NULL) //traverses list in order to compare each node
		pRun = pRun->pLink;
	
	if(strcasecmp(sGame, pRun->nGame.gamename) == 0){ //chooses whatever node
		pChosen = pRun;
	printf("\nGAME \"%s\" SUCCESSFULLY CHOSEN!\n\n", sGame);
	}
	
	else{
	system("cls");
	printf("ERROR: GAME NOT FOUND!\n\n");
		pChosen = NULL;
	}
		}
	
	}
	system("pause");
	return pChosen;
}

void
saveGame(ptrNode pGame) //Asks user for the game name and saves the contents of the node. Allows user to save a particular game to the text file
{
	ptrNode pSave, pRun;
	string100 svGame;
	int i;
	
	system("cls");
	if(pGame == NULL){
		printf("ERROR: NO GAMES FOUND!\n\n");
	system("pause");
	}
	
	else{
		
		do{
	printf("Enter Game name to save: ");
		gets(svGame); //GET GAME NAME	
	}while(valid(svGame) != 0);
	
	if(strcasecmp(svGame, pGame->nGame.gamename) == 0) //head is the game to be saved
    pSave = pGame;
	
	else{
		
	pRun = pGame;
	while(strcasecmp(svGame, pRun->nGame.gamename) != 0 && pRun->pLink != NULL)
		pRun = pRun->pLink;
  	
  	if(strcasecmp(svGame, pRun->nGame.gamename) == 0) //game to be saved is in the middle/end of the list
		pSave = pRun;
		
	else{
		system("cls");
	printf("ERROR: GAME NOT FOUND!\n\n");
	system("pause");
		}
	}

	if(pSave != NULL)
	{
		FILE *fcategories, *fjep, 
		*fcateg1a, *fcateg1q, //column1
		*fcateg2a, *fcateg2q, //column2
		*fcateg3a, *fcateg3q, //column3
		*fcateg4a, *fcateg4q; //column4
		
		fcategories = fopen("categories.txt", "w"); //write to categories.txt (CATEGORIES)
		for(i=0;i<pSave->nGame.catCtr;i++)
		fprintf(fcategories, "%s\n", pSave->nGame.categories[i].categname);
		fclose(fcategories);
		
		fjep = fopen("finalj.txt", "w"); //write to finalj.txt (FINAL JEOPARDY)
		fprintf(fcategories, "%s\n%s", pSave->nGame.jeopardy[0].finJepQuestion, pSave->nGame.jeopardy[0].finJepAnswer);
		fclose(fjep);
		
		fcateg1a = fopen("column1-answers.txt", "w"); //write to column#-answers.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
		for(i=0;i<5;i++)
		fprintf(fcateg1a,"%s\n", pSave->nGame.categories[0].answer[i]);
		fclose(fcateg1a);
		
		fcateg1q = fopen("column1-questions.txt", "w"); //write to column#-questions.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
		for(i=0;i<5;i++)
		fprintf(fcateg1q,"%s\n", pSave->nGame.categories[0].questions[i]);
		fclose(fcateg1q);
		
		fcateg2a = fopen("column2-answers.txt", "w"); //write to column#-answers.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
		for(i=0;i<5;i++)
		fprintf(fcateg2a,"%s\n", pSave->nGame.categories[1].answer[i]);
		fclose(fcateg2a);
		
		fcateg2q = fopen("column2-questions.txt", "w"); //write to column#-questions.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
		for(i=0;i<5;i++)
		fprintf(fcateg2q,"%s\n", pSave->nGame.categories[1].questions[i]);
		fclose(fcateg2q);
		
		fcateg3a = fopen("column3-answers.txt", "w"); //write to column#-answers.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
		for(i=0;i<5;i++)
		fprintf(fcateg3a,"%s\n", pSave->nGame.categories[2].answer[i]);
		fclose(fcateg3a);
		
		fcateg3q = fopen("column3-questions.txt", "w"); //write to column#-questions.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
		for(i=0;i<5;i++)
		fprintf(fcateg3q,"%s\n", pSave->nGame.categories[2].questions[i]);
		fclose(fcateg3q);
		
		fcateg4a = fopen("column4-answers.txt", "w"); //write to column#-answers.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
		for(i=0;i<5;i++)
		fprintf(fcateg4a,"%s\n", pSave->nGame.categories[3].answer[i]);
		fclose(fcateg4a);
		
		fcateg4q = fopen("column4-questions.txt", "w"); //write to column#-questions.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
		for(i=0;i<5;i++)
		fprintf(fcateg4q,"%s\n", pSave->nGame.categories[3].questions[i]);
		fclose(fcateg4q);
		
		printf("FILE CONTENTS SAVED!\n\n");
		system("pause");
		}
	}	
	
	
}

void
loadGame(ptrNode *pGame) //Asks user for txt file and then adds the game to the lists of games
{
	int i, t = 0;
	ptrNode pNew, pRun;
	
	FILE *fcategories, *fjep, 
		*fcateg1a, *fcateg1q, //column1
		*fcateg2a, *fcateg2q, //column2
		*fcateg3a, *fcateg3q, //column3
		*fcateg4a, *fcateg4q; //column4
		
		system("cls");
		
		pNew = malloc(sizeof(structNodeType));
	
		do{
		printf("Enter new Game Name: ");
		gets(pNew->nGame.gamename);
		}while(valid(pNew->nGame.gamename) != 0);
		pNew->pLink = NULL;
		
		if(*pGame == NULL) //Adds to the head of the list of games
		*pGame = pNew;
			
	else{	
		pRun = *pGame;
		while(pRun->pLink != NULL) //traverses the list and stops at the last game
			pRun = pRun->pLink; 
			pRun->pLink = pNew; //connect the last node to the new game
		}
		
		//LOADING
	
		if( (fcategories = fopen("categories.txt", "r")) == NULL){
			printf("\nERROR: \"categories.txt\" NOT FOUND!\n");
			t++;	
		}
		
		else{
			string100 temp; // stores the temporary string
			fcategories = fopen("categories.txt", "r"); //read categories.txt (CATEGORIES)
			pNew->nGame.catCtr = 4;
			for(i=0;i<4;i++){
				strcpy(temp, fgets(pNew->nGame.categories[i].categname, 100, fcategories));
				chomp(temp);
				strcpy(pNew->nGame.categories[i].categname, temp); // inputs the new string without the newline
			}
			fclose(fcategories);
		}
		
		if( (fjep = fopen("finalj.txt", "r")) == NULL){
			printf("\nERROR: \"finalj.txt\" NOT FOUND!\n");
			t++;
		}
		
		else{
			string100 temp; // stores temporary string
			
			fjep = fopen("finalj.txt", "r"); //read finalj.txt (FINAL JEOPARDY)
			
			strcpy(temp, fgets(pNew->nGame.jeopardy[0].finJepQuestion, 100, fjep));
				chomp(temp);
			strcpy(pNew->nGame.jeopardy[0].finJepQuestion, temp);
			
			strcpy(temp, fgets(pNew->nGame.jeopardy[0].finJepAnswer, 100, fjep));
				chomp(temp);
			strcpy(pNew->nGame.jeopardy[0].finJepAnswer, temp); // inputs the new string without the newline
			
			fclose(fjep);	
		}
		
		if( (fcateg1a = fopen("column1-answers.txt", "r")) == NULL){
			printf("\nERROR: \"column1-answers.txt\" NOT FOUND!\n");
			t++;
		}
			
		else{
			string100 temp; // stores the temporary string
			fcateg1a = fopen("column1-answers.txt", "r"); //read column#-answers.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
			for(i=0;i<5;i++){
				strcpy(temp, fgets(pNew->nGame.categories[0].answer[i], 100, fcateg1a));
				chomp(temp);
				strcpy(pNew->nGame.categories[0].answer[i], temp);
			}
			fclose(fcateg1a);	
		}
		
		if( (fcateg1q = fopen("column1-questions.txt", "r")) == NULL){
			printf("\nERROR: \"column1-questions.txt\" NOT FOUND!\n");
			t++;
		}
			
		else{
			string100 temp; // stores the temporary string
			fcateg1q = fopen("column1-questions.txt", "r"); //read column#-questions.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
			for(i=0;i<5;i++){
				strcpy(temp, fgets(pNew->nGame.categories[0].questions[i], 100, fcateg1q));
				chomp(temp);
				strcpy(pNew->nGame.categories[0].questions[i], temp); // inputs the new string without the newline
			}
			fclose(fcateg1q);
		}
		
		
		if( (fcateg2a = fopen("column2-answers.txt", "r")) == NULL){
			printf("\nERROR: \"column2-answers.txt\" NOT FOUND!\n");
			t++;
		}
			
		else{
			string100 temp; // stores the temporary string
			fcateg2a = fopen("column2-answers.txt", "r"); //read column#-answers.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
			for(i=0;i<5;i++){
				strcpy(temp, fgets(pNew->nGame.categories[1].answer[i], 100, fcateg2a));
				chomp(temp);
				strcpy(pNew->nGame.categories[1].answer[i], temp); // inputs the new string without the newline
			}
			fclose(fcateg2a);
		}
		
		if( (fcateg2q = fopen("column2-questions.txt", "r")) == NULL){
			printf("\nERROR: \"column2-questions.txt\" NOT FOUND!\n");
			t++;
		}
			
		else{
			string100 temp; // stores the temporary string
			fcateg2q = fopen("column2-questions.txt", "r"); //read column#-questions.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
			for(i=0;i<5;i++){
				strcpy(temp, fgets(pNew->nGame.categories[1].questions[i], 100, fcateg2q));
				chomp(temp);
				strcpy(pNew->nGame.categories[1].questions[i], temp); // inputs the new string without the newline
			}
			
			fclose(fcateg2q);	
		}
		
		if( (fcateg3a = fopen("column3-answers.txt", "r")) == NULL){
			printf("\nERROR: \"column3-answers.txt\" NOT FOUND!\n");
			t++;
		}

		else{
			string100 temp; // stores the temporary string
			fcateg3a = fopen("column3-answers.txt", "r"); //read column#-answers.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
			for(i=0;i<5;i++){
				strcpy(temp, fgets(pNew->nGame.categories[2].answer[i], 100, fcateg3a));
				chomp(temp);
				strcpy(pNew->nGame.categories[2].answer[i], temp); // inputs the new string without the newline
			}
			fclose(fcateg3a);	
		}
		
		if( (fcateg3q = fopen("column3-questions.txt", "r")) == NULL){
			printf("\nERROR: \"column3-questions.txt\" NOT FOUND!\n");
			t++;
		}
			
		else{
			string100 temp; // stores the temporary string
			fcateg3q = fopen("column3-questions.txt", "r"); //read column#-questions.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
			for(i=0;i<5;i++){
				strcpy(temp, fgets(pNew->nGame.categories[2].questions[i], 100, fcateg3q));
				chomp(temp);
				strcpy(pNew->nGame.categories[2].questions[i], temp); // inputs the new string without the newline
			}
			fclose(fcateg3q);	
		}
		
		if( (fcateg4a = fopen("column4-answers.txt", "r")) == NULL){
			printf("\nERROR: \"column4-answers.txt\" NOT FOUND!\n");
			t++;
		}
			
		else{
			string100 temp; // stores the temporary string
			fcateg4a = fopen("column4-answers.txt", "r"); //read column#-answers.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
			for(i=0;i<5;i++){
				strcpy(temp, fgets(pNew->nGame.categories[3].answer[i], 100, fcateg4a));
				chomp(temp);
				strcpy(pNew->nGame.categories[3].answer[i], temp); // inputs the new string without the newline
			}
			fclose(fcateg4a);
		}
		
		if( (fcateg4q = fopen("column4-questions.txt", "r")) == NULL){
			printf("\nERROR: \"column4-questions.txt\" NOT FOUND!\n");
			t++;
		}
		
		else{
		string100 temp; // stores the temporary string
		fcateg4q = fopen("column4-questions.txt", "r"); //read column#-questions.txt (ALL ANSWERS OF A CERTAIN CATEG NUMBER)
			for(i=0;i<5;i++){
				strcpy(temp, fgets(pNew->nGame.categories[3].questions[i], 100, fcateg4q));
				chomp(temp);
				strcpy(pNew->nGame.categories[3].questions[i], temp); // inputs the new string without the newline
			}
		fclose(fcateg4q);
		}
		
		if(t == 0)
		printf("\nFILE CONTENTS LOADED TO GAME \"%s\" SUCCESSFULLY!\n\n", pNew->nGame.gamename);
		else if(t == 10)
		printf("\nNO FILES LOADED TO GAME \"%s\"!\n\n", pNew->nGame.gamename);
		
		else
		printf("\nLISTED ABOVE ARE THE MISSING FILES\n\nSOME FILE CONTENTS LOADED TO GAME \"%s\" SUCCESSFULLY!\n\n", pNew->nGame.gamename);
		
		system("pause");
}

void
fMenu() //Prints File processing menu
{
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("What do you want to do?\n\n");
		printf("1. Save Game contents\n");
		printf("2. Load Game contents\n");
		printf("3. Exit to Main Menu\n");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void
fProcess(ptrNode *pGame) //File processing (output/input text files)
{
	system("cls");
	
	int choice;
	ptrNode pSave;
	
	pSave = *pGame;
	
	do{
		system("cls");
		fMenu();
		printf("Enter Choice: ");
		scanf("%d", &choice);
		clear();
		
	switch(choice){
		case 1					:	saveGame(pSave);
									break;
		case 2					:	loadGame(pGame);
									break;		
		case 3					:	break;								
		default					: 	printf("Please enter a valid number!\n");
									system("pause");
									break;
					}

		}while(choice != 3);
	
}

void
exitprog(void) //Exits the program
{
	int i;
	system("cls");
	printexit();
	printf("\n\nPROGRAM WILL NOW EXIT.\n\n");
	system("pause");
	system("cls");	
	for(i=0;i<1000;i++)
		printf("BALLMER PEAK BALLMER PEAK BALLMER PEAK BALLMER PEAK BALLMER PEAK");
	system("cls");	
	awit();
	
}

void      
phaseTwo(ptrNode pGame) //Prints choices for phase two; displays current game as well.
{	
	printjep();
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
		printf("[A]dd Game\n");
		printf("[D]elete Game\n");
		printf("[S]elect Game\n");
		printf("[V]iew Games\n");
		printf("[P]hase One (1) Functions\n");
		printf("[F]ile Processing\n");
		printf("[E]xit\n");
	if(pGame == NULL)
	printf(">>>Current Game Selected: (NO GAME SELECTED)\n");
	else	
	printf(">>>Current Game Selected: %s\n", pGame->nGame.gamename);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

//Phase One Functions

void
phaseOne() //Prints Phase One menu choices
{
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\n");
		printf("1. Add Category\n");
		printf("2. Delete Category\n");
		printf("3. Edit Category\n");
		printf("4. Edit Final Jeopardy\n");
		printf("5. View by Category\n");
		printf("6. View by Value\n");
		printf("7. Search\n");
		printf("8. Exit to Main Menu\n");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
}

void
editMenu() //Prints edit menu choices
{
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("What do you want to change?\n\n");
		printf("1. Category Name\n");
		printf("2. Question and Answer\n");
		printf("3. Exit to Phase One menu\n");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void
addCateg(structcategory categarray[], int* ctr) //Allows user to add a new category to the game, assuming categories < 4. User inputs the category name and 5 questions and 5 answers
{
	int i;
	system("cls");
	
	if(*ctr<4){
	
		do{
		printf("Input the name of Category: ");
		gets(categarray[*ctr].categname);
		}while(valid(categarray[*ctr].categname) != 0 || dupeCateg(categarray[*ctr].categname, categarray, *ctr) != 0); //invalid input

	for(i=0;i<5;i++){

	do{
	printf("Value %d\n", (i + 1) * 100);
	printf("Enter Question %d: ", i+1);
	gets(categarray[*ctr].questions[i]);
	}while(valid(categarray[*ctr].questions[i]) != 0);
			
	do{
	printf("Enter Answer %d: ", i + 1);
	gets(categarray[*ctr].answer[i]);
	}while(valid(categarray[*ctr].answer[i]) != 0);
	printf("\n\n");	
				}
	(*ctr)++; //adds to the number of categories
	printf("CATEGORY ACCEPTED!\n\n");
	system("pause");
	}
	
	else{
	printf("ERROR: YOU ALREADY HAVE FOUR(4) CATEGORIES!\n\n");
	system("pause");
	}
	
}

void
delCateg(structcategory categarray[], int* ctr) //This function will ask for the category name. Displays "not found" if it does not exist. If it does exist, it'll get deleted
{
	int i, j, found = 0;
	string100 delCateg;
	
	if(*ctr>0 && *ctr<5){
	system("cls");
	do{
	printf("Input Category name to delete: ");
		gets(delCateg);
	}while(valid(delCateg) != 0);
	
	for(i=0; i<*ctr; i++){
		
	if(!(strcasecmp(delCateg, categarray[i].categname))){ // compares the inputted string to each of the categs. strcasecmp is used to make it case insensitive
		found++;
			for(j=i; j<*ctr-1; j++){
			categarray[j] = categarray[j+1];
				}
		(*ctr)--; //deletes from the number of categories
		printf("CATEGORY \"%s\" SUCCESSFULLY DELETED!\n\n", delCateg);
		system("pause");
		}
	}
	if(found == 0){
		printf("ERROR: CATEGORY NOT FOUND!\n\n");
		system("pause");
		}
	}
	
	else{
	system("cls");
	printf("ERROR: NO CATEGORIES TO DELETE!\n\n");
	system("pause");
	}
		
}

void
editCateg(structcategory categarray[], int ctr) //Asks the user for the category name and the attributes he/she wants to change. Would ask question number if question will be edited
{
	int i, nQ, choice, found = 0;
	string100 edCateg;
	
	if(ctr>0 && ctr<5){
	system("cls");
	do{
	printf("Input Category to edit: ");
		gets(edCateg);
	}while(valid(edCateg) != 0);
	
	for(i=0; i<ctr; i++){
		
	if(!(strcasecmp(edCateg, categarray[i].categname))){ // compares the inputted string to each of the categs. ! is used because strcasecmp returns 0 if true; strcasecmp is used to make it case insensitive
		found++;
	do{
		system("cls");
		editMenu();
		printf("Enter Choice: ");
		scanf("%d", &choice);
		clear();
		printf("\n");

	switch(choice){
		case 1					:	system("cls");
		
									do{
									printf("Input new Category Name: ");
									gets(categarray[i].categname);
									}while(valid(categarray[i].categname) != 0);
									
									printf("CATEGORY NAME SUCCESSFULLY CHANGED!\n\n");
									system("pause");
									break; 
		case 2					:	system("cls");
									do{
									printf("Input Question number: ");
									scanf("%d", &nQ);
									clear();
									}while(numValid(nQ) != 0);
									
									do{
									printf("\nInput new Question: ");
									gets(categarray[i].questions[nQ-1]);
									}while(valid(categarray[i].questions[nQ-1]) != 0);
									
									printf("QUESTION %d SUCCESSFULLY CHANGED!\n\n", nQ);
									system("pause");
									system("cls");
									do{
									printf("Input new Answer for Question %d: ", nQ);
									gets(categarray[i].answer[nQ-1]);
									}while(valid(categarray[i].answer[nQ-1]) != 0);
									
									printf("ANSWER %d SUCCESSFULLY CHANGED!\n\n", nQ);
									system("pause");
									break;						
		case 3					:	system("cls");
									printf("Will now move to Phase One functions.\n\n");
									system("pause");
									break;								
		default					: 	printf("Please enter a valid number!\n");
									system("pause");
									break;
					}
	
		}while(choice != 3);
			} 
		}
		
	if(found == 0){
		printf("ERROR: CATEGORY NOT FOUND!\n\n");
		system("pause");
		}
	}
	
	else{
		system("cls");
		printf("ERROR: NO CATEGORIES TO EDIT!\n\n");
		system("pause");
	}	

}

void
editFinJep(final fJep[]) //Edits the final jeopardy Question and Answer
{
	system("cls");	
	printf("CURRENT FINAL JEOPARDY QUESTION: %s\n", fJep[0].finJepQuestion);
	printf("CURRENT FINAL JEOPARDY ANSWER: %s\n", fJep[0].finJepAnswer);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("EDIT FINAL JEOPARDY QUESTION AND ANSWER\n\n");
	
	do{
	printf("Input Final Jeopardy Question: ");
	gets(fJep[0].finJepQuestion);
	}while(valid(fJep[0].finJepQuestion) != 0);
	printf("\n");
	
	do{
	printf("Input Final Jeopardy Answer: ");
	gets(fJep[0].finJepAnswer);
	}while(valid(fJep[0].finJepAnswer) != 0);
	
	printf("\n\n");
	printf("FINAL JEOPARDY QUESTION AND ANSWER ACCEPTED!\n");
	printf("\n\n");
	system("pause");
}

void
search(structcategory categarray[], int ctr) //Allows user to enter a keyword and will display all the questions that contain the substring
{
	int i, j, found = 0;
	string100 key, tempstring, tempkey;
	
	if(ctr>0&&ctr<5){
	system("cls");
	do{
	printf("Input keyword: ");
		gets(key);
	}while(valid(key) != 0);
	system("cls");
	
	tempLow(key, tempkey); //converts key to make it case insensitive
	printf("Questions that contain the substring \"%s\"\n", key);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
		
	for(i=0;i<ctr;i++){
		for(j=0;j<5;j++){
			tempLow(categarray[i].questions[j], tempstring); //converts question string to lowercase in order for strstr to be case insensitive
			if(strstr(tempstring, tempkey)){
				found++;
				printf("Question %d of the Category \"%s\":\n%s\n\n", j+1,categarray[i].categname, categarray[i].questions[j]);
				}
			} //j
			
		} //i
		
			if(found == 0)
		printf("KEYWORD NOT IN ANY OF THE QUESTIONS!\n\n");
		
		system("pause");
	}

	else{
	system("cls");
	printf("ERROR: NO CATEGORIES TO SEARCH!\n\n");
	system("pause");
	}
}

void
viewCateg(structcategory categarray[], int ctr) //Shows all questions (including details) by Category
{
    int i, j;
	system("cls");
	if(ctr > 0 && ctr < 5){
	
	printf("\t\t\t\t\t\t   !ALL CATEGORIES!\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	for(i=0; i<ctr; i++){
	printf("CATEGORY NAME: ");
	printf("%s \n", categarray[i].categname);
	printf("\n");

		for(j=0; j<5; j++){
		printf("Value of Question: %d\n", (j+1) * 100);
		printf("Question %d: %s\n", j+1, categarray[i].questions[j]);
		printf("Answer of Question %d: %s\n\n", j+1, categarray[i].answer[j]);
		printf("\n");
		}
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	}
		system("pause");
	}
	
	else{
		system("cls");
		printf("ERROR: NO CATEGORIES TO DISPLAY!\n\n");
		system("pause");
		}
}

void
viewVal(structcategory categarray[], int ctr) //Shows all questions sorted according to the Value. (Shows category name as well)
{
	int i, j;
	if(ctr > 0 && ctr < 5){
	system("cls");
	printf("\t\t\t\t\t!ALL QUESTIONS ACCORDING TO VALUE!\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	for (i = 0; i < 5; i++){
		printf("Value of Question: %d \n\n", (i + 1) * 100);
		
		for (j = 0; j < ctr; j++){
			printf("Category Name: %s \n", categarray[j].categname);
			printf("Question %d: %s \n", i+1, categarray[j].questions[i]);
			printf("Answer %d: %s \n", i+1, categarray[j].answer[i]);
			printf("\n");
		}
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	}
	
	system("pause");
 	}
 	else{
 		system("cls");
		printf("ERROR: NO CATEGORIES TO DISPLAY!\n\n");
		system("pause");
		}
}

//menu initialization

void
initPhase(ptrNode pGame) //Initializes Phase One Menu
{
	int choice;
	
	do{
	system("cls");
	printp1();
	phaseOne();
	
	
	printf("Enter Choice: ");
		scanf("%d", &choice);
		clear();
		printf("\n");
		
	switch(choice){
		case 1					:	addCateg(pGame->nGame.categories, &pGame->nGame.catCtr);
									break; 
		case 2					:	delCateg(pGame->nGame.categories, &pGame->nGame.catCtr);
									break;
		case 3					:	editCateg(pGame->nGame.categories, pGame->nGame.catCtr);
									break;
		case 4					:	editFinJep(pGame->nGame.jeopardy);
									break;
		case 5					:	viewCateg(pGame->nGame.categories, pGame->nGame.catCtr);
									break;
		case 6					:	viewVal(pGame->nGame.categories, pGame->nGame.catCtr);
									break;
		case 7					:	search(pGame->nGame.categories, pGame->nGame.catCtr);
									break;
		case 8					:	break;			
		default					: 	printf("ERROR: PLEASE ENTER A VALID NUMBER!\n\n\n");
									system("pause");
									break;
	}
		}while(choice != 8);
}

void
initP2(ptrNode pGame) //Initializes Phase Two menu
{
	ptrNode sGame = NULL;
	int i = 1;
	char c;
	
	do{
	system("cls");
	
	phaseTwo(sGame);
	
	printf("Enter Choice: ");
	scanf("%c", &c);
	clear();
	
	switch(c){
		case 'A': case 'a'  :	addGame(&pGame);
								break; 
		case 'D': case 'd'  :	delGame(&pGame);
								break;
		case 'S': case 's'  :	sGame = selGame(pGame);
								break; 
		case 'V': case 'v'	:	viewGame(pGame);
								system("pause");
								break;
		case 'P': case 'p'	:	if(sGame == NULL){
								system("cls");
								printf("ERROR: NO GAME SELECTED!\n\n");
								system("pause");
								}
								else
								initPhase(sGame);
								break;
		case 'F': case'f'	:	fProcess(&pGame);
								break;
		case 'E': case 'e'	:	exitprog();
								i = 0;
								break;	
		default				: 	printf("Please enter a valid letter. Press any key to continue.\n\n\n");
								system("pause");
								break;
	}
		}while(i);

}

int
main()
{
	ptrNode pGame = NULL; //initializes the linked list
	initP2(pGame);
	return 0;
}
