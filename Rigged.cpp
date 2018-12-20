#include <string>
#include "Rigged.h"
using std::string;
// what our functions do
void Rigged::enterName(string enteredName)
{
  name = enteredName;
}

string Rigged::winner()
{
  return name;
}
