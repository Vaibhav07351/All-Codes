#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <bits/stdc++.h>
int main()
{
int fd = open("file.txt", O_RDONLY);
char buf[100];
int cpid = fork();
if (cpid == 0)
{
if (read(fd, buf, 10) == -1)
perror("child:read");
buf[10] = '\0';
printf("child: %s\n", buf); /*LINE A*/
}
else if (cpid > 0)
{
wait(0);
if (read(fd, buf, 10) == -1)
perror("parent:read");
buf[10] = '\0';
printf("parent: %s\n", buf); /*LINE B*/
}
else
perror("fork:");
}
