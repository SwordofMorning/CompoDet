#include "config/config.h"
#include <iostream>
#include <thread>

int init()
{
    Config_Init();
    return 0;
}

int exit()
{
    Config_Exit();
    return 0;
}

int main()
{
    init();
    
    while (1)
    {
        // do sth
    }

    exit();
    return 0;
}