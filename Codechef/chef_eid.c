#include<stdio.h>
void quicksort(int number[1000000],int first,int last){
   int i, j, pivot, temp;
    if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int main(){ 
    int t;
    scanf("%d",&t);
    while(t--){
   int i, count, number[1000000],x=1000000,dif;
   scanf("%d",&count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);
   quicksort(number,0,count-1);
   for(i=0;i<count-1;i++)
   {
   	  dif=abs(number[i]-number[i+1]);
   	  if(dif<x)
   	    x=dif;
   }
    printf("%d\n",x);
}
return 0;  
getch();
}
