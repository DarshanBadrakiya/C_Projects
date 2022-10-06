#include <stdio.h>
#include <string.h>
#include <time.h>
int main()
{
    char input[128];
    system("cls");
    printf("Welcome to J.A.R.V.I.S. programming system\n");
    while (1)
    {
        gets(input);
        if (strcmp(input,"hi")==0)
        {
            printf("Hi sir,How are you\n");
        }
        else if (strcmp(input,"Darshan2311")==0)
        {
            printf("Welcome Darshan sir,How can I help you\n");
        }
        else if (strcmp(input,"are you a virtual assistant")==0)
        {
            printf("No!,I am not a virtual assistant but I am a chatbot\n");
        }
        else if (strcmp(input,"time")==0)
        {
            printf("Now Time is %s\n",__TIME__);
        }
        else if (strcmp(input,"date")==0)
        {
            printf("Today's Date is %s\n",__DATE__);
        }
        else if (strcmp(input,"your building language")==0)
        {
            printf("In this program I am built in C programming language\n");
        }
        
        else if(strcmp(input,"can you speak")==0)
        {
            printf("No!,I can not speak\n");
        }
        else if (strcmp(input,"who are you")==0)
        {
            printf("I am jarvis your personal chatbot\n");
        }
        else if (strcmp(input,"what can you do for me")==0)
        {
            printf("I can do which thing i have in my program\n");
        }
        else if (strcmp(input,"your name")==0)
        {
            printf("My name is jarvis\n");
        }
        else if (strcmp(input,"who is your creator")==0)
        {
            printf("My creator is Darshan Badrakiya\n");
        }
        else if (strcmp(input,"open google")==0)
        {
            printf("Opeaning google\n");
            system("start https://google.com/");
        }
        else if (strcmp(input,"open brave")==0)
        {
            printf("Opeaning brave...\n");
            system("start brave");
        }
        else if (strcmp(input,"your base")==0)
        {
            printf("Basically my system is based on AI and computer programming\n");
        }
        else if (strcmp(input,"what is jarvis")==0)
        {
            printf("At the most basic level, a jarvis is a computer program that simulates and processes human conversation (either written or spoken), allowing humans to interact with digital devices as if they were communicating with a real person\n");
        }
        else if (strcmp(input,"open chrome")==0)
        {
            printf("Opeaning chrome...\n");
            system("start chrome");
        }
        else if (strcmp(input,"thanks")==0)
        {
            printf("It's My Pleasure Sir Your Most Welcome\n");
        }
        else if (strcmp(input,"ms dhoni")==0)
        {
            printf("Mahendra Singh Dhoni is an Indian former professional cricketer who was captain of the Indian national cricket team in limited-overs formats from 2007 to 2017 and in Test cricket from 2008 to 2014. He is a right-handed wicket-keeper batsman.\n");
        }    
        else if (strcmp(input,"exit")==0)
        {
            printf("By sir,Have a nice day...\n");
            goto end;
        }
        else
        {
            printf("No Result found\n");
        }
    }
    end:
    return 0;
}