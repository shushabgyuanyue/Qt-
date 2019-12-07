#include "stdafx.h"
#include<iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <WinSock2.h> 

#define PORT 8087 
#define SERVER_IP "127.0.0.1" 
#define BUFFER_SIZE 1024 
#define FILE_NAME_MAX_SIZE 512 
#pragma comment(lib, "WS2_32") 

using namespace std;

void udpAccess();
int menu();
int main()
{
	menu();
	return 0;
}

int menu()
{
	system("cls");
	cout << "--------------------------------" << endl;
	cout << "    UDP CONSOLE Client" << endl;
	cout << "                                              " << endl;
	cout << "    1.�ļ�����" << endl;
	cout << "    0.Exit" << endl;
	cout << "                                              " << endl;
	cout << "--------------------------------" << endl;

	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:udpAccess(); menu();
	case 2:return 0; break;
	}

	return 0;
}

void udpAccess()
{
	// ��ʼ��socket dll 
	WSADATA wsaData;
	WORD socketVersion = MAKEWORD(2, 0);
	if (WSAStartup(socketVersion, &wsaData) != 0)
	{
		printf("Init socket dll error!");
		exit(1);
	}

	//����socket 

	SOCKET c_Socket = socket(AF_INET, SOCK_STREAM, 0);
	if (SOCKET_ERROR == c_Socket)
	{
		printf("Create Socket Error!");
		system("pause");
		exit(1);
	}
	//ָ������˵ĵ�ַ 
	sockaddr_in server_addr;
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.S_un.S_addr = inet_addr(SERVER_IP);
	server_addr.sin_port = htons(PORT);

	if (SOCKET_ERROR == connect(c_Socket, (LPSOCKADDR)&server_addr, sizeof(server_addr)))
	{
		printf("Can Not Connect To Server IP!\n");
		system("pause");
		exit(1);

	}

	//�����ļ��� 
	char file_name[FILE_NAME_MAX_SIZE + 1];
	memset(file_name, 0, FILE_NAME_MAX_SIZE + 1);
	printf("Please Input File Name On Server: ");
	scanf("%s", &file_name);

	//���建����buffer�洢�ļ���
	char buffer[BUFFER_SIZE];
	memset(buffer, 0, BUFFER_SIZE);
	strncpy(buffer, file_name, strlen(file_name)>BUFFER_SIZE ? BUFFER_SIZE : strlen(file_name));

	//������������ļ��� 
	if (send(c_Socket, buffer, BUFFER_SIZE, 0) < 0)
	{
		printf("Send File Name Failed\n");
		system("pause");
		exit(1);
	}

	//���ļ���׼��д�� 
	FILE * fp = fopen(file_name, "wb"); //windows����"wb",��ʾ��һ��ֻд�Ķ������ļ� 
	if (NULL == fp)
	{
		printf("File: %s Can Not Open To Write\n", file_name);
		system("pause");
		exit(1);
	}
	else
	{
		memset(buffer, 0, BUFFER_SIZE);
		int length = 0;
		while ((length = recv(c_Socket, buffer, BUFFER_SIZE, 0)) > 0)

		{
			if (fwrite(buffer, sizeof(char), length, fp) < length)
			{
				printf("File: %s Write Failed\n", file_name);
				break;
			}


			memset(buffer, 0, BUFFER_SIZE);
		}

		printf("Receive File: %s From Server Successful!\n", file_name);
	}

	fclose(fp);
	//�ر�socket
	closesocket(c_Socket);
	//�ͷ�winsock�� 
	WSACleanup();

	system("pause");

}