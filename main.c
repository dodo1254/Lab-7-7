#include <stdio.h>
int main(void) 
{
 int i, j;
 int temp[7][2];
 int swaph,swapl;
  int Max, Min;
 int midH[7], midL[7];
 float SumH, SumL;
 char name[100];
   
 printf("Enter your name : ");
 scanf(" %s",name);
 printf("Hello %s\n",name);
 char day[7][20] =
        {
           "Monday    : ",
           "Tuesday   : ",
           "Wednesday : ",
           "Thursday  : ",
           "Friday    : ",
           "Saturday  : ",
           "Sunday    : "
        };

printf("******************************** \n");
  for(i=0; i<7; i++){
      for(j=0;j<2;j++){
        if(j==0){
         printf("High Temp %s",day[i]);
         scanf("%d", &temp[i][j]);
         midH[i]= temp[i][j];
         SumH += temp[i][j];
         Max = temp[i][j];
          }
         else{
         printf("Low  Temp %s",day[i]);
         scanf("%d", &temp[i][j]);
         midL[i] = temp[i][j];
         SumL += temp[i][j];
         Min = temp[i][j];
         }
      }
    }
printf("******************************** \n");
   for (i=0; i<7; i++)
    for (j=0; j<2; j++){
        if(temp[i][j]> Max)
         Max= temp[i][j];
         if(temp[i][j]<Min)
         Min= temp[i][j]; 
          }
   for(i=0; i<7; i++){
		for(j=i+1; j<6; j++){
			if(midH[i]>midH[j]) //Swap
				swaph=midH[i];
				midH[i]=midH[j];
				midH[j]=swaph;
		}
	}
   for(i=0;i<7;i++){
   for(j=i+1;j<7;j++){
     if(midL[i]>midL[j]){
       swapl=midL[i];
       midL[i]=midL[j];
       midL[j]=swapl;
       }
      }
    }
    printf("Max Temperature is %d C\n",Max);
    printf("Min Temperature is %d C\n",Min);
    printf("Average High Temperature is %.2f C\n",SumH/7);
    printf("Average Low  Temperature is %.2f C\n",SumL/7);
    printf("Median High Temperature is %d C\n",midH[3]);
    printf("Median Low  Temperature is %d C\n",midL[3]);
    return 0;
}
