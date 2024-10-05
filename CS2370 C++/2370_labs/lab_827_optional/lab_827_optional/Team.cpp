#include <iostream>
#include <iomanip>
#include "Team.h"
using namespace std;

private:
    string name;
    int wins;
    int losses;
    
public:
void Team::SetName(string name) {
    this->name = name;
}
void Team::SetWins(int wins) {
    this->wins = wins;
}
void Team::SetLosses(int losses) {
    this->losses = losses;
}
    
   
string Team::GetName() const {
    return this->name;
}
int Team::GetWins() const {
    return this->wins;
}
int Team::GetLosses() const {
    return this->losses;
}
    
double Team::GetWinPercentage() const {
    return ((double)wins) / (wins + losses);
}
    
void Team::PrintStanding() const {
    double wp = GetWinPercentage();
    cout << fixed << setprecision(2);
    cout << "Win percentage" << wp << endl;
    
    if (wp >= 0.5) {
        cout << "Congratulations, Team " << name << " has a winning average!" << endl;
    } else {
        cout << "Team " << name << " has a losing average." << endl;
    }
}
