#include "killer_dll.h"

int runKiller(int size) 
{
    FILE *fp;
    char buffer[1];
    int fileSize; // 用户自定义的文件大小（单位：GB）

    printf("File Size(GB): ");
    scanf("%d", &fileSize);
    char str[fileSize];

    for (int i = 0; i < fileSize; i++)
    {
        sprintf(str, "%s%d", "output_file.", i + 1);
        fp = fopen(str, "w");
        if (fp == NULL)
        {
            printf("Cannot open file\n");
            return 1; // 异常退出
        }

        fseek(fp, 1024 * 1024 * 1024 - 1, SEEK_SET); // 指针移动到1GB
        fwrite(buffer, 1, 1, fp);                    // 写入一个字节

        fclose(fp); // 关闭此次循环生成的文件
    }
    return 0; // 正常退出
}