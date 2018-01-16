#include "stdafx.h"
#include <stdio.h>
void chag (int *xptr,int *yptr)
{   int temp;
	temp=*xptr;
	*xptr=*yptr;
	*yptr=temp;

}
void main()
{
	int *Xptr,*Yptr;
	int array[10]={1000,6,30,15,24,2,777,12,23,16};
	int temp,i=0,j=0;
	for (i=0;i<9;i++)
	{

		for (j=0;j<9;j++)
		{
			Xptr=&array[j];
            Yptr=Xptr+1;
			if (*Xptr>*Yptr)
			{
				chag(Xptr,Yptr);
			}
		}
	}
for (j=0;j<10;j++)
  {
	printf ("%d ",array[j]);
  }
while (1)
{
}
}