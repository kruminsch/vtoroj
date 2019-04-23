#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int array[10]= {3,5,1,7,2,7,6,0,8,4};


int cmp(const void*first_arg, const
 void*second_arg){

     int*first=(int*)first_arg;
     int*second=(int*)second_arg; 

     return (*second -*first);
     }
      
     void merge_sort(void *base, size_t num, size_t size, int (*cmp)(const void *, const void *))
{
    char   *left;
    char   *right;
    size_t  ls;
    size_t  rs;
    size_t  mid;
    size_t  i;
    size_t  j;
    size_t  k;

    if (base == NULL || num < 2 || size == 0 || cmp == NULL)
        return;

    /* Find the mid and deal with an odd number of elements. */
    mid = num/2;
    ls  = mid;
    rs  = mid;

    if (num > 2 && num % 2 != 0)
        ls++;

    /* Copy the elements into tmp arrays. */
    left  = malloc(ls*size);
    right = malloc(rs*size);
    memcpy(left, base, ls*size);
    memcpy(right, base+(ls*size), rs*size);

    merge_sort(left, ls, size, cmp);
    merge_sort(right, rs, size, cmp);

    i = 0;
    j = 0;
    k = 0;
    /* Merge the tmp arrays back into the base array in
     * sorted order. */
    while (i < ls && j < rs) {
        if (cmp(left+(i*size), right+(j*size)) <= 0) {
            memcpy(base+(k*size), left+(i*size), size);
            i++;
        } else {
            memcpy(base+(k*size), right+(j*size), size);
            j++;
        }
        k++;
    }

    /* If left is longer than right copy the remaining elements
     * over */
    while (i < ls) {
        memcpy(base+(k*size), left+(i*size), size);
        i++;
        k++;
    }

    /* If right is longer than right copy the remaining elements
     * over */
    while (j < rs) {
        memcpy(base+(k*size), right+(j*size), size);
        j++;
        k++;
    }

    free(right);
    free(left);
}
 
 int main(){
      merge_sort(array,10,sizeof(int),cmp);
      int n;
      for (n=0; n<10;n++){
      printf("%d\n",array[n]);
      }
       return (0);

}




 
     

     
     
     
      
 

 