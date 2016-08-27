#include<stdio.h>
/*procedure tour de hanoi*/
void tourhanoi(int n,char depart,char f,
               char i,long unsigned int *dep){
  if(n>0){
    ++*dep;
    tourhanoi(n-1,depart,i,f,dep);
    printf("%c >>> %c\n",depart,f);
    tourhanoi(n-1,i,f,depart,dep);
  }
}
/*programme principal tour de hanoi*/
main()
{
  int n,i;
  long unsigned int dep=0;
  printf("Viellez Entrez le nombre de disques : ");
  scanf("%d",&n);
  tourhanoi(n,'A','B','C',&dep);
    printf("\n");
  printf("%ld deplacements\n",dep);
  getchar();
  getchar();
  
}

