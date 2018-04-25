
#include "cli.h"

void __exit(void);

shell_cmd_tbl   my_cmds[] = {"exit", __exit, "exit help"};



int main (int argc, char* argv[])
{

    printf("Hello Universe!!\r\n");
	
	return 0;
}


void __exit(void)
{
	printf("EXIT\r\n");
		
}

