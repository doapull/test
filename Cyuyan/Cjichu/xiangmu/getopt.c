#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    char *optstr = "p:n:m:c:";
    struct option opts[] = {
        {"path", 1, NULL, 'p'},
        {"name", 1, NULL, 'n'},
        {"mtime", 1, NULL, 'm'},
        {"ctime", 1, NULL, 'c'},
        {0, 0, 0, 0},
    };
    int opt;
    while((opt = getopt_long(argc, argv, optstr, opts, NULL)) != -1){
        switch(opt) {
            case 'p':
                strcpy(path, optarg);
                break;
            case 'n':
                strcpy(targetname, optarg);
                break;
            case 'm':
                modifiedtime = atoi(optarg);
                break;
            case 'c':
                changetime = atoi(optarg);
                break;
            case '?':
                if(strchr(optstr, optopt) == NULL){
                    fprintf(stderr, "unknown option '-%c'\n", optopt);
                }else{
                    fprintf(stderr, "option requires an argument '-%c'\n", optopt);
                }
                return 1;
        }
    }
    findInDir(path);
    return 0;
}
