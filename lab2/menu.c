#include <stdio.h>
#include <stdlib.h>
int main()
{    char cmd[128];
    while(1)
     {
	scanf("%s",cmd);
        if(strcmp(cmd,"help")==0)
        
           {printf("help");}
        else if(strcmp(cmd,"exit")==0)
          {printf("this is quit cmd");}
        else if(strcmp(cmd,"A")==0)
          {printf("a");}
        else if (strcmp(cmd,"B")==0)
          {printf("b");}
        else if (strcmp(cmd,"C")==0)
          {printf("c");}
        else if (strcmp(cmd,"D")==0)
          {printf("d");}
        else if (strcmp(cmd,"E")==0)
          {printf("e");}
        else
            {
		printf("Wrong");
	    }

     }
return 0;
}
