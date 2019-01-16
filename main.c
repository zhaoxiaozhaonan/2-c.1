#include <stdio.h>
int index = 0;
char arr[1024];
int main()
{

    printf("敏感字符管理系统\n");

    while (1)
    {
        printf("1--添加一个敏感字符\n");
        printf("2--删除最后一个敏感字符\n");
        printf("3--显示所有敏感字符\n");
        printf("4--替换所有敏感字符\n");
        printf("5--退出系统\n");
        printf("请输入所需项目数字\n");
        int code;
        scanf("%d", &code);

        if (code = 1)
        {
            printf("请输入要添加的敏感字符\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);//消除空格的影响
            arr[index]=m;
            index++;
            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code = 2)
        {
            /* code */
        }

        if (code = 3)
        {
            /* code */
        }
        if (code = 4)
        {
            /* code */
        }
        if (code = 5)
        {
            /* code */
        }
    }

    return 0;
}