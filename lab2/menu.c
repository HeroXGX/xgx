#include <stdio.h>
int main()
{    char cmd;
    while(1)
     {
        scanf(“%c”,cmd);
        if (cmd=="help")
           {printf("help");}
        else if(cmd=="exit")
          {printf("exit");}
        else if(cmd=="A")
          {printf("a");}
        else if (cmd=="B")
          {printf("b");}
        else if (cmd=="C")
          {printf("c");}
        else if (cmd=="D")
          {printf("d");}
        else if (cmd=="E")
          {printf("e");}
        else
            break;

     }
return0;
}
