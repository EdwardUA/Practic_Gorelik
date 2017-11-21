
/*8. Dan fajl, soderzhashhij tekst na russkom jazyke. Sostavit' v alfavitnom
porjadke spisok vseh slov, vstrechajushhihsja v jetom tekste.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int scmp(const void *p1, const void *p2)
{// na primere https://stackoverflow.com/questions/13487821/the-use-of-char/13487867
    const char *s1, *s2;
    s1 = * (char **) p1;
    s2 = * (char **) p2;
        /*
    The (char **) is a type cast, and the unary * which precedes the cast dereferences the pointer. 
    If you simply take v1 = (char *) p1, then v1 will be set equal to p1,
     when what you want is for v1 to be equal to the char* to which p1 points.
    */
    return strcmp(s1, s2);
}
 
int main()
{
    FILE *ifp, *ofp;
    char *lineptr[4000];
    char s[4000];
    int i, nl;
    ifp = fopen("in.txt", "r");
    if(ifp == NULL || (ofp = fopen("out.txt", "w")) == NULL) {
        perror("fopen");
        return -1;
   }
 
    for(i = 0; i < 4000; ) {// while ( (fgetc(ofp) ) != EOF)
        if(fgets(s, sizeof(s), ifp) == NULL)
            break;
        if(*s != '\n')
            lineptr[i++] = strdup(s);
    }
    nl = i;
    qsort(lineptr, nl, sizeof(char *), scmp);
 
    for(i = 0; i < nl; i++) {
        fprintf(ofp, "%s", lineptr[i]);
        free(lineptr[i]);
    }
    fclose(ifp);
    fclose(ofp);
    system("pause");
    return 0;
}



