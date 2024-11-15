#include <stdio.h> // std input output 
#include <stdlib.h> // std library
#include <string.h> // for strings 
#include <unistd.h>    // for miscellaneous functions
#include <sys/types.h> // for types TCP / UDP
#include <sys/socket.h> // for sockets
#include <netinet/in.h> // for Address family 

enum errorCode
{
    SUCCESS = 0,
    ERROR_AES_UNKNOWN_KEYSIZE,
    ERROR_MEMORY_ALLOCATION_FAILED,
};

