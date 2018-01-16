//20.11.11
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
slow_power()
{
int i;
out32(0x378,0x00);
for (i=0;i<10;i++);
out32(0x378,0x01);
for (i=0;i<10;i++);
return 0;
}
mid_power()
{
int i;
out32(0x378,0x00);
for (i=0;i<100;i++);
out32(0x378,0x01);
for (i=0;i<100;i++);
return 0;
}
fast_power()
{
int i;
out32(0x378,0x00);
for (i=0;i<200;i++);
out32(0x378,0x01);
for (i=0;i<200;i++);
return 0;
}
main ()
{
int sw=inp (0x379);
int yyy,zzz=0x00;
zzz=zzz+1;
if (zzz<=11)
{
yyy=yyy+1;
if (yyy<=22)
{
if (sw==0x01)
{
slow_power();
}
if (sw==0x03)
{
mid_power();
}
if (sw==0x07)
{
fast_power();
}
}
}
return 0;
}