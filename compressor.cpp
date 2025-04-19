#include "compressor.hpp"
#include "lz77.hpp"

Compressor::Compressor(const std::string& path) : filePath(path), outputString("") // Constructor
{
    file.open(path);
    if(!file.is_open())
    {
        std::cerr << "Erorr in file opening" << std::endl;
        exit(0);
    }
    
}

Compressor::~Compressor() // Destructor
{
    file.close();
}

void Compressor::compress()
{
    lz77_compression(outputString, file);
}





