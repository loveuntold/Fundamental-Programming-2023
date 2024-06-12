#include <stdio.h>
#define KMS_PER_MILE 1.609

int main(void)
{
   double miles,kms;
   FILE *inp,*outp;

   inp=fopen("mydata.txt", "r");
   outp=fopen("myoutputnya", "w"); 		
   fscanf(inp,"%lf",&miles);
   fprintf(outp, "Jarak dalam Mil adalah : %.2f.\n",miles);
   kms = KMS_PER_MILE*miles;
   fprintf(outp,"Sama dengan %.2f Kilometer.\n", kms);

	fclose(inp); 
	fclose(outp);
	return (0);
}