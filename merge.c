#include <stdio.h>
void Merge(int * , int , int , int );
void MergeSort(int *array, int left, int right){
   int middle = (left+right)/2;
   if(left<right){
      //Sorting the left part
      MergeSort(array, left, middle);
      //Sorting the right part
      MergeSort(array, middle + 1, right);
      // Merge the two parts
      Merge(array, left, middle, right);
   }
}
void Merge(int *array, int left, int middle, int right){
   int tmp[right - left + 1];
   int pos = 0, leftposition = left, rightposition = middle + 1;
   while (leftposition <= middle && rightposition <= right){
      if (array[leftposition] < array[rightposition]){
         tmp[pos++] = array[leftposition++];
      }
      else{
         tmp[pos++] = array[rightposition++];
      }
   }
   while (leftposition <= middle)
      tmp[pos++] = array[leftposition++];
   while (rightposition <= right)
      tmp[pos++] = array[rightposition++];
   int i;
   for (i = 0; i < pos; i++){
      array[i + left] = tmp[i];
   }
   return;
}
int main(){
   int size;
   printf("enter size of array:");
   scanf("%d", &size);
   int array[size];#include<stdio.h>
void quicksort(int number[25],int first,int last){
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
   int i, count, number[25];
   printf("How many elements are you going to enter?: ");
   scanf("%d",&count);
   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
   scanf("%d",&number[i]);
   quicksort(number,0,count-1);
   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
   printf(" %d",number[i]);
   return 0;
}

   int i, j, k;
   printf("enter the elements in an array:");
   for (i = 0; i < size; i++){
      scanf("%d", &array[i]);
   }
   MergeSort(array, 0, size - 1);//calling sort function
   for (i = 0; i< size; i++){
      printf("%d ", array[i]);
   }
   printf(" ");
   return 0;
}
