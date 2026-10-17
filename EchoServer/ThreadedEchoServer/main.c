/******************************************************************************
 *                                                                            *
 *  ##  Project      : Multi-Threaded EchoServer                              *
 *  ##  File         : main.c                                                 *
 *  ##  Description  : First version of Multi-Threaded server                 *
 *  ##  Author       : Leonne Kamau <leonnekamau28@gmail.com>                 *
 *  ##  Created      : 2026-09-27                                             *
 *  ##  Modified     : NULL                                                   *
 *  ##  Version      : 0.0.1                                                  *
 *  ##  License      : NULL                                                   *
 *                                                                            *
 ******************************************************************************/

#include "server_utils.h"

int main(void) {
  int server_socket = create_server_socket();
  bind_server_socket(server_socket);
  start_listening(server_socket);

  run_echo_server(server_socket);
  server_cleanup(server_socket);

  return 0;
}
