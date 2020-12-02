#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *out[6];

char **parse_args(char *line) {
    char **p = out;
    while(*p = strsep(&line," "),*(p++));
    return out;
}

int main() {
    char line[] = "ls -a -l";
    char **args = parse_args(line);
    execvp(args[0],args);
    //hello return, I am sorry you don't get run, it is ok
    return 0;
}
