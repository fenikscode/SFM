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
    
    int             coreCount;
    int             threadCount;
    
    
    float           activeUsage;
    float           avgUsage;
    float           frequency;
    
};
