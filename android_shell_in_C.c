#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main()
{
	while (1)
	{
		char cmd[20];
		pid_t pid;
		int strl;
		printf("\n\033[31mroot\033[33m@\033[93mlocalhost:~# ");
		gets(cmd);
		char *cmdchararray=cmd;
		char *command[]={cmdchararray,NULL};
		strl = strlen(cmd);
		strl--;
		//printf("%d", strl);

		if (strl <= 0)
		{
			continue;
		}
		else
		{
			printf("%s",command[0]);
			pid = fork();
			if (pid == 0){
				int x;
			    x=execvp(command[0],command);
			    printf("An Error Occurred while interpreting...%s %d",command[0],x);
			
				
			}
			 else{
			 	wait(NULL);
			 }
			 	
			 	
		}
	}

	return 0;
}