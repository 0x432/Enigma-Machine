#ifndef ENIGMAMACHINE_ROTOR_ENCODER_H
#define ENIGMAMACHINE_ROTOR_ENCODER_H

#endif //ENIGMAMACHINE_ROTOR_ENCODER_H

// The function starts of by taking an input (char), rotor position (integer) and the rotor number (integer).
// Then we initialize 1 variable the alphabet_index which is an integer types and is used to keep track of the
// indexes when calculating within the for loop. We then create a for loop that iterates through the alphabet
// size (26). There is an if statement within the loop that checks if the alphabet index is equal to the input
// character, if true then it shall store the current iteration in the alphabet_index & then breaks the loop.
// Once the alphabet index is acquired we can calculate what the output character will be to start of we create
// an integer variable called rotor_index within this variable is the calculation that gets the rotor index. To
// get the index we add the alphabet_index by the rotor_position then we get the modulo of the alphabet size (26) this
// is the index of the rotor to get the character from the rotor we create another variable called output which
// is a char we plug the rotor number and the rotor index into the rotors within the output variable & this shall
// get you the encoded character. Finally, this output is returned to the main function of the code.
char rotor_encode_forwards(char input, int rotor_position, int rotor_num)
{
    int alphabet_index = 0; // stores the index of the character that is equal to the input

    for (int i = 0; i < ALPHABET_SIZE; i++) // for loop that iterates through the alphabet size (26)
    {
            if(alphabet[i] == input) // if statement that checks if the alphabet index is equal to the input character
            {
                alphabet_index = i; // stores the index that the for loop is at to the alphabet index
                break; // breaks the if statement when a match is found
            }
    }

    int rotor_index = (alphabet_index + rotor_position) % ALPHABET_SIZE; // calculating the rotor position using mod.
    char output = rotors[rotor_num][rotor_index]; // looking through the rotor array to find the output character

    return output; // returning the output character
}

// The function starts of by taking an input (char), rotor position (integer) and the rotor number (integer).
// Then we initialize 1 variable the rotor_index which is an integer types and is used to keep track of the
// indexes when calculating within the for loop. We then create a for loop that iterates through the alphabet
// size (26). There is an if statement within the loop that checks if the rotor index is equal to the input
// character, if true then it shall store the current iteration in the rotor_index & then breaks the loop.
// Once the rotor index is acquired we can calculate what the output character will be to start we create
// an integer variable called input_index within this variable is the calculation that gets to rotor index.
// To get the index we minus rotor_index from the current rotor_position then add the alphabet size (26) to
// it then we get the modulo by dividing the answer by the alphabet size of 26 and this shall get the index
// of the rotor before going forwards. To get the character from the rotor we create another variable called output
// which is a char, we plug the rotor number and the input index into the rotors within the output variable & this shall
// get you the encoded character. Finally, this output is returned to the main function of the code.
char rotor_encode_backwards(char input, int rotor_position, int rotor_num)
{
    int rotor_index = 0; // stores the index of the character that is equal to the input

    for (int i = 0; i < ALPHABET_SIZE; i++) // for loop that iterates through the alphabet size (26)
    {
        if (rotors[rotor_num][i] == input) // if statement that checks if the rotor index is equal to the input character
        {
            rotor_index = i; // stores the index that the for loop is at to the rotor index
            break; // breaks the for loop when a match is found
        }
    }

    int input_index = (rotor_index - rotor_position + ALPHABET_SIZE) % ALPHABET_SIZE; // calculating the rotor position backwards using mod.
    char output = alphabet[input_index]; // looking through the alphabet to find the output character.

    return output; // returning the output character
}