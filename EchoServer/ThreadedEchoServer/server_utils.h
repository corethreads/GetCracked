/******************************************************************************
 *                                                                            *
 *  ##  Project      : Multi-Threaded EchoServer                              *
 *  ##  File         : server_utils.h                                         *
 *  ##  Description  : First version of Multi-Threaded server                 *
 *  ##  Author       : Leonne Kamau <leonnekamau28@gmail.com>                 *
 *  ##  Created      : 2026-09-27                                             *
 *  ##  Modified     : NULL                                                   *
 *  ##  Version      : 0.0.1                                                  *
 *  ##  License      : NULL                                                   *
 *                                                                            *
 ******************************************************************************/

#ifndef SERVER_UTILS_H
#define SERVER_UTILS_H

// Constants

#include <stdio.h>
#define SOCKET_PORT 7070
#define CONNECTION_LENGTH 10
#define MESSAGE_BUFFER 1024
#define BYTES_TO_READ (MESSAGE_BUFFER - 1)

// Logs
void error_log(char *message);
void success_log(char *message);

// Thread driver

// Services
int create_server_socket(void);
int bind_server_socket(int server_socket);
int start_listening(int server_socket);
int accept_client_connections(int server_socket);
ssize_t recieve_client_message(int client_socket, char *messageBuffer,
                               size_t buffer_size);
ssize_t write_to_client(int client_socket, char *message, size_t message_len);
void *handle_client_communication(void *client_argument);
int run_echo_server(int server_socket);
void server_cleanup(int server_socket);

#endif // !SERVER_UTILS_H
