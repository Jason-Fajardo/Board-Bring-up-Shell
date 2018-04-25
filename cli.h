#ifndef _CLI_H
#define _CLI_H

#define TRUE 1
#define FALSE 0


typedef void *cmd_func_ptr(void);

typedef struct 
{
    char            *name;		
    cmd_func_ptr    *cmd;
    char            *help;
}shell_cmd_tbl;



#endif // _CLI_H

