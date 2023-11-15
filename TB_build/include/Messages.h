#ifndef Messages_h
#define Messages_h

extern int msg_ready = 0;

extern char write_msg(char F_name[], char type[], char msg[]) {
    switch (type) {
        case "w":
            FILE *fptr = fopen(F_name, "w");
            fprintf(fptr, "%s", msg);
            fclose(fptr);
            break;

        case "a":
            FILE *fptr = fopen(F_name, "a");
            fprintf(fptr, "%s", msg);
            fclose(fptr);
            break;

        default:
            return 0;
    }
    return 0;
}

extern char get_msg(char F_name[]) {
    FILE *fptr = fopen(F_name, "r");
    char msg[] = *fptr;
    fclose(fptr);
    return msg;
}

#endif
