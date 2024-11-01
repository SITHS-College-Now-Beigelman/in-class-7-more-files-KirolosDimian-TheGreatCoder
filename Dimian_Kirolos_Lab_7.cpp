// Kirolos Dimian
// Lab 7
// 11/1/24

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std; 

int main ()
{
    // Declaring Variables
    ifstream inFile; // Input file stream variable
    ofstream outFile;
    string name; // This variable stores the name which is in the txt file
    int score1, score2, score3; // This creates variables to store the 3 scores from the txt file

    inFile.open ("game_scores.txt"); // Opens the premade txt file
    outFile.open ("avg_score.txt"); // Opens a new output file
    
    for (int i = 0; i < 3; i++) // creating a for loop for the 3 people and their scores
    {
        // To print name 1
        inFile >> name; // store the name in the txt file as the variable name
        outFile << endl; // skips line for organization
        outFile << "Name: " << name << endl; // prints the name
        outFile << endl; // skips line for organization

        // To print the numbers
        inFile >> score1 >> score2 >> score3; // store the 3 scores in the txt file as the variable score1, 2, and 3
        outFile << "Scores: " << score1 << " " << score2 << " " << score3 << endl; // prints the 3 scores
        outFile << endl; // skips line for organization

        // For weight calculation of scores and to find the average score
        double score1_Worth = score1 * 0.20; // makes sure that the first score is 20% of total
        double score2_Worth = score2 * 0.30; // makes sure that the second score is 30% of total
        double score3_Worth = score3 * 0.50; // makes sure that the third score is 50% of total
        double average_Score = score1_Worth + score2_Worth + score3_Worth; // adds them all together to get the average or 100% of score


        // To print the average score
        outFile << "The average score for " << name << " is: " << average_Score << endl; // Prints the average score for the player
        outFile << endl; // skips line for organization

        if (average_Score > 2000) // if statement for the average score greater than 2000
            outFile << "Congrats! You are an Expert!" << endl; // print statement for the determined score above
        else if (1800 <= average_Score && average_Score <= 2000) // if statement for the average score from 1800-2000
            outFile << "Master - Good Job!" << endl; // print statement for the determined score above
        else if (1500 <= average_Score && average_Score <= 1799) // if statement for the average score from 1500-1799
            outFile << "Advanced - Good Job!" << endl; // print statement for the determined score above
        else if (1000 <= average_Score && average_Score <= 1499) // if statement for the average score from 1000-1499
            outFile << "Intermediate" << endl; // print statement for the determined score above
        else  // else for any other score (the scores from 0-999)
            outFile << "Beginner - Keep Practicing!" << endl; // print statement for the determined score above

        outFile << endl; // skips line for organization
    }

    return 0; // to exit and complete the code
}
