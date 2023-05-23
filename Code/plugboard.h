#ifndef ENIGMAMACHINE_PLUGBOARD_H
#define ENIGMAMACHINE_PLUGBOARD_H

#endif //ENIGMAMACHINE_PLUGBOARD_H

// Swaps str with another str if in a plug-board pair. This function loops through the total plug-board pairs,
// and if there is a match (eg input = 'F' pair 1 = 'FB' then the output will be output = 'B') it does this
// by checking the 2D plug-board array plug-board[j][0] the j is what the pair number is and the 0 is the str value
// an example is (eg: j = pair 1 and 0 = F), then it checks if the input is the same as the plug-board if so it
// changes the value of the input. There is also an else if statement that does the same just the opposite
// direction because a plug-board can switch a str both ways (eg: input = 'K' pair = 'SK' then output will be 'S')
// the method then returns the output after the plug-board has encrypted the input to the main function that will carry
// on the encryption processes.
char plugboard_encode(char input)
{
    char output = input; // To make the code easier to read we change the input to an output.

    for (int i = 0; i < total_plugboard_pairs; i++) // for loop that iterates through the total amount of plug-board pairs.
    {
        if (output == plugboard_pairs[i][0]) // if statement that checks if the output is equal to the left most plug-board character.
        {
            output = plugboard_pairs[i][1]; // stores the right most character if a match.
            break; // breaks the if statement when a match is found.
        }

        else if (output == plugboard_pairs[i][1]) // if statement that checks if the output is equal to the right most plug-board character.
        {
            output = plugboard_pairs[i][0]; // stores the left most character if a match.
            break; // breaks the if statement when a match is found.
        }
    }

    return output; // returning the output character.
}