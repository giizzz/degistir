#include <stdio.h>
int main(){
	int is,ss,ir,sr;
	int i,g,s=0,oun=1;
	printf("Sayi gir:");
	scanf("%d",&is);
	g=is; 
	sr=g%10;
	while(g>0){
		g/=10;
		s++;
	}
	for(i=0;i<s-1;i++)
		oun*=10;
	ir=s/oun;
	ss=sr*oun;
	ss+=is%oun;
	ss=ss-sr+ir;
	printf("Yeni sayi = %d\n",ss);

	return 0;
}
/*Bir tamsayýnýn ilk ve son rakamýnýn yerlerini deðiþtirip çýktýla.*/
