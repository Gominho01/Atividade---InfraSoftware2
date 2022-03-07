#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>


int main(void) {
  int pipeFileDescriptor[2];
  char writeMessages[2][20] = {"Message 1","New message"};
  char readMessages[20];
  int writeInt = func();
  int readInt;
  pid_t pid;
  pid = fork();
  int returnpipe = pipe(pipeFileDescriptor);
  if (returnpipe == -1)
    printf("Error to create pipe!\n");
    return 1;
  }
  if (pid == 0){
    read(pipeFileDescriptor[0], readMessages, sizeof(readMessages));
    printf("Lendo mensagem 1: \"%s\"\n", readMessages);
    read(pipeFileDescriptor[0], &readInt, sizeof(readMessages));
    printf("Lendo mensagem 2: \"%s\"\n", readInt);
  }
  else {
    printf("Escrevendo mensagem 1: \"%s\"\n", writeMessages[i]);
    write(pipeFileDescriptor[1], writeMessages[0], sizeof(writeMessages[0]));
    printf("Writing message int: \"%s\"\n", writeInt);
    write(pipeFileDescriptor[1], writeMessages[1], sizeof(writeMessages[1]));
  }


  
}
