// test.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#undef UNICODE

#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>
#include <string>
#include <iostream>
//#include "Sea.h"
#include "User.h"


// link with Ws2_32.lib
#pragma comment (lib, "Ws2_32.lib")

SOCKET initSocket() {
	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;

	printf("\nInitialising Winsock...");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf("Failed. Error Code : %d", WSAGetLastError());
		return 1;
	}

	printf("Initialised.\n");

	//Create a socket
	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Could not create socket : %d", WSAGetLastError());
	}

	printf("Socket created.\n");


	inet_pton(AF_INET, "188.213.174.117", &(server.sin_addr));
	server.sin_family = AF_INET;
	server.sin_port = htons(9999);

	//Connect to remote server
	if (connect(s, (struct sockaddr *)&server, sizeof(server)) < 0)
	{
		puts("connect error");
		return 1;
	}

	puts("Connected");

	return s;
}


int main(){

	char c;
	SOCKET s = initSocket();
	Sea sea;
	Screan sc;
	User a(&sea, &sc, s);

	bool t = a.Mshot(1, 2);
	char server_reply[2000];
	int recv_size;

	std:: cin >> c;

	if ((recv_size = recv(s, server_reply, 2000, 0)) == SOCKET_ERROR)
	{
		puts("recv failed");
	}

	puts("Reply received\n");

	//Add a NULL terminating character to make it a proper string before printing
	server_reply[recv_size] = '\0';
	puts(server_reply);


	std::cin >> c;

	a.Mshot(1, 2);

	/*char* message = "Cdupa~";
	if (send(s, message, strlen(message), 0) < 0)
	{
		puts("Send failed");
		return 1;
	}
	puts("Data Send\n");
	*/
	
}