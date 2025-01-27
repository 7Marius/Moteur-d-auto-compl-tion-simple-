#include<iostream>
#include"centre.h"
int length(std::string word)
{
    int j = 0; 
    for(int i = 0; word[i] != '\0'; i++) 
    {
        j++;
    }
    return j; 
}