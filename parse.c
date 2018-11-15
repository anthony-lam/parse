#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char ** parse_args(char * line){
  char ** args = malloc(5 * sizeof(char *));
  int i;
  for (i = 0; line; i++){
  	args[i] = strsep(&line, " ");
  }
  return args;
}

int main(){
	char line[100] = "ls -a -l";
	char ** args = parse_args(line);
	execvp(args[0], args);
	return 0;
}
