#pragma once

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>

class connection
{
    private:

        int             FD;

        std::string     ipAddress;
        int             port;

        struct sockaddr_in      socketAddr, peerAddr;
        struct sockaddr_in6     socketAddr6, peerAddr6;

    public:

        connection();
        virtual ~connection();

        void createConnection();
        void sendMessage();
        void recvMessage();
        void closeConnection();
        
        int getFD();
        int getPort();
        std::string getIPAddress();

        void setIPAddress();
        void setPort();

};

class maestro : public connection
{
    private:
        int             clusterID;
        std::string     clusterName;

    public:

        maestro();
        ~maestro();

        void bindConnection();
        void startListening();
        void acceptRequest();

        void createCluster();
        void modifiedCluster();
        void deleteCluster();

        void addNodeToCluster();
        void deleteNodeFromCluster();
        void checkNodeStatus();

};

class node : public connection
{
    private:
        int             nodeID;
        std::string     nodeName;

    public:
        node();
        ~node();

        void findMaestroServer();
        void joinCluster();
        void leaveCluster();

        void queryHardware();
        
};
