//25.3.12
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>

void main ()
{
	int dc,freq,ton,ttot,toff,i;
	printf ("Enter DC & F!!!\n");
	scanf ("%d %d",&dc,&freq);
	printf ("the dc is: %d the freq is: %d",dc,freq);
	dc=dc/100;
	ttot=1/freq;
	ton=dc*ttot;
	toff=ttot-ton;
	while (!kbhit())
		{
			out32(0x378,0x01);
			Sleep(ton);
			out32(0x378,0x00);
			Sleep(toff);
		}
}