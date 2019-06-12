/**
 * In params: 
 * HP1: Musketeer strength(1-999).
 * HP2: Bodyguard strength(1-900).
 * Q1:  Number of Musketeers(<=1000).
 * Q2:  Number of Bodyguards(<=1000).
 * d:   Distance from the place of war to Musketeer's headquaters(1-1000).
 * Return value: Win probability of Musketeers.
 */
 //Just replaced printf with return.
 
 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
float calculate(int HP1, int HP2, int Q1, int Q2, int d){
	float h, pR;
	float P1, P2;
	switch(HP1){
		//Aramis.
		case 777:
			if(HP2==888){
				if(Q1>1.5*Q2&&d<=300){
					P1 = HP1 + ((Q1-Q2)*d)/Q1;
					P2 = HP2;
					h = (HP1+HP2)%100;
					pR = (P1+h-P2)/(P1+P2);
					printf("%.2f",pR);
					exit(1);
				}	
				else{
					if(Q2>1.5*Q1&&d>=700){
						P1 = HP1;
						P2 = HP2 + (Q2-Q1)*(1000-d)/Q2;
						h = (HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}
					else{
						P1 = HP1;
						P2 = HP2;
						h =(HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}
				}
			}
			else{
				if(Q1>1.5*Q2&&d<=300){
					if(d<=100){
						P1 = HP1 + ((Q1-Q2)*100)/Q1;
						P2 = HP2;
						h = (HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}
					else{
						P1 = HP1 + ((Q1-Q2)*d)/Q1;
						P2 = HP2;
						h = (HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}	
				}
				else{
					if(Q2>1.5*Q1&&d>=700){
						P1 = HP1;
						P2 = HP2 + (Q2-Q1)*(1000-d)/Q2;
						h = (HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}
					else{
						P1 = HP1;
						P2 = HP2;
						h = (HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}	
				}
			}
		break;
		//Porthos
		case 888:
			if(HP2==888){
				if(Q1>1.5*Q2&&d<=300){
					P1 = HP1 + ((Q1-Q2)*d)/Q1;
					P2 = HP2;
					h = (HP1+HP2)%100;
					pR = (P1+h-P2)/(P1+P2);
					printf("%.2f",pR);
					exit(1);
				}	
				else{
					if(Q2>1.5*Q1&&d>=700){
						P1 = HP1;
						P2 = HP2 + (Q2-Q1)*(1000-d)/Q2;
						h = (HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}
					else{
						P1 = HP1;
						P2 = HP2;
						h =(HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}
				}
			}
			else{
				if(Q1>1.5*Q2&&d<=300){
					P1 = HP1 + ((Q1-Q2)*d)/Q1;
					P2 = HP2;
					h = ((HP1+HP2)%100)*3;
					pR = (P1+h-P2)/(P1+P2);
					printf("%.2f",pR);
					exit(1);
				}	
				else{
					if(Q2>1.5*Q1&&d>=700){
						P1 = HP1;
						P2 = HP2 + (Q2-Q1)*(1000-d)/Q2;
						h = ((HP1+HP2)%100)*3;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}
					else{
						P1 = HP1;
						P2 = HP2;
						h = ((HP1+HP2)%100)*3;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}
				}
			}
		break;
		//Athos
		case 900:
			if(HP2==888){
				if(Q1>1.5*Q2&&d<=300){
					P1 = HP1 + ((Q1-Q2)*d)/Q1;
					P2 = HP2;
					h = (HP1+HP2)%100;
					pR = (P1+h-P2)/(P1+P2);
					printf("%.2f",pR);
				}	
				else{
					if(Q2>1.5*Q1&&d>=700){
						P1 = HP1;
						P2 = HP2 + (Q2-Q1)*(1000-d)/Q2;
						h = (HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
					}
					else{
						P1 = HP1;
						P2 = HP2;
						h =(HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
					}
				}
			}
			else{
				if((Q1>1.5*Q2)&&(d<=300)){
					P1 = HP1 + ((Q1-Q2)*d)/Q1;
					P2 = HP2;
					h = (HP1+HP2)%100;
					pR = (P1+h-P2)/(P1+P2);
					if(pR>=0.50)
						printf("%.2f",pR);
					else{
						if(pR<0.50)
							printf("0.50");
					}	
				}
				else{
					if((Q2>1.5*Q1)&&(d>=700)){
						P1 = HP1;
						P2 = HP2 + (Q2-Q1)*(1000-d)/Q2;
						h = (HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						if(pR>=0.50)
							printf("%.2f",pR);
						else{
							if(pR<0.50)
								printf("0.50");
						}	
					}
					else{
						P1 = HP1;
						P2 = HP2;
						h = (HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						if(pR>=0.50)
							printf("%.2f",pR);
						else{
							if(pR<0.50)
								printf("0.50");
						}	
					}
				}
			}
		break;
		//d'Artagnan
		case 999:
			if(HP2==888){
				printf("1");
			}
			else{
				if(Q1>1.5*Q2&&d<=300){
					P1 = HP1 + ((Q1-Q2)*d)/Q1;
					P2 = HP2;
					h = (HP1+HP2)%100;
					pR = (P1+h-P2)/(P1+P2);
					printf("%.2f",pR);
					exit(1);
				}	
				else{
					if(Q2>1.5*Q1&&d>=700){
						P1 = HP1;
						P2 = HP2 + (Q2-Q1)*(1000-d)/Q2;
						h = (HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}
					else{
						P1 = HP1;
						P2 = HP2;
						h =(HP1+HP2)%100;
						pR = (P1+h-P2)/(P1+P2);
						printf("%.2f",pR);
						exit(1);
					}	
				}	
			}
		break;
	}
	if(Q1>1.5*Q2&&d<=300){
		P1 = HP1 + ((Q1-Q2)*d)/Q1;
		P2 = HP2;
		h = (HP1+HP2)%100;
		pR = (P1+h-P2)/(P1+P2);
		printf("%.2f",pR);
		exit(1);
		}	
	else{
		if(Q2>1.5*Q1&&d>=700){
			P1 = HP1;
			P2 = HP2 + (Q2-Q1)*(1000-d)/Q2;
			h = (HP1+HP2)%100;
			pR = (P1+h-P2)/(P1+P2);
			printf("%.2f",pR);
			exit(1);
		}
		else{
			P1 = HP1;
			P2 = HP2;
			h =(HP1+HP2)%100;
			pR = (P1+h-P2)/(P1+P2);
			printf("%.2f",pR);
			exit(1);
		}
	}
	return 0.0;
}
int main(){
	int HP1, HP2, Q1, Q2, d;
	//printf("Hey player!Enter your numbers: ");
	scanf("%d%d%d%d%d",&HP1, &HP2, &Q1, &Q2, &d);
	calculate(HP1,HP2,Q1,Q2,d);
	return 0.0;
}
