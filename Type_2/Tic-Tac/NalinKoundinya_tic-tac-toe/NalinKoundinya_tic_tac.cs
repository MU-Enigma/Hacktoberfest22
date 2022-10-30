using System.Security.Cryptography;

char[,] playField =
{
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
};
char[,] playFieldinitial =
{
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
};

int player = 2;
bool inputcorrect = true;
int input = 0;


do
{

    if (player == 2)
    {
        player = 1;
        EnterXorO(player, input, playField);
    }
    else if (player == 1)
    {
        player = 2;
        EnterXorO(player, input, playField);

    }

    setField(playField);

    // check winning condition:

    char[] playerchar = { 'X', 'O' };
    foreach (char c in playField)
    {
        if (((playField[0, 0] == c) && (playField[0, 1] == c) && (playField[0, 2] == c))
            || ((playField[1, 0] == c) && (playField[1, 1] == c) && (playField[1, 2] == c))
            || ((playField[2, 0] == c) && (playField[2, 1] == c) && (playField[2, 2] == c))
            || ((playField[0, 0] == c) && (playField[1, 0] == c) && (playField[2, 0] == c))
            || ((playField[0, 1] == c) && (playField[1, 1] == c) && (playField[2, 1] == c))
            || ((playField[0, 2] == c) && (playField[1, 2] == c) && (playField[2, 2] == c))
            || ((playField[0, 0] == c) && (playField[1, 1] == c) && (playField[2, 2] == c))
            || ((playField[0, 2] == c) && (playField[1, 1] == c) && (playField[2, 0] == c))
            )
        {
            if (c == 'X')
            {
                Console.WriteLine("\nplayer 1 won the game");
            }
            else
            {
                Console.WriteLine("\nplayer 2 won the game");
            }

            Console.WriteLine("press any key to reset");
            Console.ReadKey();
            resetField(playField, playFieldinitial);

            break;

        }
    }


    do
    {
        Console.Write("\nplayer {0}: please play the game ", player);

        input = Convert.ToInt32(Console.ReadLine());

        if ((input == 1) && (playField[0, 0] == '1')) { inputcorrect = true; }
        else if ((input == 2) && (playField[0, 1] == '2')) { inputcorrect = true; }
        else if ((input == 3) && (playField[0, 2] == '3')) { inputcorrect = true; }
        else if ((input == 4) && (playField[1, 0] == '4')) { inputcorrect = true; }
        else if ((input == 5) && (playField[1, 1] == '5')) { inputcorrect = true; }
        else if ((input == 6) && (playField[1, 2] == '6')) { inputcorrect = true; }
        else if ((input == 7) && (playField[2, 0] == '7')) { inputcorrect = true; }
        else if ((input == 8) && (playField[2, 1] == '8')) { inputcorrect = true; }
        else if ((input == 9) && (playField[2, 2] == '9')) { inputcorrect = true; }
        else
        {
            Console.WriteLine("incorrect input, please use other input");
            inputcorrect = false;
        }

    } while (!inputcorrect);

} while (true);


static void resetField(char[,] playField, char[,] playFieldinitial)
{
    playField = playFieldinitial;
    setField(playField);
}



static void setField(char[,] playField)
{
    Console.Clear();
    Console.WriteLine("     |     |     ");
    Console.WriteLine("  {0}  |  {1}  |  {2}  ", playField[0, 0], playField[0, 1], playField[0, 2]);
    Console.WriteLine("_____|_____|_____");

    Console.WriteLine("     |     |     ");
    Console.WriteLine("  {0}  |  {1}  |  {2}  ", playField[1, 0], playField[1, 1], playField[1, 2]);
    Console.WriteLine("_____|_____|_____");

    Console.WriteLine("     |     |     ");
    Console.WriteLine("  {0}  |  {1}  |  {2}  ", playField[2, 0], playField[2, 1], playField[2, 2]);
    Console.WriteLine("     |     |     ");
}

static void EnterXorO(int player, int input, char[,] playField)
{
    char playerinput = ' ';
    if (player == 1)
    {
        playerinput = 'X';

    }
    else if (player == 2) { playerinput = 'O'; }


    switch (input)
    {
        case 1: playField[0, 0] = playerinput; break;
        case 2: playField[0, 1] = playerinput; break;
        case 3: playField[0, 2] = playerinput; break;
        case 4: playField[1, 0] = playerinput; break;
        case 5: playField[1, 1] = playerinput; break;
        case 6: playField[1, 2] = playerinput; break;
        case 7: playField[2, 0] = playerinput; break;
        case 8: playField[2, 1] = playerinput; break;
        case 9: playField[2, 2] = playerinput; break;
    }

}