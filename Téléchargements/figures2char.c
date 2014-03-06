#include <stdio.h>

void figures2char(char *en_chiffres, char *out_filename)
{
FILE*f;
FILE*f1;
int c;
   f=fopen(en_chiffres,"r");
   if(f==NULL)
   {return -1;}
   c=fgetc(f);
   while(c!= EOF)
   {
   c=fgetc(f);
   }
   fclose(f);

      f1=fopen(out_filename,"w");
      if(f1==NULL)
      {exit( );}
      fgets(*en_chiffres,out_filename);
      c=fgetc(f);
      switch(c)
      {
      case 0:printf("%d ",'zero');
      case 1:printf("%d ",'un');
      case 2:printf("%d ",'deux');
      case 3:printf("%d ",'trois');
      case 4:printf("%d ",'quatre');
      case 5:printf("%d ",'cinq');
      case 6:printf("%d ",'six');
      case 7:printf("%d ",'sept');
      case 8:printf("%d ",'huit');
      case 9:printf("%d ",'neuf');
      }
      fclose(f1);

return;
}   


int main(void)
{

figures2char(*en_chiffres,*out_filename);
return 0;
}

