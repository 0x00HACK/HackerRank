#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001];
    int arr[10]={0};
    scanf("%s",&s);
    int i=0;
    while(strlen(s)>i)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            arr[s[i]-'0']+=1;
        }
        i++;
    }
    for(int j=0;j<10;j++)
    {
    printf("%d ",arr[j]);
    }

    return 0;
}
