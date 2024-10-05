#ifndef TEAM_H
#define TEAM_H

#include <string>

using namespace std;

class Team {
private:
    string name;
    int wins;
    int losses;
    
public:
    void SetName(string name);
    void SetWins(int wins);
    void SetLosses(int losses);
    
   
    string GetName() const;
    int GetWins() const;
    int GetLosses() const;
    
    double GetWinPercentage() const;
    
    void PrintStanding() const;
    
};

#endif
