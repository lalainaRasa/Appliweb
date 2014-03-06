#include<stdio.h>
#include " types.h"
void display_grid(Cell grid[HEIGHT][WIDTH]){
	Cell carac;
	for(i=0;i<HEIGHT;i++){
		for(j=0;j<WIDTH;j++){
			carac=grid[i][j];
			switch(carac){
				case '0': printf("%d",o);break;
				case '1': printf("%d", );break;
				case '2': printf("%d",.);break;
				case '3': printf("%d",+);break;
				default: printf("Erreur\n");
					     }
}
	
