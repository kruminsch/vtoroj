#include<stdio.h>
#include<stdlib.h>

int array[10]= {3,5,1,7,2,7,6,0,8,4};


int reverse_sorter(const void*first_arg, const
 void*second_arg){

     int*first=(int*)first_arg;
     int*second=(int*)second_arg; 

     return (second -first);
     }
      
 int main(){
      qsort(array,10,sizeof(int),reverse_sorter);
      int n;
      for (n=0; n<10;n++){
      printf("%d\n",array[n]);
      }
       return (0);

 }
       


 