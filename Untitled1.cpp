#include<stdio.h>
#include<conio.h>

int main()
{
int skor; char nilai; char lulus; int bonus;

printf("masukkan skor : ");scanf("%d",&skor);

if(skor>7)
{
nilai='A'; lulus='L'; bonus=50000;
}

printf("Nilai : %c\n",nilai); printf("Lulus : %c\n",lulus); printf("Bonus : %d\n",bonus);

return 0;
}


