#include <stdio.h>
#include <stdlib.h>
#define PNII -1
#define STR_MAX 256


extern int PLAYER_NUMBER;

 struct monster{
	char name[STR_MAX];
	int atk;
	char weak_weapon[STR_MAX];
	char place[STR_MAX];
	};
	
struct weapon{
	char name[STR_MAX];
	char place[STR_MAX];
	};
	
	
	

extern monster dragon;


extern weapon dragon_lance;

void initialize();
int print_error(int n);