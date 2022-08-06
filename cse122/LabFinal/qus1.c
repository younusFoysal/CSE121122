/*Define a structure called cricket that will describe the
following information:
Player name
Team name
Batting average
Using cricket, declare an array player with 5 elements and
write a program to read the information about all the 5
players and print a team-wise list containing names of players
with their batting average. */

#include<stdio.h>

struct cricket
{
	char pname[20];
	char tname[20];
	float bavg;
};

int main()
{
	struct cricket s[5],t;
	int i,j,n=5;
	float p;


	printf("\nEnter data of %d players",n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Player Name--Team Name--Batting Avg for player-%d = ",i+1);
		scanf("%s %s %f",s[i].pname,s[i].tname,&p);
		s[i].bavg=p;
	}

	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(strcmp(s[j-1].tname,s[j].tname)>0)
			{
				t=s[j-1];
				s[j-1]=s[j];
				s[j]=t;
			}
		}
	}

	printf("\nAfter teamwise sorting... Player list is ");
	for(i=0;i<n;i++)
	{
		printf("\n%-20s %-20s %.2f",s[i].pname,s[i].tname,s[i].bavg);
	}


	return 0;
}
