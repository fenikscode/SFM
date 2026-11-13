#pragma once

#include    "dataset.hpp"

class node
{
private:
    int             ID;
    role            roleInTheCluster;

    std::string     machineName;
    std::string     osName;
    std::string     addressIP;

    status          activeStatus;
    


public:
    node(/* args */);
    ~node();
};

node::node(/* args */)
{
}

node::~node()
{
}
