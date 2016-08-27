#include<stdio.h>

void tourhanoi(int n,char depart,char base,
               char intermediaire,long unsigned int *occur){
  if(n>0){
    ++*occur;
    tourhanoi(n-1,depart,intermediaire,base,occur);
    printf("%c -> %c\n",depart,base);
    tourhanoi(n-1,intermediaire,base,depart,occur);
  }
}

int main()
{
  int n,i;
  long unsigned int occur=0;
  printf("Entrez le nombre de disques : ");
  scanf("%d",&n);
  tourhanoi(n,'A','B','C',&occur);
  printf("%ld déplacements\n",occur);
  return 0;
}

