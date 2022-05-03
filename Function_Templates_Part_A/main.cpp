// Catlynne Quarles
// CIS 1202 R02
// May 3, 2022
// Function Templates Part A

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;


char character(char start, int offset)
{
    char newValue;
    string invalidRangeException = "Error: Not a letter.";
    string invalidCharacterException = "Error: New value must be greater that A and less than Z.";
    string invalidUpperToLower = "Error: Cannot switch from uppercase to lowercase or vice versa.";
    
          
                cout << "Start: " << start << endl;
                cout << "Offset: " << offset << endl;
                
                newValue = start + offset;
                
                if (!isalpha(start))
                {
                    throw invalidRangeException;
                }
                else if (!isalpha(newValue))
                {
                    throw invalidCharacterException;
                }
                else if ((isupper(start) && islower(newValue)) || (islower(start) && isupper(newValue)))
                {
                    throw invalidUpperToLower;
                }
               
            
            
           
        
    
    return newValue;
}
int main()
{
    char start;
    int offset;
    bool again = true;
    char newValue;
    
    while(again)
    {
        cout << "Enter the starting letter." << endl;
        cin >> start;
        cout << "Enter the amount you want to offset by." << endl;
        cin >> offset;
        
        try
          {
            newValue = character(start, offset);
          }
        catch(string invalidRangeException)
        {
            cout << invalidRangeException << endl;
            newValue = ' ';
        }
        catch(string invalidCharacterException[])
        {
            cout << invalidCharacterException << endl;
            newValue = ' ';
        }
        catch(string invalidUppertoLower)
        {
            cout << invalidUppertoLower << endl;
            newValue = ' ';
        }
        
        cout << "New value: " << newValue << endl;
        
        cout << "Enter 1 to process again, else enter 0." << endl;
        cin >> again;
        
        
    }
}
