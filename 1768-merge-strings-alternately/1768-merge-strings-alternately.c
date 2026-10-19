

char * mergeAlternately(char * word1, char * word2){
    int x= strlen(word1);
    int y=strlen(word2);
    char *s = malloc(x+y+1);
    int i=0,j=0,k=0;
    while(i<x&&j<y){
        s[k++]=word1[i++];
        //k++;
        //i++;
        s[k++]=word2[j++];
        //k++;
        //j++;
    }
    while (i < x) {
        s[k++] = word1[i++];
    }

    while (j < y) {
        s[k++] = word2[j++];
    }

    s[k] = '\0';
    return s;


}