#include"stdafx.h"
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <WinSock2.h> 
#include <direct.h>
#include <io.h>
#include <windows.h>
#include <Shlwapi.h>
#include <iostream>
#include <string>
#include <vector>
#pragma comment(lib,"shlwapi.lib")
#define PORT 8087 
#define SERVER_IP "127.0.0.1" 
#define BUFFER_SIZE 1024 
#define FILE_NAME_MAX_SIZE 512 
#pragma comment(lib, "WS2_32") 

using namespace std;
void findFile(string dir);
void filels();
void udpServerListen();
int menu()
{
	system("cls");
	cout << "--------------------------------" << endl;
	cout << "    UDP CONSOLE Server" << endl;
	cout << "                                              " << endl;
	cout << "    1.����" << endl;
	cout << "    0.Exit" << endl;
	cout << "                                              " << endl;
	cout << "--------------------------------" << endl;

	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:udpServerListen(); menu();
	case 2:filels(); menu;
	case 0:return 0; break;
	}
}
int main()
{
	menu();
}

void findFile(string dir)
{
	WIN32_FIND_DATAA stFD;							//����ļ���Ϣ�Ľṹ��
	HANDLE h;
	string temp;

	temp = dir + "\\*";
	h = FindFirstFileA(temp.c_str(), &stFD);			//����Ŀ¼���

	while (FindNextFileA(h, &stFD))						//��ȡĿ¼�����ӦĿ¼���������ļ�
	{
		temp = dir + "\\" + stFD.cFileName;

		if (temp == dir + "\\..")										//��һ��·��
		{
			continue;
		}
		else if (PathIsDirectoryA(temp.c_str()))		//������Ŀ¼
		{
			findFile(temp);												//�ݹ����
		}
		else
		{

			cout << stFD.cFileName << endl;				//��ӡ�ļ���
		}
	}

	return;
}

void filels()
{
	char buf[80];
	_getcwd(buf, sizeof(buf));
	printf("current working directory: %s\n", buf);
	cout << "Content File" << endl;
	findFile(buf);
	char temp;
	cin >> temp;
}

void udpServerListen()
{
	// ��������ʼ��һ�������(����)�ĵ�ַ�ṹ 
	sockaddr_in server_addr;
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.S_un.S_addr = INADDR_ANY;
	server_addr.sin_port = htons(PORT);

	// ��ʼ��socket dll 
	WSADATA wsaData;
	WORD socketVersion = MAKEWORD(2, 0);
	if (WSAStartup(socketVersion, &wsaData) != 0)
	{
		printf("Init socket dll error!");
		exit(1);
	}

	// ����socket 
	SOCKET m_Socket = socket(AF_INET, SOCK_STREAM, 0);
	if (SOCKET_ERROR == m_Socket)
	{
		printf("Create Socket Error!");
		exit(1);
	}

	//��socket�ͷ����(����)��ַ 
	if (SOCKET_ERROR == bind(m_Socket, (LPSOCKADDR)&server_addr, sizeof(server_addr)))
	{
		printf("Server Bind Failed: %d", WSAGetLastError());
		exit(1);
	}

	//���� 
	if (SOCKET_ERROR == listen(m_Socket, 10))
	{
		printf("Server Listen Failed: %d", WSAGetLastError());
		exit(1);
	}


	while (1)
	{
		printf("Listening To Client...\n");

		sockaddr_in client_addr;
		int client_addr_len = sizeof(client_addr);

		SOCKET m_New_Socket = accept(m_Socket, (sockaddr *)&client_addr, &client_addr_len);
		if (SOCKET_ERROR == m_New_Socket)
		{
			printf("Server Accept Failed: %d", WSAGetLastError());
			break;
		}

		char buffer[BUFFER_SIZE];
		memset(buffer, 0, BUFFER_SIZE);
		if (recv(m_New_Socket, buffer, BUFFER_SIZE, 0) < 0)
		{
			printf("Server Receive Data Failed!");
			break;
		}

		char file_name[FILE_NAME_MAX_SIZE + 1];
		memset(file_name, 0, FILE_NAME_MAX_SIZE + 1);
		strncpy(file_name, buffer, strlen(buffer)>FILE_NAME_MAX_SIZE ? FILE_NAME_MAX_SIZE : strlen(buffer));
		printf("%s\n", file_name);
		if (strcmp(file_name, "ls") == 0)
		{


		}
		FILE * fp = fopen(file_name, "rb"); //windows����"rb",��ʾ��һ��ֻ���Ķ������ļ� 
		if (NULL == fp)
		{
			printf("File: %s Not Found\n", file_name);
		}
		else
		{
			memset(buffer, 0, BUFFER_SIZE);
			int length = 0;

			while ((length = fread(buffer, sizeof(char), BUFFER_SIZE, fp)) > 0)
			{
				if (send(m_New_Socket, buffer, length, 0) < 0)
				{
					printf("Send File: %s Failed\n", file_name);
					break;
				}
				memset(buffer, 0, BUFFER_SIZE);
			}

			fclose(fp);
			printf("File: %s Transfer Successful!\n", file_name);
		}
		closesocket(m_New_Socket);
	}

	closesocket(m_Socket);
	//�ͷ�winsock�� 
	WSACleanup();
}