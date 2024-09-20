#include <iostream>
#include <vector>
using namespace std;


void menu();

string selection = "";

vector<int> jerseyList;
vector<int> ratingList;

int i;

int jerseyNumber;
int playerRating;



int main() {
    
    
    cout << "Enter player 1's jersey number:" << endl;
    cin >> jerseyNumber;
    jerseyList.push_back(jerseyNumber);
    cout << "Enter player 1's rating:" << endl;
    cin >> playerRating;
    ratingList.push_back(playerRating);
    cout << endl;
    
    cout << "Enter player 2's jersey number:" << endl;
    cin >> jerseyNumber;
    jerseyList.push_back(jerseyNumber);
    cout << "Enter player 2's rating:" << endl;
    cin >> playerRating;
    ratingList.push_back(playerRating);
    cout << endl;
    
    cout << "Enter player 3's jersey number:" << endl;
    cin >> jerseyNumber;
    jerseyList.push_back(jerseyNumber);
    cout << "Enter player 3's rating:" << endl;
    cin >> playerRating;
    ratingList.push_back(playerRating);
    cout << endl;
    
    cout << "Enter player 4's jersey number:" << endl;
    cin >> jerseyNumber;
    jerseyList.push_back(jerseyNumber);
    cout << "Enter player 4's rating:" << endl;
    cin >> playerRating;
    ratingList.push_back(playerRating);
    cout << endl;
    
    cout << "Enter player 5's jersey number:" << endl;
    cin >> jerseyNumber;
    jerseyList.push_back(jerseyNumber);
    cout << "Enter player 5's rating:" << endl;
    cin >> playerRating;
    ratingList.push_back(playerRating);
    
    cout << endl;
    cout << "ROSTER" << endl;
    for (i = 0; i < jerseyList.size(); ++i) {
        cout << "Player " << i + 1 << " -- Jersey number: " << jerseyList.at(i) << ", Rating: " << ratingList.at(i) << endl;
    }

    menu();
    
    return 0;
}



void menu() {
    cout << endl;
    
    while (selection != "q") {
        cout << "MENU" << endl;
        cout << "a - Add player" << endl;
        cout << "d - Remove player" << endl;
        cout << "u - Update player rating" << endl;
        cout << "r - Output players above a rating" << endl;
        cout << "o - Output roster" << endl;
        cout << "q - Quit\n" << endl;
        
        cout << "Choose an option:" << endl;
        cin >> selection;
        
        if (selection == "a")
        {
            cout << "Enter a new player's jersey number:" << endl;
            cin >> jerseyNumber;
            jerseyList.push_back(jerseyNumber);
            
            cout << "Enter the player's rating:" << endl;
            cin >> playerRating;
            ratingList.push_back(playerRating);
            
            cout << endl;
        }
        
        else if (selection == "d")
        {
            cout << "Enter a jersey number:" << endl;
            cin >> jerseyNumber;
            
            int indexToRemove = -1;
            
            for (i = 0; i < jerseyList.size(); ++i) {
                if (jerseyList.at(i) == jerseyNumber) {
                    indexToRemove = i;
                    break;
                }
            }
            
            if (indexToRemove != -1) {
                jerseyList.erase(jerseyList.begin() + indexToRemove);
                ratingList.erase(ratingList.begin() + indexToRemove);
            } else {
                cout << "Player not found." << endl;
            }
            
        }
        
        else if (selection == "u")
        {
            cout << "Enter a jersey number:" << endl;
            cin >> jerseyNumber;
            
            int playerIndex = -1;
            
            
            for (i = 0; i < jerseyList.size(); ++i) {
                if (jerseyList.at(i) == jerseyNumber) {
                    playerIndex = i;
                    break;
                }
            }
            
            if (playerIndex != -1) {
                cout << "Enter a new rating for player:" << endl;
                cin >> playerRating;
                ratingList.at(playerIndex) = playerRating;
            } else {
                cout << "Player not found" << endl;
            }
        }
        
        else if (selection == "r")
        {
            cout << "Enter a rating:" << endl;
            cin >> playerRating;
            
            cout << "ABOVE " << playerRating << endl;
            
            for (i = 0; i < ratingList.size(); ++i) {
                if (ratingList.at(i) > playerRating) {
                    cout << "Player " << i + 1 << " -- Jersey number: " << jerseyList.at(i) << ", Rating: " << ratingList.at(i) << endl;

                }
            } cout << endl;
        }
        
        else if (selection == "o")
        {
            cout << "ROSTER" << endl;
            for (i = 0; i < jerseyList.size(); ++i) {
                cout << "Player " << i + 1 << " -- Jersey number: " << jerseyList.at(i) << ", Rating: " << ratingList.at(i) << endl;
            } cout << endl;
            
        }
        
        else if (selection == "q")
        {
            //cout << endl;
        }
    }
    
}



