#ifndef TRIVIAQUESTION__H
#define TRIVIAQUESTION__H
#include<string>
/*
Ashleen Sandhu, CS132, Spring 2023
Programming Assignment - Trivia

This programs behaviour is to have one main parent class of trivia question
all the children use when being created. The trivia question takes care of the
amount of points they are worth and asking the question. In the ask the question
function it asks the user the question deals with input and determins if the
answer is correct or not. 
*/
//main class
class TriviaQuestion 
{
   public:
      TriviaQuestion() {};
      int getMax() {return points;}
      virtual int askQuestion()=0;
      
   protected:
      int points=0;
      std::string question="";
};

class FIB : public TriviaQuestion
{
   public:
      FIB(std::string);
      virtual int askQuestion();
   private:
       std::string ans;
       std::string userans;
       std::string correct;
};

class threePart : public TriviaQuestion
{
   public:   
      threePart(std::string);
      virtual int askQuestion();
   private:
      std::string ans1;
      std::string ans2;
      std::string ans3;
      int userans;
};

class fourPart : public TriviaQuestion
{
   public:
      fourPart(std::string);
      virtual int askQuestion();
   private:
       std::string ans1;
       std::string ans2;
       std::string ans3;
       std::string ans4;
       int userans;
};

class TF : public TriviaQuestion
{
   public:
      TF(std::string);
      virtual int askQuestion();
   private:
      std::string ans;
      std::string userans;
      std::string correct;
};

class numeric : public TriviaQuestion
{
   public:
      numeric(std::string);
      virtual int askQuestion();
   private:
      int ans;
      int userans;
};

#endif