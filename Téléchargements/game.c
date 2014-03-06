#include <stdio.h>
#include "types.h"
int main(void)
{
int i,j;
cell grid[7][7];
init_grid(grid);

for(i=0;i<7;i++)
{
for(j=0;j<7;j++)
{
printf("%d ",grid[i][j]);
}
printf("\n");
}
set_pattern1(grid);
set_pattern2(grid);
return 0;
}
