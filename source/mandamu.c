#include "mandamu.h"



int main(void){
	char buf[256];
	int checker=0;
	
	initialize();
	printf("Let's start dungeon of mandamu!\n");
	do{
 		printf("how many players are there?(2,3,4) \n");
 		fgets(buf, sizeof(buf)/sizeof(char),stdin);
 		if(atoi(buf) < 2 || 4 < atoi(buf))checker = print_error(PNII);
 		else checker =1;
	}while(checker < 1);
	PLAYER_NUMBER=atoi(buf);
}

void initialize(){
	PLAYER_NUMBER=0;

}



int print_error(int n){
	switch(n){
	case PNII:
		printf("player numer is invalid. please input again.\n");
		break;
			
	default: ;
	
	
	}

	return -1;
}