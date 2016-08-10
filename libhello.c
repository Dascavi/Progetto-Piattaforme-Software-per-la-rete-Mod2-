#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>

/* Codice che invoca la printf della libc funzionante */
void main(int argc, char **argv)
{
        void *handle;
        int (*stampa)(int);
        char* errore;
	handle = dlopen ("/lib/x86_64-linux-gnu/libc.so.6", RTLD_LAZY);
   	if (!handle) 
		{ 
		fprintf(stderr, "Impossibile aprire libc.so.6: %s\n",dlerror()); 
		exit(1); 
		}
	stampa = dlsym(handle, "printf");
	dlerror();
	if ((errore = dlerror()) != NULL) 
	{
  	/* simbolo non trovato, gestisce l’errore */
	fprintf(stderr, "Impossibile trovare printf: %s\n", errore); 
	} 
	else 
	{
	/* simbolo trovato, s ne contiene il valore */
	fprintf(stderr, "Ho trovato printf: %s\n", errore); 
	}
	stampa("\n\nOK la funzione stampa, che usa in realtà la printf di libc funziona\n\n");
        dlclose(handle);

}
//Il pezzo di codice precedente serve nel caso in cui non trovo nessuna corrispondenza nella stringa con %n o $, va solamente inserita la restituzione del valore di stampa tramite una "return stampa", ricordati di cambiare il tipo della funzione main (e magari dopo di cambiargli il nome)
//--------------------------------------------------------------------


