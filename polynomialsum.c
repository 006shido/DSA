#include <stdio.h>
struct poly{
int coeff;
int expo;
};
int main()
{
struct poly x1[20],x2[20],x3[40];
int m,n;
int i=0,j=0,k=0;

printf("Enter the number of terms in first polynomial: ");
scanf("%d",&m);
printf("Enter the coefficient and exponent in descending order: ");
for(i=0;i<m;i++){
scanf("%d%d",&x1[i].coeff,&x1[i].expo);}

printf("Enter the number of terms in second polynomial: ");
scanf("%d",&n);
printf("Enter the coefficient and exponent in descending order: ");
for(j=0;j<n;j++){
scanf("%d%d",&x2[j].coeff,&x2[j].expo);}

i=0;
j=0;
k=0;
while(i<m && j<n)
{
if(x1[i].expo==x2[j].expo){
x3[k].coeff=x1[i].coeff+x2[j].coeff;
x3[k].expo=x1[i].expo;
i++;
j++;
k++;}

else if(x1[i].expo>x2[j].expo)
{
x3[k].coeff=x1[i].coeff;
x3[k].expo=x1[i].expo;
i++;
k++;}

else{
x3[k].coeff=x2[j].coeff;
x3[k].expo=x2[j].expo;
j++;
k++;}}

while(i<m){
x3[k].coeff=x1[i].coeff;
x3[k].expo=x1[i].expo;
i++;
k++;}
while(j<n){
x3[k].coeff=x2[j].coeff;
x3[k].expo=x2[j].expo;
j++;
k++;}

printf("\n The Resultant polynomial \n");
for(i=0;i<k;i++){
if(i!=0 && x3[i].coeff>=0)
printf("+");
if(x3[i].expo==0)
printf("%d",x3[i].coeff);
else if(x3[i].expo==1)
printf("%dx",x3[i].coeff);
else
printf("%dx^%d",x3[i].coeff,x3[i].expo);}
printf("\n");
return 0;
}
