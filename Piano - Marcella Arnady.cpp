//MARCELLA ARNADY LG01 2440013001
#include<stdio.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>
#include <unistd.h>

struct pianoplay {
	char notes;
}data[5000];

void menu();

void imageone(){
	printf("\t\t\t\t\tPIANO IN C PROGRAM\n");
	printf("\t\t\t\t    Created by Marcella Arnady\n");
	printf("\t _______________________________________________________________________________\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     | W |   | E |     |     | T |   | Y |   | U |     |     | O |   | P |     |\n");
	printf("\t|     |___|   |___|     |     |___|   |___|   |___|     |     |___|   |___|     |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |   ;   |\n");
	printf("\t|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|\n");
}

void image(){
	printf("\t\t\t\t\tPIANO IN C PROGRAM\n");
	printf("Do in C Major\n\n");
	printf("Do = A / K\t");
	printf("Di = W / O\n");
	printf("Re = S / L\t");
	printf("Ri = E / P\n");
	printf("Mi = D / ;\n");
	printf("Fa = F    \t");
	printf("Fi = T\n");
	printf("Sol = G   \t");
	printf("Sel = Y\n");
	printf("La = H    \t");
	printf("Le = U\n");
	printf("Si = J\n\n");
	printf("\t _______________________________________________________________________________\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     | W |   | E |     |     | T |   | Y |   | U |     |     | O |   | P |     |\n");
	printf("\t|     |___|   |___|     |     |___|   |___|   |___|     |     |___|   |___|     |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |   ;   |\n");
	printf("\t|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|\n");
	
	printf("\nNote: Press X and enter if you want to go back to menu\n\n");
}

void images(){
	printf("\t\t\t\t\tPIANO IN C PROGRAM\n");
	printf("Do in C Major\n\n");
	printf("Do = A / K\t");
	printf("Di = W / O\n");
	printf("Re = S / L\t");
	printf("Ri = E / P\n");
	printf("Mi = D / ;\n");
	printf("Fa = F    \t");
	printf("Fi = T\n");
	printf("Sol = G   \t");
	printf("Sel = Y\n");
	printf("La = H    \t");
	printf("Le = U\n");
	printf("Si = J\n\n");
	printf("\t _______________________________________________________________________________\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     |   |   |   |     |     |   |   |   |   |   |     |     |   |   |   |     |\n");
	printf("\t|     | W |   | E |     |     | T |   | Y |   | U |     |     | O |   | P |     |\n");
	printf("\t|     |___|   |___|     |     |___|   |___|   |___|     |     |___|   |___|     |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|       |       |       |       |       |       |       |       |       |       |\n");
	printf("\t|   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |   ;   |\n");
	printf("\t|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|\n\n\n");
	
	printf("\nNote: Press X and enter if you have finished recording\n\n");
}

void piano(){
	for(int n=0;n<5000;n++){
		image();
		
		printf("Input note: ");
		char note = getchar();
		//Do
		if(note == 'a' || note == 'A'){
			Beep(262,500);
	
		}//Re
		if(note == 's' || note == 'S'){
		   Beep(294,500);
		 
		}//Mi
		if(note == 'd' || note == 'D'){
		    Beep(330,500);
		 
		}//Fa
		if(note == 'f' || note == 'F'){
		    Beep(349,500);
	
		}//Sol
		if(note == 'g' || note == 'G'){
		    Beep(392,500);
		
		}//La
		if(note == 'h' || note == 'H'){
		    Beep(440,500);
	
		}//Si
		if(note == 'j' || note == 'J'){
		    Beep(494,500);
		
		}//Do                      
		if(note == 'k' || note == 'K'){
		    Beep(523,500);
		
		}//Re                      
		if(note == 'l' || note == 'L'){
		    Beep(587,500);

		}//Di
		if(note == 'w' || note == 'W'){
		    Beep(277,500);
	
		}//Ri
		if(note == 'e' || note == 'E'){
		    Beep(311,500);

		}//Fi
		if(note == 't' || note == 'T'){
		    Beep(370,500);

		}//Sel
		if(note == 'y' || note == 'Y'){
		    Beep(415,500);

		}//Le
		if(note == 'u' || note == 'U'){
		    Beep(466,500);

		}//Di                                            
		if(note == 'o' || note == 'O'){
		    Beep(544,500);

		}//Ri
		if(note == 'p' || note == 'P'){
		    Beep(622,500);
	
		}//Mi
		if(note == ';'){
		    Beep(659,500);
		    
		} if(note == 'x' || note == 'X'){
			menu();
			break;
		} system("cls");
	} 
}


void song(){
	system("cls");
	printf("\nChoose One Song\n\n");
	printf("1. Twinkle Twinkle Little Star\n");
	printf("2. Mary Had A Little Lamb\n");
	printf("3. Happy Birthday\n");
	printf("4. Jingle Bells\n");
	printf("5. Back to Menu\n");
	printf("Input choice : ");
	int choice;
	scanf("%d",&choice);
	
	switch(choice){
		case 1://Twinkle
			system("cls");
			printf("\n\n");
			printf("\tPlaying TWINKLE TWINKLE ...");
			Beep(262,500);//1
			Beep(262,500);//1
			Beep(392,500);//5
			Beep(392,500);//5
			Beep(440,500);//6
			Beep(440,500);//6
			Beep(392,800);//5
			
			Beep(349,500);//4
			Beep(349,500);//4
			Beep(330,500);//3
			Beep(330,500);//3
			Beep(294,500);//2
			Beep(294,500);//2
			Beep(262,800);//1
			
			Beep(392,500);//5
			Beep(392,500);//5
			Beep(349,500);//4
			Beep(349,500);//4
			Beep(330,500);//3
			Beep(330,500);//3
			Beep(294,800);//2
			
			Beep(392,500);//5
			Beep(392,500);//5
			Beep(349,500);//4
			Beep(349,500);//4
			Beep(330,500);//3
			Beep(330,500);//3
			Beep(294,800);//2
			
			Beep(262,500);//1
			Beep(262,500);//1
			Beep(392,500);//5
			Beep(392,500);//5
			Beep(440,500);//6
			Beep(440,500);//6
			Beep(392,800);//5
			
			Beep(349,500);//4
			Beep(349,500);//4
			Beep(330,500);//3
			Beep(330,500);//3
			Beep(294,500);//2
			Beep(294,500);//2
			Beep(262,900);//1
			song();
			break;
		case 2://Mary had a little lamb
			system("cls");
			printf("\n\n");
			printf("\tPlaying MARY HAD A LITTLE LAMB ...");
			Beep(330,500);//3
			Beep(294,250);//2
			Beep(262,400);//1
			Beep(294,400);//2
			Beep(330,500);//3
			Beep(330,500);//3
			Beep(330,800);//3
			
			Beep(294,500);//2
			Beep(294,500);//2
			Beep(294,700);//2
			Beep(330,500);//3
			Beep(392,500);//5
			Beep(392,800);//5
			
			Beep(330,500);//3
			Beep(294,250);//2
			Beep(262,400);//1
			Beep(294,400);//2
			Beep(330,500);//3
			Beep(330,500);//3
			Beep(330,800);//3
			
			Beep(294,500);//2
			Beep(294,500);//2
			Beep(330,500);//3
			Beep(294,500);//2
			Beep(262,900);//1
			song();
			break;
		case 3://Happy Bday
			system("cls");
			printf("\n\n");
			printf("\tPlaying HAPPY BIRTHDAY ...");
			Beep(262,300);//1
			Beep(262,400);//1
			Beep(294,800);//2
			Beep(262,500);//1
			Beep(349,500);//4
			Beep(330,1000);//3
			
			Beep(262,300);//1
			Beep(262,400);//1
			Beep(294,800);//2
			Beep(262,500);//1
			Beep(392,500);//5
			Beep(349,1000);//4
			
			Beep(262,400);//1
			Beep(262,400);//1
			Beep(523,900);//1
			Beep(440,500);//6
			Beep(349,500);//4
			Beep(330,800);//3
			Beep(294,1000);//2
			
			Beep(466,300);//7b
			Beep(466,500);//7b
			Beep(440,900);//6
			Beep(349,500);//4
			Beep(392,500);//5
			Beep(349,1100);//4
			song();
			break;
		case 4://Jingle Bells
			system("cls");
			printf("\n\n");
			printf("\tPlaying JINGLE BELLS ...");
    
			Beep(330,350);//3
			Beep(330,350);//3
			Beep(330,700);//3
			
			Beep(330,350);//3
			Beep(330,350);//3
			Beep(330,700);//3
			
			Beep(330,400);//3
			Beep(392,400);//5
			Beep(262,400);//1
			Beep(294,400);//2
			Beep(330,1100);//3
			
			Beep(349,400);//4
			Beep(349,400);//4
			Beep(349,700);//4
			Beep(330,400);//3
			Beep(330,400);//3
			Beep(330,600);//3
			
			Beep(294,400);//2
			Beep(294,400);//2
			Beep(294,400);//2
			Beep(330,400);//3
			Beep(294,700);//2
			Beep(392,800);//5
			
			Beep(330,350);//3
			Beep(330,350);//3
			Beep(330,700);//3
			
			Beep(330,350);//3
			Beep(330,350);//3
			Beep(330,700);//3
			
			Beep(330,400);//3
			Beep(392,400);//5
			Beep(262,400);//1
			Beep(294,400);//2
			Beep(330,1100);//3
			
			Beep(349,400);//4
			Beep(349,400);//4
			Beep(349,700);//4
			
			Beep(330,400);//3
			Beep(330,400);//3
			Beep(330,700);//3
			
			Beep(392,400);//5
			Beep(392,400);//5
			Beep(349,400);//4
			Beep(294,400);//2
			Beep(262,1000);//1
			song();
			break;
		case 5:
			menu();	
	}
}

void record(){
	
	FILE *fp = fopen("Record.txt","a+");
	printf("\t\t\tRecording Your Piano\n\n");
	for(int n=0;n<5000;n++){
		images();
		printf("Input note: ");
		scanf("%c",&data[n].notes);
		
		//Do
		if(data[n].notes == 'a' || data[n].notes == 'A'){
			Beep(262,500);
			fprintf(fp,"%c",data[n].notes);
	
		}//Re
		if(data[n].notes == 's' || data[n].notes == 'S'){
		   Beep(294,500);
		   fprintf(fp,"%c",data[n].notes);
		 
		}//Mi
		if(data[n].notes == 'd' || data[n].notes == 'D'){
		    Beep(330,500);
		    fprintf(fp,"%c",data[n].notes);
		 
		}//Fa
		if(data[n].notes == 'f' || data[n].notes == 'F'){
		    Beep(349,500);
		    fprintf(fp,"%c",data[n].notes);
	
		}//Sol
		if(data[n].notes == 'g' || data[n].notes == 'G'){
		    Beep(392,500);
		    fprintf(fp,"%c",data[n].notes);
		
		}//La
		if(data[n].notes == 'h' || data[n].notes == 'H'){
		    Beep(440,500);
		    fprintf(fp,"%c",data[n].notes);
	
		}//Si
		if(data[n].notes == 'j' || data[n].notes == 'J'){
		    Beep(494,500);
		    fprintf(fp,"%c",data[n].notes);
		
		}//Do                      
		if(data[n].notes == 'k' || data[n].notes == 'K'){
		    Beep(523,500);
		    fprintf(fp,"%c",data[n].notes);
		
		}//Re                      
		if(data[n].notes == 'l' || data[n].notes == 'L'){
		    Beep(587,500);
		    fprintf(fp,"%c",data[n].notes);

		}//Di
		if(data[n].notes == 'w' || data[n].notes == 'W'){
		    Beep(277,500);
		    fprintf(fp,"%c",data[n].notes);
	
		}//Ri
		if(data[n].notes == 'e' || data[n].notes == 'E'){
		    Beep(311,500);
		    fprintf(fp,"%c",data[n].notes);

		}//Fi
		if(data[n].notes == 't' || data[n].notes == 'T'){
		    Beep(370,500);
		    fprintf(fp,"%c",data[n].notes);

		}//Sel
		if(data[n].notes == 'y' || data[n].notes == 'Y'){
		    Beep(415,500);
		    fprintf(fp,"%c",data[n].notes);

		}//Le
		if(data[n].notes == 'u' || data[n].notes== 'U'){
		    Beep(466,500);
		    fprintf(fp,"%c",data[n].notes);

		}//Di                                            
		if(data[n].notes == 'o' || data[n].notes == 'O'){
		    Beep(544,500);
		    fprintf(fp,"%c",data[n].notes);

		}//Ri
		if(data[n].notes == 'p' || data[n].notes == 'P'){
		    Beep(622,500);
		    fprintf(fp,"%c",data[n].notes);
	
		}//Mi
		if(data[n].notes == ';'){
		    Beep(659,500);
		    fprintf(fp,"%c",data[n].notes);
		    
		}if(data[n].notes == 'x' || data[n].notes == 'X'){
			break;
			return;
		}system("cls");
	}
	fclose(fp);
}

void playrecording(int n){
	system("cls");
	for(int i=0;i<n;i++){
		imageone();
		
		//Do
		if(data[i].notes == 'a' || data[i].notes == 'A'){
			Beep(262,500);
			
	
		}//Re
		if(data[i].notes == 's' || data[i].notes == 'S'){
		   Beep(294,500);
		   
		 
		}//Mi
		if(data[i].notes == 'd' || data[i].notes == 'D'){
		    Beep(330,500);
		    
		 
		}//Fa
		if(data[i].notes == 'f' || data[i].notes == 'F'){
		    Beep(349,500);
		   
	
		}//Sol
		if(data[i].notes == 'g' || data[i].notes == 'G'){
		    Beep(392,500);
		    
		
		}//La
		if(data[i].notes == 'h' || data[i].notes == 'H'){
		    Beep(440,500);
		    
	
		}//Si
		if(data[i].notes == 'j' || data[i].notes == 'J'){
		    Beep(494,500);
		    
		
		}//Do                      
		if(data[i].notes == 'k' || data[i].notes == 'K'){
		    Beep(523,500);
		    
		
		}//Re                      
		if(data[i].notes == 'l' || data[i].notes == 'L'){
		    Beep(587,500);
		   

		}//Di
		if(data[i].notes == 'w' || data[i].notes == 'W'){
		    Beep(277,500);
		    
	
		}//Ri
		if(data[i].notes == 'e' || data[i].notes == 'E'){
		    Beep(311,500);
		    

		}//Fi
		if(data[i].notes == 't' || data[i].notes == 'T'){
		    Beep(370,500);
		    

		}//Sel
		if(data[i].notes == 'y' || data[i].notes == 'Y'){
		    Beep(415,500);
		    

		}//Le
		if(data[i].notes == 'u' || data[i].notes== 'U'){
		    Beep(466,500);
		    

		}//Di                                            
		if(data[i].notes == 'o' || data[i].notes == 'O'){
		    Beep(544,500);
		    

		}//Ri
		if(data[i].notes == 'p' || data[i].notes == 'P'){
		    Beep(622,500);
		    
	
		}//Mi
		if(data[i].notes == ';'){
		    Beep(659,500);
		    
		}system("cls");
	}
	printf("\nGo back to menu?\nPress 1 and enter\n\nOption: ");
	int choices;
	scanf("%d",&choices);
	
	if(choices == 1){
		menu();
	} else {
		menu;
	}
}

void play(){
	FILE *fp = fopen("Record.txt","r");
	char choice;
	int n=0;
	if(fp == NULL){
		printf("\n\nNo Recording Available\nHeading back to main menu in 5 seconds\n");
		sleep(7);
		menu();
	} else {
		while (!feof(fp)){
			fscanf(fp,"%c",&data[n].notes);
			n++;
		}
		playrecording(n);
	}
	fclose(fp);
}

void menu(){
	int num;
	system("cls");
	imageone();
	printf("\nChoose one option!");
	printf("\n1. Play piano\n");
	printf("2. Play song\n");
	printf("3. Record piano\n");
	printf("4. Play recorded song\n");
	printf("5. Exit\n");
	printf("Input Option : ");
	scanf("%d",&num);
	
	switch(num){
		case 1:
			piano();
			break;
		case 2:
			song();
			break;
		case 3:
			record();
			break;
			return;
		case 4:
			play();
			break;
		case 5:
			getchar();
			break;
			return;
		default:
			menu();
			break;
	}
}

int main(){
	menu();
    return 0;
}

