#include<stdio.h>
int main()
{
   float nota;
   int i;

   for (i=1; i<=10; i++){
   printf("Digite a nota do aluno %d:", i);
   scanf("%f", &nota);



   if (nota >= 9){
   printf("O aluno %d está no conceito A\n", i);
   }
   else if (nota>7 && nota<9)
   {
   printf("O aluno %d eh B:\n", i);
   }
   else if (nota>5 && nota <7)
   {
   printf("O aluno %d eh C\n", i);
   }
   else
   {
   printf("O aluno %d eh D\n", i);
   }

   }

   return 0;

   }
