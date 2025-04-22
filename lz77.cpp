#include "lz77.hpp"
#include <fstream>
#include <string>
#include <iostream>
void lz77_compression(std::string &outputString, std::fstream& file)
{
    const int SEARCH_BUFFER_SIZE = 2048;
    const int LOOKAHEAD_BUFFER_SIZE = 8;

    char searchBuffer[SEARCH_BUFFER_SIZE];
    char lookAheadBuffer[LOOKAHEAD_BUFFER_SIZE];

    file.read(searchBuffer, SEARCH_BUFFER_SIZE);
    
    /*
    We will look for a substring in the lookaheadBuffer that exists
    in the searchBuffer if the exists we can encode it
    */    

    long long offset = 0; // Current index that we are looking ahead from in the file
    /* 
    First of all we will append the current search buffer as its the first and there
    is nothing to encode it with
    */ 

    outputString += searchBuffer;
    offset += SEARCH_BUFFER_SIZE;

    /*
    We will iterate through all the possible substring in the lookAheadBuffer
    and check if exists in the search buffer
    if it does we will encode it
    */

    


}

std::string substringExists(const std::string& subString, char searchBuffer[], char lookAheadBuffer[])
{
    // Iterate through all substring and try to match the longest one to one in the search buffer
    std::string longestSubString = "";
    int offsetLookAhead = 0; // Distance from the start of the lookahead buffer to the substring
    int offsetSearch = 0; // Distance from the start of the search buffer to the substring
    int totalOffset = 0; // Offset between the distances

    // Check for longest substring that has a match
    for(int i = 0 ; i < sizeof(lookAheadBuffer); ++i)
    {
        std::string subStr = "";
        for(int j = i ; j < sizeof(lookAheadBuffer) ; ++j)
        {
            subStr += lookAheadBuffer[j];
            size_t x = substringPresent(subStr, searchBuffer);
            if(x != std::string::npos && longestSubString.length() < subStr.length());
            {
                longestSubString = subStr;
                offsetLookAhead = i;
                offsetSearch = x;
                totalOffset = sizeof(searchBuffer) + offsetLookAhead - offsetSearch;
            }

        }
    }


}

std::string encodeSubString(const std::string& subString, char searchBuffer[], char lookAheadBuffer[], int offset, char nextChar)
{
    if(subString.length() == 0 ) // There is no match
    {
        std::string s = "";
        
    }
    else // There is a match
    {
        std::string s = "";
        
    }
}

int substringPresent(const std::string& subString, char searchBuffer[])
{
    return static_cast<std::string>(searchBuffer).find(subString);
}
