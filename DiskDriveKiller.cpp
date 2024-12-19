#include <iostream>
#include <string>

void runKiller(int fileNums)
{
    long long sizeInBytes = 1 * 1024 * 1024 * 1024; // Convert GB to bytes
    char fileName[] = "killer_"; // File name prefix

    for (int i = 0; i < fileNums; i++) // Loop through the size of the disk drive
    {
        std::string file = fileName + std::to_string(i);

        FILE* fp;
        errno_t err = fopen_s(&fp, file.c_str(), "w");
        if (err != 0) {
            std::cerr << "Error opening file: " << file << std::endl;
            return;
        }

        _fseeki64_nolock(fp, sizeInBytes - 1, SEEK_SET); // Move the file pointer to the end of the file
        _fwrite_nolock("\0", 1, 1, fp); // Write a null byte to the end of the file

        fclose(fp);
    }
}

int main()
{
    int fileNum = 0;
    std::cout << "Enter the number of files to create: ";
    std::cin >> fileNum;
    std::cout << "The size of the disk drive is " << fileNum << " GB.\n";
    std::cout << "The disk drive is being killed...\n";
    runKiller(fileNum);
}