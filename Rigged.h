#ifndef RIGGED_H
#define RIGGED_H
#include <string>
// using namespace std; <-- DUMB WAY
using std::string;


class Rigged 
{
  public:
    //List functions
    //this function takes a string
    void enterName(string);
    string winner();

  private:
    //this is a member variable
    string name;
};
#endif
