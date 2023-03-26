#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
    int letters=0;
    int words=1;
    int sentences=0;
    string n = get_string("Input your text:\n");
    for(int i=0; i<strlen(n); i++)
    {
        if(isalpha(n[i]))
        {
            letters++;
        }
        else if(n[i]==' ')
        {
            words++;
        }
        else if(n[i]=='.' || n[i]=='!' || n[i]=='?')
        {
        sentences++;
        }

    }
    float l= (float)letters*100/(float)words;
    float s= (float)sentences*100/(float)words;
    int index=round(0.0588 *l - 0.296 * s - 15.8);
    if(index<1)
    {
        printf("Before Grade 1\n");
    }
    else if (index>16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n",index);
    }

     return 0;
}