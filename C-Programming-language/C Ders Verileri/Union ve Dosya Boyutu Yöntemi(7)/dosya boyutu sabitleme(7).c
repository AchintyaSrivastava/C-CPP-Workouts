#include <stdio.h>

struct{
	
	unsigned int a : 2;
	
}kisi; //s�n�f olu�turduk




int main(){
	
	kisi.a =1;  // 2 bytes in �st�n� alamaz.
	printf("a nin degeri %d\n",kisi.a);
	printf("a nin dosya boyutu: %d",sizeof(kisi)); // 4 olarak g�z�k�yor ama asl�nda 2 byte
	
	



	
	return 0;
}







