#ifndef MAKETRIVIAQUESTION__H
#define MAKETRIVIAQUESTION__H
#include "TriviaQuestion.h"
#include<string>

//factory function
TriviaQuestion* makeQuestion(const std::string);


#endif