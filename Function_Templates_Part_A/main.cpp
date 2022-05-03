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
                
                newValue = start + offset;
                
                if (!isalpha(start))
                {
                    throw invalidRangeException;
                }
                else if (newValue < 'a' || newValue < 'A')
                {
                    throw invalidCharacterException;
                }
                else if (newValue > 'z' || newValue < 'Z')
                {
                    throw invalidCharacterException;
                }
            }
            catch(string invalidRangeException)
            {
                cout << invalidRangeException << endl;
                newValue = ' ';
            }
            catch(char invalidCharacterException[])
            {
                cout << invalidRangeException << endl;
                newValue = ' ';
            }
           
        
    }
    return newValue;
}
int main()
{
    char start;
    int offset;
    bool again = true;
    
    while(again)
    {
        cout << "Enter the starting letter." << endl;
        cin >> start;
        cout << "Enter the amount you want to offset by." << endl;
        cin >> offset;
        
        char newValue = character(start, offset);
        cout << "New value: " << newValue << endl;
        
        cout << "Enter 1 to process again, else enter 0." << endl;
        cin >> again;
        
        
    }
}
