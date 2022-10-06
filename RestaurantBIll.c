#include <stdio.h>
#include <conio.h>

struct about
{
    char name[50];
    char adrs[50];
};

int main()
{
    system("cls");
    struct about S[10];

    int n,gst = 0,total = 0,quant = 0;
    char ch[34];
    printf("                        _________________ MENU CARD _________________\n\n");

    printf(" 1.All ColdDrinks (200 ml) - 20 Rs       2.Pizza    - 150Rs       3.Burger         - 60Rs\n\n 4.Noodles                 - 100Rs        5.Dosa     - 110Rs       6.Manchuriyan    - 80Rs\n\n 7.Sandwitch               - 60Rs         8.Pasta    - 40Rs        9.Vadapav        - 30Rs\n\n 10.Pav Bhaji              - 90Rs         11.soup    - 50Rs        12.Samosa        - 40Rs\n\n 13.Salad                  - 55Rs        14.Chhas    - 120Rs       15.Chocolate Ice Cream    - 20Rs\n\n\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
    
    printf("___ COUSTMER INFORMATION ____\n\n");
    printf("Enter Coustmer Name:\n");
    scanf("%s",&S[1].name);
    printf("Enter Coustmer Address:\n");
    scanf("%s",&S[1].adrs);
    
    printf("******************************************************************************************************\n\n");
    printf("Enter the name of items:\n");
    scanf("%s",&ch);
    getchar();
    printf("Enter the price of item:\n");
    scanf("%d",&n);
    getchar();
    printf("Enter the Quantity of items:\n");
    scanf("%d",&quant);
    if (n==20)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==150)
    {
        gst =(n*18)/100;
        total = n+gst;
    }
    else if (n==60)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==100)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==110)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==80)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==60)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==40)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==30)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==90)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==50)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==40)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==55)
    {
        gst =(n*18)/100;
        total = n+gst;
    }
    else if (n==120)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else if (n==20)
    {
        gst = (n*18)/100;
        total = n+gst;
    }
    else
    {
        printf("Invalid Input\n");
    }

    printf("|*********************** HOTEL ***********************|\n\n");

    printf("COUSTMER NAME : %s\n\n",S[1].name);
    printf("COUSTMER ADDRESS : %s\n\n",S[1].adrs);
    printf("==================================================\n\n");
    printf("  Item       Quntity    Price     Gst     Total\n\n");
    printf("  %6s    %6d     %4d     %4d      %6d\n\n",ch,quant,n,gst,total*quant);
    printf("==================================================\n\n");

    printf("******THANK YOU VISIT AGAIN******");
    return 0;
}