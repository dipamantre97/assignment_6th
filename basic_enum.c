#include <stdio.h>

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main()
{
    
    enum week today;
    today = Wednesday;
    printf("Day %d",today+1);// output day 4
    return 0;
}
