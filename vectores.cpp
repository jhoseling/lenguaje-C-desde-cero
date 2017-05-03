#include<stdio.h>
#include <stdlib.h>
int main()
{
int n,i,j,m,h=0,c,d,l=1;
printf("Escriba la longitud del vector:\n");
scanf("%i",&n);
int A[n],B[2][n];
printf("escriba los elemntos del vector\n");
for(i=0;i<n;i++)
{scanf("%i",&A[i]);}

for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{if(A[i]==A[j])
{h++;}}
B[1][i+1]=h;
B[2][i+1]=A[i];h=0;}
if(h==n)
{printf("no hay moda\n");return 0;}

for(i=1;i<=n;i++)
{ for(j=1;j<=n;j++)
{if(B[1][i]>B[1][j])
{c=B[1][j];
B[1][j]=B[1][i];
B[1][i]=c;
d=B[2][j];
B[2][j]=B[2][i];
B[2][i]=d;}}}

for(i=n;i>0;i--)
{for(j=i;B[2][i]==B[2][j-1];j--)
{B[2][j-1]=0;}}

for(i=1;i<n;i++)
{if(B[2][i]!=0)
{m=B[1][i];}}

for(i=1;l;i++)
{if(B[2][i]!=0)
{l++;
if(B[1][m]==B[1][i])
{printf("la moda es: %i\n",B[2][i]);}}}
system("pause");
return 0;
}
