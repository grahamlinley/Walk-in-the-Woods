#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <stdlib.h>
//#include <chrono>
//#include <thread>

void PrintIntroduction(int Difficulty)
{
    // Outputs story
    std::cout << "\nYou decide to take a walk into the forest as the sun is going down. You don't usually go into the forest this late but your walks through it are usually peaceful. As you walk your mind wanders and you eventually find yourself lost, though you're sure that you took the right path. You try going back, but somehow the forest continues to grow thicker until you can barely move through. Just as it feels like theres no where else you can move, you squeeze yourself through a small entrance revealing a room formed by curling branches. At the end of the room lies what appears to be a mass of branches resembling a door. However, you also notice that coiled up in the middle of the room lies a large snake with an orange belly and brown scales.\n\n";
    std::cout << "You look at the creature with apprehension but as its eyes open and it looks into yours you can sense that it doesn't appear threatened by your presence. After staring at each other for a while, the snake seems interested in you. It lets out a long hiss and surprisingly lets out a deep voice, \"Let's play a game together.\" The vines slither together behind you and cover the exit as it says this. \"If you win, I'll open the door behind me and I'll give you anything you desire. If you lose... Well let's just say you don't want to lose.\".\n";
}

bool PlayGame(int Difficulty)
{    
    PrintIntroduction(Difficulty);

    // Declares variables used in first question.
    const int FirstNumber = rand() %4 +1;
    const int SecondNumber = rand() %7 +1;
    const int ThirdNumber = rand() %9 +1;
    const int NumbersAdded = FirstNumber + SecondNumber + ThirdNumber;
    const int NumbersMultiplied = FirstNumber * SecondNumber * ThirdNumber;
    
    std::cout << "\n\"Three numbers add up to " << NumbersAdded; 
    std::cout << " and multiply out to "<< NumbersMultiplied; 
    std::cout << ". What are they?\"\n";

    // Stores the player's guess.
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    int GuessSum = GuessA + GuessB +GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Checks the player's guess and outputs additional story based on guess.
    if(GuessSum == NumbersAdded && GuessProduct == NumbersMultiplied)
    {
        std::cout << "\n\"Good, you're not an idiot. Let's continue,\" the snake says.\n\n";
        return true;
    }
    else
    {
        std::cout << "\n\"Ah another imbecile,\" the snake says, disappointment creeping into his deep voice. \"Oh well, fresh meat is always useful...\".\n";
        return false;
    }
  
}

bool PlaySecondGame(int Difficulty)
{
    // Outputs second question, stores player answer, then compares it to riddle answer
    std::cout << "\"Walk on the living, they won't even mumble. Walk on the dead, they mutter and grumble. What are they?\"\n";
    std::string PlayerAnswer;
    std::cin >> PlayerAnswer;
    // Gives additional story based on answer
    if (PlayerAnswer == "Leaves" || PlayerAnswer == "leaves" || PlayerAnswer == "Leaf" || PlayerAnswer== "leaf" || PlayerAnswer == "A leaf" || PlayerAnswer == "a Leaf" || PlayerAnswer =="A Leaf" || PlayerAnswer == "a leaf")
    {
        std::cout << "\nYou see a twinkle of hope enter the snake's eye, and what appears to be a smile curls at it's lips. \"Good.\"";
        return true;
    }
    else
    {
        std::cout << "\nThe snake looks disappointed. \" I see you had a lucky guess at the beginning. Oh well, I was getting tired of waiting for my meal anyway...\"\n";
        return false;
    }
    
    return 0;
}
bool PlayThirdGame(int Difficulty)
{
    // More story, stores user string input 
    std::cout << "\n\nThe snake gently slithers up your body, finally stopping next to your face. It pauses, then looks deep into your eyes. You are brave though, and stare at the door unflinching showing no fear to the unknown creature. \n\n\"Now,\" the snake hisses, \"a personal question.";
    std::cout << "\n\nWhat... is your favorite color?\"\n";
    std::string PlayerAnswer1;
    std::cin >> PlayerAnswer1;

    // Outputs answer based on input (theoretically could add something to capitalize the player's input here to match with if statement, or could add noncapitalized options)
     if (PlayerAnswer1 == "Red" || PlayerAnswer1 == "Green" || PlayerAnswer1 == "Blue" || PlayerAnswer1 == "Orange" || PlayerAnswer1 == "Aqua" || PlayerAnswer1 == "Black" || PlayerAnswer1 == "Gray" || PlayerAnswer1 == "Green" || PlayerAnswer1 == "Lime" || PlayerAnswer1 == "Maroon" || PlayerAnswer1 == "Navy" || PlayerAnswer1 == "Purple" || PlayerAnswer1 == "Silver" || PlayerAnswer1 == "Teal" || PlayerAnswer1 == "White" || PlayerAnswer1 == "Yellow" ||
     PlayerAnswer1 == "red" || PlayerAnswer1 == "green" || PlayerAnswer1 == "blue" || PlayerAnswer1 == "orange" || PlayerAnswer1 == "aqua" || PlayerAnswer1 == "black" || PlayerAnswer1 == "gray" || PlayerAnswer1 == "green" || PlayerAnswer1 == "lime" || PlayerAnswer1 == "maroon" || PlayerAnswer1 == "navy" || PlayerAnswer1 == "purple" || PlayerAnswer1 == "silver" || PlayerAnswer1 == "teal" || PlayerAnswer1 == "white" || PlayerAnswer1 == "yellow")
     { 
         std::cout << "\nThe snake pauses for a moment as if thinking then responds, \"" << PlayerAnswer1 << ", huh?";
         std::cout << "\nI kinda like that too...\"";
         return true;
     }
    else;
    {
        std::cout << PlayerAnswer1 << "? Is that even a color? Oh well, everyone has their own preferences...";
        return true;
    }
}

bool PlayFourthGame(int Difficulty)
{
    // Player chooses next question, outputs question then gives additional story based on answer
    std::cout << "\n\n\"Hmm, kinda didn't expect you to get this far if I'm being honest with you,,,\" the snake says, trailing off in thought as he slithers towards the door, as if pacing...";
    std::cout << "\n\nThe snake turns and, with a bit of a smile in its voice, asks,\"How about this? Why don't you tell me which of the three things you've done so far you've liked the best, and I'll give you a harder version of that question\" (1, 2 or 3)\n";
    std::string PlayerDecision;
    std::cin >> PlayerDecision;
    if (PlayerDecision == "1")
    {
        std::cout << "\n\"You like numbers, hmm? Let's make it a little harder then...\"";
    // Declares variables used in first question.
    const int FirstNumber = rand() %8 +1;
    const int SecondNumber = rand() %12 +1;
    const int ThirdNumber = rand() %15 +1;
    const int NumbersAdded = FirstNumber + SecondNumber + ThirdNumber;
    const int NumbersMultiplied = FirstNumber * SecondNumber * ThirdNumber;
    
    std::cout << "\n\"Three numbers add up to " << NumbersAdded; 
    std::cout << " and multiply out to "<< NumbersMultiplied; 
    std::cout << ". What are they?\"\n";

    // Stores the player's guess.
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    int GuessSum = GuessA + GuessB +GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Checks the player's guess and outputs additional story based on guess.
    if(GuessSum == NumbersAdded && GuessProduct == NumbersMultiplied)
    {
        return true;
    }
    else
    {
        std::cout << "\n\"Too bad.\"\n";
        return false;
    }}
    else if(PlayerDecision == "2")
    {
        std::cout << "\n\"A riddle it is.\"";
        std::cout << "\n\"Almighty will bender,\nBody mender, life ender.\nTremendous hidden power,\nFoes cower in their final hour.\nGrand dealer of tricks,\nHands quick, eyes transfixed.\nConjurer beyond the true,\nCoursing through, empowering you.\nWhat am I?\"\n";
        std::string RiddleAnswer;
        std::cin >> RiddleAnswer;
        if(RiddleAnswer == "Magic" || RiddleAnswer == "magic")
        {
            return true;
        }
        else
        {
            std::cout << "\n\"So sad. You were so close to greatness too. Though you might prove useful yet.\"";
            std::cout << "\nA vine shoots out of the wall to grab you. You struggle as it pulls you towards the wall, but more vines shoot out out and soon you find it impossible to escape. As you slowly enter the wall, the roots have made you completely immobile, and your last sight is of the snake smiling as he watches you disappear.";
            return false;
        }
    }   
    else if(PlayerDecision == "3");
    {
        std::cout << "\n\"The one about the colors?\" the snake lets out an eerie chuckle. \"Sure, why not?\"";
        std::cout << "\n\n\"One to ten, what number am I thinking of?\"\n";
        const int RandomNumber = rand()% 10 +1;
        int PlayerInput;
        std::cin >> PlayerInput;
        if (PlayerInput == RandomNumber)
        {
            std::cout << "\n\"Wow...you somehow actually got it. It was really " << PlayerInput << "!\"";
            return true;
        }
        else;
        {
            std::cout << "\n\"You wish!\" the snake yells at you with glee. \"It was actually" << RandomNumber << ". You really thought you'd get another softball? Clearly you are unworthy.\" The snake coils around your throat until your sight turns black./n";
            return false;
        }
        
    }
}

int main()
{ 
    srand(time(NULL)); //Mega randomizes the seed

    int LevelDifficulty = 1;

    while(LevelDifficulty == 1) //Starts the first level
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears errors
        std::cin.ignore(); // Clears characters leftover in buffer

        if(bLevelComplete)
        {
            //increases the difficulty
            ++LevelDifficulty;
        }
        else
        {
            LevelDifficulty = 0;
        }
        
    }  
    while(LevelDifficulty == 2)
    {
        bool bLevelComplete = PlaySecondGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete)
        {
            ++LevelDifficulty;
        }
        else
        {
            LevelDifficulty = 0;
        }
        
    }
    while(LevelDifficulty == 3)
    {
        bool bLevelComplete = PlayThirdGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();
        
        if(bLevelComplete)
    {
        ++LevelDifficulty;
    }
        else
        {
            LevelDifficulty = 0;
        }
    }
    while(LevelDifficulty == 4)
    {
        bool bLevelComplete = PlayFourthGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete)
        {
            ++LevelDifficulty;
        }
        else
        {
            LevelDifficulty = 0;
        }
    }
    if(LevelDifficulty == 5)
    {
        std::cout << "\n\nThe snake hisses in satisfaction, \"Finally, someone who is worthy. As promised you are free to go.\" You place your hand on the root-formed knob behind the snake and try to turn it. The vines slide away to reveal a room full of chests, glimmering with gold and jewels beyond anything you could've imagined.\n\nMarveling at the treasure, you pick out a few choice pieces to carry back with you. At the end of the room you spy another door. Before you even reachg the entrance the door again curls away to reveal a curbside close to your home. Relieved, you walk towards the exit. But before you get fully out you feel a pressure on your left shoulder. You look to see the snake biting into you. \"I told you, I'll give you anything and everything you ever wanted.\" The voice is not muffled, despite it's mouth being full. In fact, you realize that before, the snake seemed to hiss the words into existence, but now they seemed to be conjured in your mind like your own thoughts.\n\nYou look back towards your home one last time before your vision fades to black...\n";
    }
    else if(LevelDifficulty == 0)
    {
        std::cout << "\nGAME OVER \nPlay Again? (y/n)\n";
        std::string PlayerInput;
        std::cin >> PlayerInput;
        if (PlayerInput == "y" || PlayerInput == "Y")
        {
            main();
        }
        if (PlayerInput == "n" || PlayerInput == "N")
        {
            exit(EXIT_FAILURE);
        }
        //std::chrono::seconds dura(15);
        //std::this_thread::sleep_for(dura);
        return 0;
    }
    //std::chrono::seconds dura(15);
    //std::this_thread::sleep_for(dura);
    return 0;
    
}
