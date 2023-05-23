#ifndef ENIGMAMACHINE_REFLECTOR_H
#define ENIGMAMACHINE_REFLECTOR_H

#endif //ENIGMAMACHINE_REFLECTOR_H

// This functions only takes in an input character. To start of we create an int variable that stores the alphabet index
// ie; the position of were the input character is at. We then add a for loop that iterates through the ALPHABET_SIZE (26).
// inside the for loop there is an if statement that checks to see when the input is equal to one of the letters in the
// alphabet when the input is equal to one of the letters we set the alphabet_index to that position, then using a break;
// statement we stop the for loop form carrying on iterating. we can take that index and pass it through to the reflector we
// call this variable the output as it makes the code easier to read. To map the alphabet character with the reflector we use
// a 2D array of characters. Using the reflector_choice variable, we can decide which reflector to use.
char reflector_encode(char input)
{
    int alphabet_index = 0; // stores the index of the character that is equal to the input.

    for (int i = 0; i < ALPHABET_SIZE; i++) // for loop that iterates through the alphabet size (26).
    {
        if (alphabet[i] == input) // if statement that checks if the alphabet index is equal to the input character.
        {
            alphabet_index = i; // stores the index that the for loop is at to the alphabet index.
            break;// breaks the if statement when a match is found.
        }
    }

    char output = reflectors[reflector_choice][alphabet_index]; // looking through the reflector array to find the output character.

    return output; // returning the output character.
}