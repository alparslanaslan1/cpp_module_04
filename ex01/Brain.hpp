#pragma once

#include "iostream"

class Brain 
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string type);
        Brain(const Brain& other);
        ~Brain();
        Brain& operator=(const Brain& other);
        std::string getIdea(size_t index);
        
        void setIdea(std::string idea, size_t index);  
};