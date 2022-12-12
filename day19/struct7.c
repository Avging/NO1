//
// Created by Han on 2022/11/19.
//
#include <stdio.h>
#include <string.h>

struct Teach  {
    char teaName[10];
    int teaAge;
};

int main(void)  {
    struct  Teach tea[3] = {{"小包",26},{"小东",22},{"小华",28}};
    printf("%s,%d\n",tea[0].teaName,tea[0].teaAge);

    strcpy(tea[0].teaName,"asd");
    printf("%s\n",tea[0].teaName);

    tea[0] = (struct Teach){"qqq",34};
    printf("%s,%d\n",tea[0].teaName,tea[0].teaAge);

}