# DiskDriveKiller
几秒钟让你的磁盘爆红[doge]

## 如何使用?
### 1.双击启动
下载源码，双击`killer.exe`

等待出现cmd窗口后，输入你想要生成的文件数量(一个文件大小等于1GB)

回车

### 2.DLL加载
使用支持加载DLL的语言(如：C/C++, Java JNI等)

转入[DLL文件夹](https://github.com/ZeathDev/DiskDriveKiller/tree/main/dll)，下载里面的DLL文件(对于JNI可不下载头文件)
Call `runKiller(int fileSize)`
