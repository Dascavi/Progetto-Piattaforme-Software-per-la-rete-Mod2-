#include <dlfcn.h>
#include <stdlib.h> 
#include <stdio.h>

typedef void (*simple_demo_function)(void);

int main(void) 
{ 
const char *errore; 
void *modulo; simple_demo_function demo_function;

/* Carica dinamicamente la libreria */ 

modulo = dlopen("libhello.so", RTLD_LAZY); 
	if (!modulo) 
		{ 
			fprintf(stderr, "Impossibile aprire libhello.so: %s\n",dlerror()); 
			exit(1); 
		}

/* Ricava il simbolo */ 

dlerror(); demo_function = dlsym(modulo, "hello"); 
if ((errore = dlerror())) 
			{ 
				fprintf(stderr, "Impossibile trovare hello: %s\n", errore); 
				exit(1);
			}

/* Ora chiama la funzione dalla libreria a caricamento dinamico */ 

(*demo_function)();

/* Tutto fatto, chiude in modo pulito */ 

dlclose(modulo); 
return 0;
}
