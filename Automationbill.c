#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ReplaceWord(const char *str,const char *oldWord,const char *newWord )
{
    char *ResultString;
    int i,count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    for ( i = 0; str[i] != '\0' ; i++)
    {
        if (strstr(&str[i],oldWord)==&str[i])   
        {
            count++;
            i = i+oldWordLength - 1;
        }
        
    }
    ResultString = (char*)malloc(i+count * (newWordLength-oldWordLength)+1);
    i=0;
    while(*str)
    {
        if (strstr(str,oldWord)==str)
        {
            strcpy(&ResultString[i],newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            ResultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    ResultString[i] = '\0';
    return ResultString;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("Bill.txt","r");
    ptr2 = fopen("genbill.txt","w");
    char str[200];
    fgets(str,200,ptr);
    printf("The given bill templet was : %s\n",str);
    char *newstr;

    newstr = ReplaceWord(str,"{{item}}","iphone13pro");
    newstr = ReplaceWord(newstr,"{{name}}","Darshan");
    newstr = ReplaceWord(newstr,"{{outlet}}","umiya mobile");
    newstr = ReplaceWord(newstr,"{{newoutlet}}","new umiya mobile");
    printf("The actuall bill is %s\n",newstr);
    printf("The genrated bill has been written to the file genbill.txt\n");
    fprintf(ptr2,"%s",newstr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}