#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

int
main(int argc, 
     char *argv[], 
     char *env[]) {

  int value1;
  int value2;

  /* Genera un numero aleatorio para determinar cual
     sera la causa del suicidio */
  srandom(time(NULL));

  switch (random() % 7) {
  case 0: /* Suicidio voluntario */
    exit(random() % 10);
    break;

  case 1: /* Muerte por descuido */
    value1 = value1 / (value2 - value2);
    break;

  case 2: /* Auto-asesinato */
    kill(getpid(), SIGKILL);
    break;

  case 3: /* Suicidio por espera */
    alarm(random() % 60); /* Espera hasta maximo 60 segundos */
    break;

  case 4: /* Asesinado en intento de terrorismo */
    __asm__("sti");
    break;

  case 5: /* Muerte por mal comportamiento */
    value1 = *((int*) NULL);
    break;

  default:
    break;
  }

  return 0; /* Muerte despues de una vida productiva */
}
