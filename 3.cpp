#include<stdio.h>
 #include<conio.h> int main() 
{ 
 	int A;  	int B;  	int C; 
 	printf("\nMasukan Bilangan A : ");scanf("%d",&A);  	printf("\nMasukan Bilangan B : ");scanf("%d",&B);  	printf("\nMasukan Bilangan C : ");scanf("%d",&C);  	if(A>=B && A>=C){ 
 	 	printf("\nBilangan Terbesar Adalah A",A); 
 	} 
 	else if(B>=A && B>=C){ 
 	 	printf("\nBilangan Terbesar Adalah B",B); 
 	} 
 	else if(C>=A && C>=B){ 
 	 	printf("\nBilangan Terbesar Adalah C",C); 
 	} 
 	return 0; 
} 

