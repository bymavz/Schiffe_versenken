#include <stdio.h>

/***************************
Titel:		Schiffe versenken
Name:		Marvin Gutjahr & Emanuel Dobrean
Klasse:		3BHET
Gegenstand: AIIT
Datum:		05.10.20
***************************/

int xkoord=0;
int ykoord=0;

void darstellen(char feldfunktion[0][10]) //Funktion für das Spielfeld
{
	for(int i=0; i!=10; i++)
	{
		for (int j=0; j!=10; j++)
		printf("%c",feldfunktion[i][j]);
		printf("\n");
	}
}

int main()
{
	
	int zaehler=0;
	int a=0;
	int x=0;
	
	char spielfeld[10][10]={
	{'s','~','~','~','s','~','~','~','~','s'},
	{'~','~','~','~','~','~','~','~','~','~'},
	{'~','~','~','~','~','~','~','~','~','~'},
	{'~','~','~','s','~','~','~','~','s','~'},
	{'~','s','s','s','~','~','~','~','~','~'},
	{'~','~','~','~','~','~','~','~','~','~'},
	{'~','~','~','s','~','~','~','~','s','~'},
	{'~','~','~','~','~','~','~','~','~','~'},
	{'~','s','~','~','~','~','~','~','~','~'},
	{'~','~','~','~','~','~','~','~','~','~'}
	};
	
	while(a!=30)
	{
		darstellen(spielfeld);
		
		printf("\nDies ist ihr Spielfeld in dem Sie Schiffe versenken können!");
		printf("\nSie müssen eine x- und y-Koordinate eingeben um ein Feld abzuschiesen!");
		printf("\nGib nun die x-Koordinate ein, die du abschiessen moechtest! (von 1-10): ");
		scanf("%i",&xkoord);
		printf("\nGib nun die y-Koordinate ein, die du abschiessen moechtest! (von 1-10): ");
		scanf("%i",&ykoord);
	
		if(xkoord==-1 || ykoord==-1)
		break;
		zaehler++;
	
	
		if(spielfeld[xkoord-1][ykoord-1]=='s')
		{
			printf("\nSchiff Getroffen! \n");
			spielfeld[xkoord-1][ykoord-1]='x';
		}
		else printf("\nSchiff verfehlt..\n");
		
	
		for(int c=0; c!=10; c++)
		{
			for(int d=0; d!=10; d++)
			if(spielfeld[c][d]=='x')
			{
				x++;
			}
			if(x==30)
			{
				darstellen(spielfeld);
				a=x;
				continue;
			}
		}
	

	
	}
}	