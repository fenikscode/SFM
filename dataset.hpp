#pragma once

enum role
{
    GENERAL,
    COMPUTION,
    STORAGE,
    IOT         //InternetOfThings
};

enum status
{
    HEALTHY,
    PROBLEM,
    DOWN
};

struct cpu
{
    std::string     model;
    std::string     architecture;

    int             coreSockets;
    int             coreCount;
    int             threadCount;

    float           activeUsage;
    float           avgUsage;
    float           frequency;

};

struct memory
{
    int             memTotal;
    int             memFree;
    int             memAvailable;

    int             swapTotal;
    int             swapFree;
    int             swapCached;
};

struct storage
{
    std::string     fileName;
    std::string     sizeOfDisk;
    std::string     spaceUsed;
    std::string     spaceAvailable;
    std::string     percentUsed;
    std::string     mountPoint;
};

struct interface
{
    std::string     name;
    std::string     macAddress;
    
    int             mtu;
    int             packetsReceived;
    int             packetsSend;
};