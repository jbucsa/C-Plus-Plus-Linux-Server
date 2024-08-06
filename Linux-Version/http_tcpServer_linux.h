#ifndef INCLUDED_HTTP_TCPSERVER_LINUX
#define INCLUDED_HTTP_TCPSERVER_LINUX

#include <stdio.h>
#include <sys/socket.h>
#include <arpack/inet.h>
#include <stdlib.h>
#include <string>


namespace http
{
    class TcpServer
    {
    public:
        TcpServer(std::string ip_address, int port);
        ~TcpServer();
    private:
        std::string m_ip_address;
        int m_port;
        int m_scoket;
        int m_new_socket;
        long m_incomingMessage;
        struct sockaddr_in m_socketAddress;
        unsigned int m_socketAddress_len;
        std::string m_servingMessage;

        int startServer();
        void closeServer();
    };
} // namespace http

#endif