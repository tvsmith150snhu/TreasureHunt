/*
Troy Smith
IT-312-J4007
2022.03.20
3-2 An Array of Treasure
*/

/*Treasure Hunt Game
 This game prompts the user to input a number between 1 and 5 that represents
 which treasure chest they have found.  If the user chooses the 5th chest that
 contains the treasure, they level up.  Otherwise it keeps prompting until the
 user selects the 5th chest and exclaims the user has leveled up!
*/

#include <iostream>

using namespace std;

int main()
{
    int userReply;
    bool chest[5] = { false }; // Initialize the chests to false

    while (true)
    {
        cout << "Which chest did you find (1-5): ";// Prompt user for reply
        cin >> userReply;
        while (userReply < 1 || userReply > 5) // Check for valid reply
        {
            cout << "Invalid reply. Please enter again with only 1, 2, 3, 4, or 5: "; // Clarify the proper input if incorrect
            cin >> userReply;
        }

        // Update the Boolean array using pointer
        *(chest + userReply - 1) = true;

        // Check if 5th chest is the reply or found
        if (*(chest + 4) == true)
        {
            cout << "Congratulations! You have leveled up\n";
            break;
        }
        else
            cout << "You do not level up yet.  Try again.\n";
    }
    return 0;
}

