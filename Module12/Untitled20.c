#include <stdio.h>
int main()
{
    char sen[1000];
    //scanf("%s",sen);
    //gets(sen);
    fgets(sen,sizeof(sen),stdin);
    int i = 0,counter=0;
    while(sen[i]!='\0')
    {
        if(sen[i]=='a' || sen[i]=='A')
            counter++;
        else if(sen[i]=='e' || sen[i]=='E')
            counter++;
        else if(sen[i]=='i' || sen[i]=='I')
            counter++;
        else if(sen[i]=='o' || sen[i]=='O')
            counter++;
        else if(sen[i]=='u' || sen[i]=='U')
            counter++;
        i++;
    }
    printf("Number of Vowels : %d",counter);
    return 0;
}
