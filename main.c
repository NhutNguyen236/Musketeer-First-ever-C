/* Updated on 5/10/2018 */
#include <stdio.h>
#include <stdlib.h>
//#include "musketeer.c"

//read data from input file to corresponding variables
//return 1 if successfully done, otherwise return 0
int readFile2(int* HP1,int* HP2,int* Q1,int* Q2,int* d)
{
	FILE *in = fopen("input.txt", "r");
    
    if (in != NULL)
	{
        int i = 0;
        char line_buff[128];
		while(fgets(line_buff, sizeof(line_buff), in) != NULL)
		{
			if(i == 0) *HP1 = atoi(line_buff);
			if(i == 1) *HP2 = atoi(line_buff);
			if(i == 2) *Q1 = atoi(line_buff);
			if(i == 3) *Q2 = atoi(line_buff);
			if(i == 4) *d = atoi(line_buff);

			i++;
		}
        
        fclose(in);
    }

	if (*HP1 < 1 || *HP1 > 999) return 0;
	if (*HP2 < 1 || *HP2 > 900) return 0;
	if (*Q1 < 1 || *Q2 < 1) return 0;
	if (*d < 1 || *d > 1000) return 0;

	return 1;
}

void display(float fOut)
// display value of fOut in format of 0.XX
// no exception handled
{
	if (fOut == 1){
		printf("%f", fOut);
	}
	else{
		char s[10];
		sprintf(s,"%.2f",fOut);
		printf("%s", s);
	}
}

int main(void){
	// Do not change anythings in main.
	int HP1,HP2,Q1,Q2,d;
	float fOut = 0.0;
	readFile2(&HP1, &HP2, &Q1, &Q2, &d);
	fOut = calculate(HP1, HP2, Q1, Q2, d);
	display(fOut);
	return 0;
}
