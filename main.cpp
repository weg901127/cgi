#include <iostream>
#include "unistd.h"
int main() {
    char *arg[2];
    char *env[5];
    arg[0] = "cgi_tester";
    arg[1] = NULL;
    env[0] = "REQUEST_METHOD=GET";
    env[1] = "QUERY_STRING=asfdsdfasdfas";
    env[2] = "SERVER_PROTOCOL=HTTP/1.1";
    env[3] = "PATH_INFO=../CMakeList.txt";
    env[4] = NULL;
    execve("../cgi_tester", arg,env);
    std::cout << "end" << std::endl;
    return 0;
}
