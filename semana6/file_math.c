#include<stdio.h>
#include<math.h>

int main()
{
FILE*data;
FILE*archivo;
int final,i,n;
float e,c,s,l,raiz,delta,x;
data = fopen("intervalos.txt", "r");
archivo = fopen("resultadosmat.txt", "w");
fscanf(data,"%f %d %d",&x,&final,&n);

fclose(data);

delta=(final)/n;

for(i=0;i<n;i++)
{
e=exp(x);
c=cos(x);
s=sin(x);
l=log(x);
raiz=sqrt(x);
fprintf(archivo,"\ncos=%f \nsen=%f \nexp=%f \nlog=%f \nraiz=%f",c,s,e,l,raiz);
x=x+delta;
}
fclose(archivo);
return 0;
}
