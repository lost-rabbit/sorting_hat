#include <iostream>


int main()
{
while (true)
{
    int question_1;
    int question_2;
    int question_3;
    int question_4;
    int question_5;
    int gfd = 0;
    int sly = 0;
    int hate = 0;
    int rag= 0;
    int huf= 0;

    std::cout << "Prepare to know if you are a harry potter loser and if you are what kind you are. \n";
    std::cout << "First up! What house do you think most reflects your personality select from the list below and enter 1-5. \n";
    std::cout << "1. Graphindoor. \n"; 
    std::cout << "2. Hugglepuff. \n"; 
    std::cout << "3. Ragingclaw. \n"; 
    std::cout << "4. Slithermein. \n"; 
    std::cout << "5. I hate Harry potter \n";
    std::cin >> question_1; 

switch (question_1)
{
case 1:
    sly++;
    break;

case 2:
    huf++;
    break;

case 3:
    rag++;
    break;

case 4:
    gfd++;
    break;

case 5:
    hate++;
    break;

}
   
    std::cout << "Next! What is your favorite color? From the list below and enter 1-5. \n";
    std::cout << "1. Pink. \n"; 
    std::cout << "2. Orange. \n"; 
    std::cout << "3. Magenta. \n"; 
    std::cout << "4. Royal Blue. \n"; 
    std::cout << "5. Red. \n";
    std::cin >> question_2; 

switch (question_2)
{
case 1:
    huf++;
    break;

case 2:
    rag++;
    break;

case 3:
    sly++;
    break;

case 4:
    gfd++;
    break;

case 5:
    hate++;
    break;
}
    std::cout << "3rdly! Which of the drugs below would you do everyday if you had to for the rest of your life? From the list below and enter 1-5. \n";
    std::cout << "1. Adderal. \n"; 
    std::cout << "2. LSD. \n"; 
    std::cout << "3. Cocaine. \n"; 
    std::cout << "4. Mary Jane. \n"; 
    std::cout << "5. PCP \n";
    std::cin >> question_3; 

switch (question_3)
{
case 1:
    gfd++;
    break;

case 2:
    rag++;
    break;

case 3:
    sly++;
    break;

case 4:
    huf++;
    break;

case 5:
    hate++;
    break;
}
    std::cout << "4thly! You Flip A Tortoise Over On Its back. Its Belly Is Baking And It Needs Your Help To Flip Over, But You're Not Helping. Why Is That? From the list below and enter 1-5. \n";
    std::cout << "1. It deserves to suffer. \n"; 
    std::cout << "2. You don't feel like it. \n"; 
    std::cout << "3. You don't believe a turtle feels pain. \n"; 
    std::cout << "4. This creature is inferior to you. \n"; 
    std::cout << "5. Its fun to watch. \n";
    std::cin >> question_4; 

switch (question_4)
{
case 1:
    sly++;
    break;

case 2:
    hate++;
    break;

case 3:
    gfd++;
    break;

case 4:
    rag++;
    break;

case 5:
    huf++;
    break;
}
    std::cout << "Finally! What is your purpose in life? From the list below and enter 1-5. \n";
    std::cout << "1. Survival. \n"; 
    std::cout << "2. Hope. \n"; 
    std::cout << "3. Emotion. \n"; 
    std::cout << "4. Prove that your life is more than just a mote of dust in a vast cosmic universe. \n"; 
    std::cout << "5. To create suffering. \n";
    std::cin >> question_5; 

switch (question_5)
{
case 1:
    huf++;
    break;

case 2:
    gfd++;
    break;

case 3:
    rag++;
    break;

case 4:
    sly++;
    break;

case 5:
    hate++;
    break;
   
}

if (huf > sly && huf > gfd && huf > hate && huf > rag)
{
    std::cout << "You are a hagglepuff nerd. \n";
}

else if (sly > huf && sly > gfd && sly > hate && sly > rag)
{
    std::cout << "You are a sly guy nerd. \n";
}

else if (gfd > huf && gfd > sly && gfd > hate && gfd > rag)
{
    std::cout << "You are a graph guy nerd. \n";
}

else if (hate > huf && hate > sly && hate > gfd && hate > rag)
{
    std::cout << "You are not a fan nerd. \n";
}

else if (rag > huf && rag > sly && rag > hate && rag > gfd)
{
    std::cout << "You are a graph guy nerd. \n";
}
    else
{
    std::cout << "You are a replicant. \n";

}
    std::string quit_or_continue = " ";
    std::cout << "Please wait for questions to reload...... \n";
    std::cout << "Type 'again!' to Continue or type 'exit' to exit. \n";
    std::cin >> quit_or_continue;
   
if((quit_or_continue != "exit"))
       {
           
           std::cout << "Here we go! \n ";
           
       }
          
else 
        {
            std::cout << "Bye! \n";
            abort();
        }

}
}
