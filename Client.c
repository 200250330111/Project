#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <project.c>
int main(){
  int clientSocket;
  struct sockaddr_in serverAddr;
 
  clientSocket = socket(PF_INET, SOCK_STREAM, 0);
  
  
  serverAddr.sin_family = AF_INET;
  
  serverAddr.sin_port = htons(7891);
  
  serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	
  memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);  

  
  addr_size = sizeof serverAddr;
  connect(clientSocket, (struct sockaddr *) &serverAddr, addr_size);

  
  recv(clientSocket, buffer, 1024, 0);

  
  printf("Data received: %s",buffer);   
close(fd);
  return 0;
}
