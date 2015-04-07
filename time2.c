#include<stdio.h>
#include<conio.h>

char* time(int s)
{
	int HH;
	int MM;
	int SS;
	char *readable;
	
	HH = s / 3600;
	MM = (s % 3600) / 60;
	SS = (s % 3600) % 60;

	char strHH[15];
	char strMM[2];
	char strSS[2];
	sprintf(strHH, "%d", HH);
	sprintf(strMM, "%d", MM);
	springf(strSS, "%d", SS);

	strcpy(readable, HH);
	strcpy(readable, ':');
	strcpy(readable, MM);
	strcpy(readable, ':');
	strcpy(readable, SS);

	return readable;
}