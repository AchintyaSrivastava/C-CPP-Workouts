#include <stdio.h>




int main(){

	char a[20]="benim adim ";
	char b[30]=" ahmet furkan DEM�R";
	char c[20];
	
	strcat(a,b); //a ve b yi arka arkaya yazd�rd�k.
	printf("%s\n",a);
	
	strcpy(c,b); // string veri tipini bir yere toplar.
	
	printf("%s\n",c);
	
	int d = strlen(a); //yaz�da ka� karekter kulland�k ��renmek i�in.
	
	printf("%d\n",d);
	
	printf("%d",strcmp(a,b)); //a b den b�y�k oldu�u i�in 1, olmazsa -1 olur.
	
	return 0;
}
