// Catlynne Quarles
// CIS 1202 R02
// May 3, 2022
// Function Templates Part A

#include <iostream>
#include <algorithm>

using namespace std;


char character(char start, int offset)
{
    char newValue;
    string invalidRangeException = "Error: not a letter.";
    char invalidCharacterException [] = {"Error: start must be greater that A and less than Z."};
    {
          try
            {
                cout << "Start: " << start << endl;
                cout << "Offset: " << offset << endl;
                
                if (!isalpha(start))
                {
                    throw invalidRangeException;
                }
                else if (start <= 'a' || start <= 'A')
                {
                    throw invalidCharacterException;
                }
                else if (start >= 'z' || start <= 'Z')
                {
                    throw invalidCharacterException;
                }
                
                newValue = start + offset;
            
                
            }
            catch(string invalidRangeException)
            {
                cout << invalidRangeException << endl;
            }
            catch(char invalidCharacterException[])
            {
                cout << invalidRangeException << endl;
            }
           
        
    }
    return newValue;
}
int main()
{
   
}
