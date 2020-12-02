#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **parse_args(char *line) {
    char **out = calloc(sizeof(char*),6);
    char **p = out;
    while(*p = strsep(&line," "),*(p++));
    return out;
}

int main() {
    char line[] = "ls -a -l";
    char **args = parse_args(line);
    execvp(args[0],args);
    //args will be reclaimed by execvp so free is not needed
    //
    //hello return, I am sorry you don't get run, it is ok
    return 0;
}
