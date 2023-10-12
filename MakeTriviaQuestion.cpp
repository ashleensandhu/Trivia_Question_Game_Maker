#include<string>

#include "MakeTriviaQuestion.h"
#include "TriviaQuestion.h"
#include "ExtraFunctions.h"
/*
The programs behavior is to take a string as input
tear it into two, the first being the three letter 
string to determine what type of trivia question this is
and the second being the rest of the line. it will then
return a pointer to the class I just created.
*/
TriviaQuestion* makeQuestion(std::string x)
{
   std::string x1 = upperCase(x.substr(0, 3));
   x.erase(0, 3);
   std::string x2= trim(x);
   
   if(x1=="FIB")
   {
      TriviaQuestion* temp = new FIB(x2);
      return temp;
   }
   
   if(x1=="MC3")
   {
      TriviaQuestion* temp = new threePart(x2);
      return temp;
   }
   
   if(x1=="MC4")
   {
      TriviaQuestion* temp = new fourPart(x2);
      return temp;
   }
   
   if(x1=="TOF")
   {
      TriviaQuestion* temp = new TF(x2);
      return temp;
   }
   
   if(x1=="NUM")
   {
      TriviaQuestion* temp = new numeric(x2);
      return temp;
   }
}

