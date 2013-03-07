// fxdsfdfdf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cstdlib"

int _tmain(int argc, _TCHAR* argv[])
{
int n=5, i, z, t=0;
int* m;
m=new int[n];
for(i=0; i<n; i++)
{
m[i]=rand()%100;
printf("%d ", m[i]);
}
printf("\n______________________________\n");


/* for(i=0; i<(n-1); i++)
{
if (m[i]>m[i+1])
{
z=m[i];
m[i]=m[i+1];
m[i+1]=z;
}
}
*/


for(;;)
{
for(i=0; i<(n-1); i++)
{
if (m[i]>m[i+1])
{
z=m[i];
m[i]=m[i+1];
m[i+1]=z;
t++;
}
// else t++;
}
if (t==!0)
{
break;
}
t=0;
}

for(i=0; i<n; i++)
{
printf("%d ", m[i]);
}
return 0;
}

