//==========================================================
// Proff. Oulette wrote this, I copied it and am storing it on my
// git repo because it had a lot of interesting techniques in it.
//
// Title: cin Simulator
// Description:
//   This C++ application simulates cin statements.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

//==========================================================
// menuOption
//==========================================================
int menuOption(
  int bufferSize, 
  char buffer[], 
  int prevPtr, 
  int currPtr)
{

  // Declare variables
  int option;

  // Loop to show input buffer
  cout << endl << endl;
  cout << "Input buffer - characters to the left of C " 
       << "have already been read" << endl;
  cout << "  ";
  for (int i = 0; i < bufferSize; i++)
    cout << " -";
  cout << endl;
  cout << "  ";
  for (int i = 0; i < bufferSize; i++)
    cout << "|" << buffer[i];
  cout << "|" << endl;
  cout << "  ";
  for (int i = 0; i < bufferSize; i++)
    cout << " -";
  cout << endl;
  for (int i = 0; i <= prevPtr; i++)
    cout << "  ";
  cout << " P";
  for (int i = 0; i < (currPtr - prevPtr - 1); i++)
    cout << "  ";
  cout << " C" << endl;

  // Show menu and get option
  cout << endl;
  cout << "cin Menu" << endl;
  cout << "1-Call cin" << endl;
  cout << "2-Call cin.get(chr)" << endl;
  cout << "3-Call getline(cin, token)" << endl;
  cout << "4-Call cin.peek()" << endl;
  cout << "5-Call cin.ignore(count, '\\n')" << endl;
  cout << "6-Reset input buffer" << endl;
  cout << "7-Show application key" << endl;
  cout << "9-Exit" << endl << endl;
  cout << "Enter an option: ";
  cin >> option;

  // Return option
  return option;

}

//==========================================================
// resetBuffer
//==========================================================
void resetBuffer(int bufferSize, char buffer[])
{

  // Declare constants
  const int ARRAY_SIZE = 30;

  // Declare variables
  char charSet[] = {'a','b','c','d','e','f','g','B','T','R'};

  // Initialize random number generator
  srand(time(0));

  for (int i = 0; i < bufferSize; i++)
    buffer[i] = charSet[rand() % sizeof(charSet)];
}

//==========================================================
// main
//==========================================================
int main()
{

  // Declare constants
  const int BUFFER_SIZE = 30;

  // Declare variables
  char inputBuffer[BUFFER_SIZE];
  int prevPtr;
  int currPtr;
  int scanCount;
  int scanMax;
  int option;
  double rNum;
  char chr;
  string token;

  // Show application header
  cout << "Welcome to the cin Simulator" << endl;
  cout << "----------------------------" << endl;
  
  // Initialize input buffer
  resetBuffer(BUFFER_SIZE, inputBuffer);
  prevPtr = -1;
  currPtr = 0;

  // Loop to process menu options
  option = menuOption(BUFFER_SIZE, inputBuffer, prevPtr, currPtr);
  while (option != 9)
  {

    // Process cin
    if (option == 1)
    {

      // Save current pointer
      prevPtr = currPtr;

      // Loop to scan past whitespace characters
      while (currPtr < BUFFER_SIZE && 
            (inputBuffer[currPtr] == 'B' || 
             inputBuffer[currPtr] == 'T' || 
             inputBuffer[currPtr] == 'R'))
        currPtr = currPtr + 1;

      // Loop to build token of non-whitespace characters
      token = "";
      while (currPtr < BUFFER_SIZE &&
        (inputBuffer[currPtr] != 'B' &&
        inputBuffer[currPtr] != 'T' &&
        inputBuffer[currPtr] != 'R'))
      {
        token = token + inputBuffer[currPtr];
        currPtr = currPtr + 1;
      }
      cout << "\ncin read '" << token 
           << "' from the input buffer." << endl;

    }

    // Process cin.get
    else if (option == 2)
    {
      cout << "\ncin.get(chr) read '" << inputBuffer[currPtr]
           << "' from the input buffer." << endl;
      cout << "Input buffer pointer moved to the right one spot."
           << endl;
      prevPtr = currPtr;
      currPtr = prevPtr + 1;
    }

    // Process getline
    else if (option == 3)
    {

      // Save current pointer
      prevPtr = currPtr;

      // Loop to build token of characters
      token = "";
      while (currPtr < BUFFER_SIZE && inputBuffer[currPtr] != 'R')
      {
        token = token + inputBuffer[currPtr];
        currPtr = currPtr + 1;
      }
      cout << "\ngetline(cin, str) read '" << token 
           << "' from the input buffer." << endl;
      cout << "Input buffer pointer moved to the first " 
           << "character after 'R'." << endl;
      currPtr = currPtr + 1;

    }
    // Process cin.peek
    else if (option == 4)
    {
      cout << "\ncin.peek() read '" << inputBuffer[currPtr] 
           << "' from the input buffer." << endl;
      cout << "Input buffer pointer NOT moved." << endl;
    }

    // Process cin.ignore
    else if (option == 5)
    {

      // Save current pointer
      prevPtr = currPtr;

      // Prompt for and get number of characters to scan past
      cout << "\nEnter the number of characters to scan past: ";
      cin >> scanMax;

      // Loop to scan past characters until 'R'
      scanCount = 0;
      while (currPtr < BUFFER_SIZE && 
             scanCount <= scanMax && 
             inputBuffer[currPtr] != 'R')
      {
        scanCount = scanCount + 1;
        currPtr = currPtr + 1;
      }

      // Test how scan ended
      cout << "\nignore(" << scanMax << ", '\\n') scanned ";
      if (scanCount > scanMax)
      {
        cout << "past " << scanMax 
          << " character(s) in the input buffer." << endl;
        cout << "Input buffer pointer moved to the first "
             << "character after the scanned characters." << endl;
        currPtr = currPtr - 1;
      }
      else
      {
        cout << "past 'R' (\\n) in the input buffer." << endl;
        cout << "Input buffer pointer moved to the first "
          << "character after the 'R'." << endl;
        currPtr = currPtr + 1;
      }

    }

    // Process reset input buffer
    else if (option == 6)
    {

      // Reset input buffer
      resetBuffer(BUFFER_SIZE, inputBuffer);
      prevPtr = -1;
      currPtr = 0;
      cout << "Input buffer reset." << endl;

    }

    // Process help
    else if (option == 7)
    {
      cout << "\nApplication key" << endl;
      cout << "C-current input buffer pointer" << endl;
      cout << "P-previous input buffer pointer" << endl;
      cout << "B-blank character" << endl;
      cout << "T-tab character" << endl;
      cout << "R-enter/return character" << endl;
    }

    // Handle unknown option
    else
    {
      cout << "Invalid option of '" << option << "'." << endl;
    }


    // Test if input buffer needs to be reset
    if (currPtr >= (BUFFER_SIZE - 1))
    {

      // Inform user that input buffer needs to be reset
      cout << "\nThe input buffer needs to be reset." << endl;
      cout << "Press any key to continue ..." << endl;
      _getch();

      // Reset input buffer
      resetBuffer(BUFFER_SIZE, inputBuffer);
      prevPtr = -1;
      currPtr = 0;
      cout << "Input buffer reset." << endl;

    }

    // Get next option
    option = menuOption(BUFFER_SIZE, inputBuffer, prevPtr, currPtr);

  }

  // Show application close
  cout << "\nEnd of the cin Simulator" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
