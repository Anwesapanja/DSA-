#include<stdio.h>
#include<string.h>
int main()
{
    int len,len1,count=0;
    char A[100],find[5];
    printf("enter the string will be: ");
    gets(A);
    len=strlen(A);
    //printf("the length of the string will be: %d",len);
    printf("enter the pattern of the string: ");
    gets(find);
    len1=strlen(find);
    printf("the length of the string will be: %d",len);
    printf("the length of the pattern will be: %d\n\n",len1);
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len1;j++)
        {
            if(A[i]=find[j])
            {
                continue;
            count++;
            }
            else
            {
                count=0;
            }
        }
    }
    printf("the count of the pattern in the string will be: %d\n",count);
    return 0;
}    