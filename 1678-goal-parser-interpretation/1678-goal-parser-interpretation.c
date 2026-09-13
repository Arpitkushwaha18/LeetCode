

char * interpret(char * command){
    int m = strlen(command);
    int j =0;
    char* result = malloc((m+1)*sizeof(char));
    for(int i =0;i<m;i++){
         if (command[i] == 'G') {
            result[j++] = 'G';
            
        }

        else if (command[i] == '(' && command[i + 1] == ')') {
            result[j++] = 'o';
            i += 1;
        }

        else if (command[i] == '(' &&
                 command[i + 1] == 'a' &&
                 command[i + 2] == 'l' &&
                 command[i + 3] == ')') {

            result[j++] = 'a';
            result[j++] = 'l';
            i += 3;
        }

    }
    result[j]='\0';
    return result;

}