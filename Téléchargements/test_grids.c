#include <stdio.h>
#include "types.h"
void init_grid(cell grid[HEIGHT][WIDTH])
{
int i,j;

for(i=0;i<7;i++)
{
for(j=0;j<7;j++)
{
grid[i][j]=1;
}
}
return;
}

void set_pattern1(cell grid[HEIGHT][WIDTH])
{
int i,j;

for(i=0;i<7;i++)
{
for(j=0;j<7;j++)
{
if((i==2) && ((j==2)||(j==3)||(j==4)))
{
grid[i][j]=0;
printf("%c ",'O');
}
else 
printf("%c ",' ');
}
printf("\n");
}
return;
}

void set_pattern2(cell grid[HEIGHT][WIDTH])
{
int i,j;

for(i=0;i<7;i++)
{
for(j=0;j<7;j++)
{
if(((i==1) || (i==2) || (i==3) || (i==4)) && (j==3))
{
grid[i][j]=0;
printf("%c ",'O');
}
else 
printf("%c ",' ');
}
printf("\n");
}
return;
}


