#include <stdio.h>
#include <stdarg.h>

// Programma con invocazioni a tutte le funzioni utilizzate dalla mia libreria dinamica

int main(int argc, char **argv)
{
	void *handle;
	int (*ControlloStampa)(int);
 	char *errore;
	
	handle = dlopen(const char , RTLD_LAZY)
	if (!handle) 
		{
		fputs (dlerror(), stderr);
		exit(1); 
		}
//-----------------------------------------------------------------------
// Caso printf

	ControlloStampa = dlsym(handle, "printf");

	if ((errore = dlerror()) != NULL)  
		{
            	fputs(errore, stderr);
		exit(1); 
		}

//Caso in cui non si hanno problemi

	ControlloStampa("Prova se tutto funziona PRINTF: caso in cui non ho 	nessuno dei due simboli speciali cercati");

//Casi in cui si hanno problemi

	ControlloStampa("PRINTF:E' presente il simbolo %n");
	ControlloStampa("PRINTF:E' presente il simbolo $");
//-----------------------------------------------------------------------
// Caso fprintf

	ControlloStampa = dlsym(handle, "fprintf");

	if ((errore = dlerror()) != NULL)  
		{
            	fputs(errore, stderr);
		exit(1); 
		}

//Caso in cui non si hanno problemi

	ControlloStampa("Prova se tutto funziona FPRINTF: caso in cui non ho 	nessuno dei due simboli speciali cercati");

//Casi in cui si hanno problemi

	ControlloStampa("FPRINTF:E' presente il simbolo %n");
	ControlloStampa("FPRINTF:E' presente il simbolo $");
//-----------------------------------------------------------------------
// Caso sprintf

	ControlloStampa = dlsym(handle, "sprintf");

	if ((errore = dlerror()) != NULL)  
		{
            	fputs(errore, stderr);
		exit(1); 
		}

//Caso in cui non si hanno problemi

	ControlloStampa("Prova se tutto funziona SPRINTF: caso in cui non ho 	nessuno dei due simboli speciali cercati");

//Casi in cui si hanno problemi

	ControlloStampa("SPRINTF:E' presente il simbolo %n");
	ControlloStampa("SPRINTF:E' presente il simbolo $");
//-----------------------------------------------------------------------
// Caso snprintf

	ControlloStampa = dlsym(handle, "snprintf");

	if ((errore = dlerror()) != NULL)  
		{
            	fputs(errore, stderr);
		exit(1); 
		}

//Caso in cui non si hanno problemi

	ControlloStampa("Prova se tutto funziona SNPRINTF: caso in cui non ho 	nessuno dei due simboli speciali cercati");

//Casi in cui si hanno problemi

	ControlloStampa("SNPRINTF:E' presente il simbolo %n");
	ControlloStampa("SNPRINTF:E' presente il simbolo $");
//-----------------------------------------------------------------------
// Caso vprintf

	ControlloStampa = dlsym(handle, "vprintf");

	if ((errore = dlerror()) != NULL)  
		{
            	fputs(errore, stderr);
		exit(1); 
		}

//Caso in cui non si hanno problemi

	ControlloStampa("Prova se tutto funziona VPRINTF: caso in cui non ho 	nessuno dei due simboli speciali cercati");

//Casi in cui si hanno problemi

	ControlloStampa("VPRINTF:E' presente il simbolo %n");
	ControlloStampa("VPRINTF:E' presente il simbolo $");
//-----------------------------------------------------------------------
// Caso vfprintf

	ControlloStampa = dlsym(handle, "vfprintf");

	if ((errore = dlerror()) != NULL)  
		{
            	fputs(errore, stderr);
		exit(1); 
		}

//Caso in cui non si hanno problemi

	ControlloStampa("Prova se tutto funziona VFPRINTF: caso in cui non ho 	nessuno dei due simboli speciali cercati");

//Casi in cui si hanno problemi

	ControlloStampa("VFPRINTF:E' presente il simbolo %n");
	ControlloStampa("VFPRINTF:E' presente il simbolo $");
//-----------------------------------------------------------------------
// Caso vsprintf

	ControlloStampa = dlsym(handle, "vsprintf");

	if ((errore = dlerror()) != NULL)  
		{
            	fputs(errore, stderr);
		exit(1); 
		}

//Caso in cui non si hanno problemi

	ControlloStampa("Prova se tutto funziona VSPRINTF: caso in cui non ho 	nessuno dei due simboli speciali cercati");

//Casi in cui si hanno problemi

	ControlloStampa("VSPRINTF:E' presente il simbolo %n");
	ControlloStampa("VSPRINTF:E' presente il simbolo $");
//-----------------------------------------------------------------------
// Caso vsnprintf

	ControlloStampa = dlsym(handle, "vsnprintf");

	if ((errore = dlerror()) != NULL)  
		{
            	fputs(errore, stderr);
		exit(1); 
		}

//Caso in cui non si hanno problemi

	ControlloStampa("Prova se tutto funziona VSNPRINTF: caso in cui non ho 	nessuno dei due simboli speciali cercati");

//Casi in cui si hanno problemi

	ControlloStampa("VSNPRINTF:E' presente il simbolo %n");
	ControlloStampa("VSNPRINTF:E' presente il simbolo $");

//NELLA LIBRERIA RICORDATI DOPO OGNI FUNZIONE PRIMA DI CHIUDERE LA FUNZIONE DI FARE UNA STAMPA DEL TIPO FUNZIONA/NON FUNZIONA PER IL DEBUG









