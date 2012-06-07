#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[], char *env[]) {

	// the generator produces one initial seed, (the cause for the suicide)
  srand(time(NULL));
  int res, cause = rand()%6;

	if( !cause ) exit(rand()%10);
	else if( cause == 1 ) res = res/0;
	else if( cause == 2 ) kill(getpid(), SIGKILL);
  else if( cause == 3 ) alarm(random() % 60);
  else if( cause == 4 ) __asm__("sti");
	else if( cause == 5 ) res = *((int*) NULL);

  return 0;
}