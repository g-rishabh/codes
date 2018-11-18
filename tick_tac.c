#include<stdio.h>
#include<stdlib.h>
int main()
{
	char display[3][3]={{ '1',  '2' , '3'},{ '4' , '5' , '6'},{ '7' , '8' , '9'}};
	int i,j,k,l,player1,player2,count=0,temp;
	for(k=1;k<10;k++)
	{
		system("clear");
		printf("\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\t %c   | ",display[i][j]);
			}
			if(i<2)
			{
				printf("\n\t----- ------- -------\n");
			}
		}	
		printf("\n\n\n");
		wrong:
		if(count%2==0)
		{
			printf("player 1 chance\n");
			printf("Enter the position where you whant to enter X:-");
			scanf("%d",&player1);
			temp=player1;
		}
		else
		{
			printf("player 2 chance\n");
			printf("Enter the position where you whant to enter O:-");
			scanf("%d",&player2);
			temp=player2;
		}
		switch(temp)
		{
			case 1 : i=0;j=0; break;
			case 2 : i=0; j=1; break;
			case 3 : i=0; j=2; break;
			case 4 : i=1; j=0; break;
			case 5 : i=1; j=1; break;
			case 6 : i=1; j=2; break;
			case 7 : i=2; j=0; break;
			case 8 : i=2; j=1; break;
			case 9 : i=2; j=2; break;
			default : printf("Wrong input\n");
		}
		if(display[i][j]!='X' && display[i][j]!='O')
		{
			if(count%2==0)
				display[i][j]='X';
			else
				display[i][j]='O';
	/*for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %c   | ",display[i][j]);
		}
		if(i<2)
			printf("\n\t----- ------- -------\n");
		
	}*/	
		
		}
		else
		{
			printf("Wrong input\ntry again \n");
			goto wrong;
		}
		for(l=0;l<3;l++)
		{
			if((display[l][1] == display[l][2] && display[l][2] == display[l][0]) || (display[1][l] == display[0][l] && display[0][l]== display[2][l]))
			{
				if(count%2==0)
				{
					printf("Player 1 win \n");
				}
				else 
					printf("Player 2 win \n");
				goto end;
			}
			else if((display[0][0]==display[1][1] && display[1][1]==display[2][2]) || (display[0][2]==display[1][1]&& display[1][1]==display[2][0]))
			{
				if(count%2==0)
				{
					printf("Player 1 win \n");
				}
				else 
					printf("Player 2 win \n");
				goto end;
			
			}
		}
		count++;
		printf("Match end in a draw\n");
	}
	end:
	return 0;
}
