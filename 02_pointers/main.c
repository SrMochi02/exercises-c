#include <stdio.h>

int main(void) {

	int saldo = 1000;
	int *ptr_saldo = &saldo; //tomamos la direccion en memoria de nuestra variable

	printf("El valor de saldo es: %d\n", saldo);
	printf("La direccion fisica en RAM es: %p\n", (void*)ptr_saldo);

	//este ejercicio es con el fin de aprender C de manera disciplinada
	//el repositorio excercises-c o excercises of learning C es para
	//practicar y aprender el lenguaje C de manera disciplinada y ordenada
	
	return 0;

}
