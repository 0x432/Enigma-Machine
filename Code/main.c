#include <stdio.h> // Including an input and output .h library, so I can use the fgets function.
#include <string.h> // Including the string .h library, so I can use strcspn.
#include <stdlib.h> // Including the lib .h library, so I can use the system pause function.
#include "defines.h" // Includes all of my defines makes the main.c easier to read.
#include "variables_and_arrays.h" // Includes all of my variables and arrays.
#include "input_fields.h" // Includes all the user input prompts.
#include "rotor_position_updater.h" // Includes the rotor position updater.
#include "plugboard.h" // Includes the plugboard.
#include "rotor_encoder.h" // Includes the rotor forwards & backwards encoder.
#include "reflector.h" // Includes the reflector.

int main() {
    printf("CAPITAL LETTERS ONLY\n"); // Makes the user aware that only capital letters can be used.

    Input_Text(); // Collects the user input to encode / decode.
    Input_Total_Plugbaord_Connections(); // Collects total plug-board connections.
    Input_Plugboard_Pairs(); // Collects each plug-board pair if there are any plug-board connections.
    Input_Rotor_Order(); // Lets the user set the order of the rotors.
    Input_Rotor_Positions(); // Collects the initial starting positions of rotor 1, 2 and 3.
    Input_Reflector_Choice(); // Collects which reflector to use.

    strcpy(output_text, input_text); // Copying the text from input_text to output_text.

    // Loops through each character in input_text to encode / decode them
    for (int i = 0; i < strlen(input_text); i++)
    {
        // If the character is a space (eg " ") skip it
        if (output_text[i] == ' ')
        {
            output_text[i] = ' ';
        }
            // If alphabetical character start enigma algorithm
        else
        {
            update_rotor_positions(); // Updates the rotor positions.

            output_text[i] = plugboard_encode(output_text[i]); // Passes the letter through the plug-board.

            output_text[i] = rotor_encode_forwards(output_text[i], rotor_position[0], rotor_order[0]); // Passes the letter through rotor 1.
            output_text[i] = rotor_encode_forwards(output_text[i], rotor_position[1], rotor_order[1]); // Passes the letter through rotor 2.
            output_text[i] = rotor_encode_forwards(output_text[i], rotor_position[2], rotor_order[2]); // Passes the letter through rotor 3.

            output_text[i] = reflector_encode(output_text[i]); // Passes the letter through the reflector.

            output_text[i] = rotor_encode_backwards(output_text[i], rotor_position[2], rotor_order[2]); // Passes the letter back through rotor 3.
            output_text[i] = rotor_encode_backwards(output_text[i], rotor_position[1], rotor_order[1]); // Passes the letter back through rotor 2.
            output_text[i] = rotor_encode_backwards(output_text[i], rotor_position[0], rotor_order[0]); // Passes the letter back through rotor 1.

            output_text[i] = plugboard_encode(output_text[i]); // Passes the letter back through the plug-board.
        }
    }

    printf("\nOutput: %s\n", output_text); // Prints the final output of the text.
    system("pause"); // Wait until the user enters a key to end the program.
    return 0; // Ends the program.
}