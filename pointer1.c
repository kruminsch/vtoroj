#include <stdio.h>

int main(){

int var = 42;
int*ptr=&var;
void funkcija(int*ptr){


*ptr=*ptr*2;

}
funkcija(&var);

printf("%d\n",*ptr);
return 0;
}