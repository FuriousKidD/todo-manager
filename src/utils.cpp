#include "../include/utils.h"
#include <iostream>

#ifdef _WIN32
    #include <Windows.h>//includes the windows api if the system is a windows system
#else
    #include <cstdlib>//if the system is linux or macos
#endif

void Utility::clearScreen(){
    #ifdef _WIN32 
        system("cls");
    #else
        system("clear");
    #endif
}
