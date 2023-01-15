# Categorizing-students-grades-using-files-in-C-programming

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>
// define headerfiles.


// define 
struct student
{
	char nn[9], fe[9];
	float mm,te;
};

int main(void)
{
	FILE *pp;

	// users should upload their files here
	pp = fopen(" ","r"); 
	// 
	
	// define variables
	int i, j, l=1;
	int NN;
	char charac;
	
	// using while loop
	while(feof(pp) == 0)
	{
		charac = fgetc(pp);
		if(charac == '\n')
		{
			// using if to increase l.
			l++;
		}
	}
	
	NN = l;
  
	// we have number of thhe students here
	rewind(pp);
	//printf("%d",N);
	
	struct student s[NN];
	
	for(i = 0; i < NN; i++)
	{
		// using for loop.
		fscanf(pp ,"%s", s[i].nn);
		fscanf(pp ,"%s", s[i].fe);
		
		//ftell(p)
		fseek(pp, 4, SEEK_CUR);
		fscanf(pp, "%f", &s[i].mm);
		fseek(pp, 3, SEEK_CUR);
		fscanf(pp,"%f", &s[i].te);
		fprintf(pp,"\n");	
	}
	
	for(j = 0; j < NN - 1; j++)
	{
		// using for loop.
		if(s[j].mm < s[j].te)
		{
			printf("%s ", s[j].nn);
			printf("%s", s[j].fe);	
			printf(">>>");
			printf("%.2f", s[j].mm);
			printf(">>>");
			printf("%.2f", s[j].te);
			printf("\n");	
		}
	}
	
	// and at the end we should close the file
	fclose(pp);	
}
