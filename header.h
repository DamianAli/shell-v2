#ifndef _HSH_H_
#define _HSH_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void prompt(void);
int sig_catch(void);
char *read_line(void);
char **parse_line(char *line);

#endif /* _HSH_H_ */
