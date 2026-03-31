#include<iostream>
#include <string>
#include <sys/socket.h> 
#include <netinet/in.h>
#include <unistd.h>
//last three headers are POSIX headers for socket programming written in C, but can be used in C++ as well.

int main(){
    int server_fd;
    server_fd =socket(AF_INET, SOCK_STREAM,, 0);
    if(server_fd==-1){
        cout<<"Socket creation failed"<<endl;
        return 1;
    }
    cout<<"socket created successfully"<<endl;
    return 0;
}