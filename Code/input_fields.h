#ifndef ENIGMAMACHINE_INPUT_FIELDS_H
#define ENIGMAMACHINE_INPUT_FIELDS_H

#endif //ENIGMAMACHINE_INPUT_FIELDS_H

// Asks the user to enter the string to encode or decode using the fgets method.
void Input_Text()
{
    printf("Enter text to encode / decode: ");
    fgets(input_text, sizeof(input_text), stdin);
    input_text[strcspn(input_text, "\n")] = 0;
}

// Stores the amount of plug-board pairs there will be.
void Input_Total_Plugbaord_Connections()
{
    printf("\nEnter number of plugboard pairs: ");
    scanf("%d", &total_plugboard_pairs);
}

// Loops through the plug-board array and asks the user to enter a char pair.
void Input_Plugboard_Pairs()
{
    printf("\nEnter plugboard pairs (eg: AB A <-> B):\n");
    for (int i = 0; i < total_plugboard_pairs; i++)
    {
        printf("Pair %d: ", i + 1);
        scanf("%s", plugboard_pairs[i]);
    }
}

void Input_Rotor_Order()
{
    printf("\nEnter rotor order (0 = left, 1 = middle, 2 = right | rotors = 0 to 4):\n");
    for (int i = 0; i < MAX_ROTOR_USED; i++)
    {
        printf("Location %d taken by rotor: ", i);
        scanf("%d",&rotor_order[i]);
    }
}

// Loops through each rotor and asks the user to enter were x rotor starts from.
void Input_Rotor_Positions()
{
    int current_rotor = 0;
    printf("\nEnter rotor start positions:\n");
    for (int i = 0; i < MAX_ROTOR_USED; i++)
    {
        printf("Rotor %d (0-25): ", rotor_order[current_rotor]);
        scanf("%d", &rotor_position[i]);
        current_rotor++;
    }
}

void Input_Reflector_Choice()
{
    printf("\nChoose reflector B or C (B = 0, C = 1): ");
    scanf("%d", &reflector_choice);
}