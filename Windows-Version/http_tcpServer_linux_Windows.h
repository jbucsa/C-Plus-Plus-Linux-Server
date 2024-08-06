#ifndef INCLUDED_HTTP_TCPSERVER_LINUX
#define INCLUDED_HTTP_TCPSERVER_LINUX

#include <stdio.h>
#include <winsock.h>
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
        SOCKET m_scoket;
        SOCKET m_new_socket;
        long m_incomingMessage;
        struct sockaddr_in m_socketAddress;
        int m_socketAddress_len;
        std::string m_servingMessage;
        WSADATA m_wsaData;

        int startServer();
        void closeServer();
    };
} // namespace http

#endif