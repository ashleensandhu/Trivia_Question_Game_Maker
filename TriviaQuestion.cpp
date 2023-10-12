using namespace std;
#include<iostream>

#include "TriviaQuestion.h"
#include "MakeTriviaQuestion.h"
#include "ExtraFunctions.h"

FIB::FIB(string x)
{
   //splitting string by colons then trimming them down
   
   int y = x.find(" ");
   points = stoi(x.substr(0, y));
   
   x.erase(0, x.find(" "));
   question = trim(x.substr(0, x.find(":")));
   
   x.erase(0, x.find(":")+1);
   ans = trim(x);
}

int FIB:: askQuestion()
{
   cout << endl;
   cout << "This is a fill in the blank question worth " << points <<  " points, please type in your answer as a value"<< endl << endl;;
   cout << "Question: " << question << endl << "----->" << endl;
   
   //taking in answer and trimmmming it 
   cin >> userans;
   userans= trim(upperCase(userans));
   correct = trim(upperCase(ans));
   
   //checking answer
   if(userans != correct)
   {
      cout <<"I am sorry, that is incorrect, the correct answer was " << ans << endl;
      return 0;
   }
   else
   {
      cout << "Correct!" << endl;
      return points;
   }

}

threePart::threePart(string x)
{
   //splitting string by colon and again trimming it down
   
   int y = x.find(" ");
   points = stoi(x.substr(0, y));
   x.erase(0, x.find(" "));
   
   question =  trim(x.substr(0, x.find(":")));
   x.erase(0, x.find(":")+1);
   
   ans1 =  trim(x.substr(0, x.find(":")));
   x.erase(0, x.find(":")+1);
   
   ans2 =  trim(x.substr(0, x.find(":")));
   x.erase(0, x.find(":")+1);

   ans3 = trim(x);

}

int threePart::askQuestion()
{
   cout << endl;
   cout << "This is a multiple choice question worth " << points << " points, please type in your answer as a value" <<endl<<endl;
   
   cout << "Question: " << question << endl;
   //make vector and suffle   
   vector<string> v;
   v.push_back(ans1);
   v.push_back(ans2);
   v.push_back(ans3);
   shuffleVector(v);
   
   cout << "1: " << v[0] << endl;
   cout << "2: " << v[1] << endl;
   cout << "3: " << v[2] << endl;
   cout << "----->" << endl;
   
   cin >> userans;
   //if user answer is out of bound repeat question
   while(userans<1 || userans>3)
   {
      cout << "Your answer should only be from 1-3. Please re-enter you answer below." << endl;
      cout << "----->" << endl;
      cin >> userans;
   }

   //ckecking answer to see if it is correct
   if(v[userans-1] != ans1)
   {
      cout << "I am sorry, that is incorrect, the correct answer was " << ans1 << endl;
      return 0;
   }
      else
   {
      cout << "Correct!" << endl;
      return points;
   }  

}

fourPart::fourPart(string x)
{
   //splitting string by colon and again trimming it down
   int y = x.find(" ");
   points = stoi(x.substr(0, y));
   x.erase(0, x.find(" "));
   
   question =  trim(x.substr(0, x.find(":")));
   x.erase(0, x.find(":")+1);
   
   ans1 =  trim(x.substr(0, x.find(":")));
   x.erase(0, x.find(":")+1);
   
   ans2 =  trim(x.substr(0, x.find(":")));
   x.erase(0, x.find(":")+1);
   
   ans3 = trim(x.substr(0, x.find(":")));
   x.erase(0, x.find(":")+1);

   ans4 = trim(x);

}

int fourPart::askQuestion()
{
   cout << endl;
   cout << "This is a multiple choice question worth " << points << " points, please type in your answer as a value" << endl <<endl;
   
   cout << "Question: " << question << endl;
   
   //making vecotr and then shuffling it
   vector<string> v;
   v.push_back(ans1);
   v.push_back(ans2);
   v.push_back(ans3);
   v.push_back(ans4);
   shuffleVector(v);
   
   cout << "1: " << v[0] << endl;
   cout << "2: " << v[1] << endl;
   cout << "3: " << v[2] << endl;
   cout << "4: " << v[3] << endl;
   cout << "----->" << endl;
   
   cin >> userans;
  
  //checking if answer is within the bounds
    while(userans<1 || userans>4)
   {
      cout << "Your answer should only be from 1-4. Please re-enter you answer below." << endl;
      cout << "----->" << endl;
      cin >> userans;
   }
   
   //checking to see is answer is correct
   if(v[userans-1] != ans1)
   {
      cout << "I am sorry, that is incorrect, the correct answer was " << ans1 << endl;
      return 0;
   }
      else
   {
      cout << "Correct!" << endl;
      return points;
   }  

}

numeric::numeric(string x)
{
   //splitting string by colons and then trimming
   int y = x.find(" ");
   points = stoi(x.substr(0, y));
   x.erase(0, x.find(" "));
   
   question = trim(x.substr(0, x.find(":")));
   x.erase(0, x.find(":")+1);
   ans = stoi(x);
}

int numeric:: askQuestion()
{
   cout << endl;
   cout << "This is a numeric question worth " << points <<  " points, please type in your answer as a value" << endl << endl;;
   cout << "Question: " << question << endl << "----->" << endl;
   
   cin >> userans;
   
   //checking to see if answers match
   if(userans != ans)
   {
      cout << "I am sorry, that is incorrect, the correct answer was " << ans << endl;
      return 0;
   }
   else
   {
      cout << "Correct!" << endl;
      return points;
   }

}

TF::TF(string x)
{
   //splitting string by colons and then trimming
   int y = x.find(" ");
   points = stoi(x.substr(0, y));
   
   x.erase(0, x.find(" "));
   question = trim(x.substr(0, x.find(":")));
   
   x.erase(0, x.find(":")+1);
   ans = trim(x);
}

int TF:: askQuestion()
{
   cout << endl;
   cout << "This is a True or False question worth " << points <<  " points, please type in your answer as a value"<< endl <<endl;
   cout << "Question: " << question << endl << "----->" << endl;
   
   //taking in answer and trimming
   cin >> userans;
   userans= trim(upperCase(userans));
   correct = trim(upperCase(ans));
   
   //checking if they match
   if(userans != correct)
   {
      cout << "I am sorry, that is incorrect, the correct answer was " << ans << endl;
      return 0;
   }
   else
   {
      cout << "Correct!" << endl;
      return points;
   }

}