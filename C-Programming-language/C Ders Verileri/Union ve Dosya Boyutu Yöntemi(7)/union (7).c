#include <stdio.h>

union hafiza{  //union= her �eyi ayn� bellekte tutar,en b�y�k byte yi hafiza olarak alir
	           //struct= herbiri i�in ayr� haf�za alan� olu�turur, ayn� yerde depolar
	int a;     // union daha hizli, ama kullanim alan� az
	float b;
	long long int d;
	char e[30];
	
	
};


int main(){
	
	union hafiza byte;
	
	byte.a=15;
	byte.b=12.5;
	printf("A nin degeri: %d\n",byte.a); // program ��ker, 2 veriyi saklayamaz
	printf("b nin degeri: %f\n",byte.b); // ram gibi ge�ici kullan�l�r
	
	
	
	printf("unionun kapladigi alan: %d",sizeof(byte)); //union'un kaplad��� alan� ��renmek i�in.
	
	
	
	
	return 0;
}







