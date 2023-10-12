#include <string>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>


using namespace std;

unsigned seed2 = std::chrono::system_clock::now().time_since_epoch().count();
auto rng2 = std::default_random_engine {seed2};


string upperCase(const string x)
{
    string z = x;
    for(unsigned int i =0; i < x.size(); i++)
     z[i] = toupper(x[i]);

    return z;
}

// trim from start
std::string ltrim(std::string s) {
   s.erase(s.begin(), std::find_if(s.begin(), s.end(),
            std::not1(std::ptr_fun<int, int>(std::isspace))));
   return s;
}

// trim from end
std::string rtrim(std::string s) {
   s.erase(std::find_if(s.rbegin(), s.rend(),
            std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
   return s;
}

// trim from both ends
std::string trim(const std::string s) {
    string z = s;
   return ltrim(rtrim(z));
}


void shuffleVector(vector<string> &vecToShuf)
{
    std::shuffle(std::begin(vecToShuf), std::end(vecToShuf), rng2);
}
