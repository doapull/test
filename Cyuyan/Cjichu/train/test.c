#define MAX_SIZE

int main()
{
	int i,fd,size1 ,size2 ,len;
	char *buf = "helo!I'm liujiangyong ";
	char buf_r[15];
	len = strlen(buf);
	fd = open("/home/hello.txt",O_CREAT | O_TRUNC | O_RDWR,0666);
	if (fd<0)
		{
			perror("open :");
			exit(1);
		}
	else
		{
			printf("open file:hello.txt %d\n",fd);
		}
	size1 = write(fd,buf,len);
	if (fd<0)
		{
			printf("writre erro;");	
		}
	else
		{
			printf("写入的长度：%d\n写入文本内容：%s\n",size1,buf);	
		}
	lseek(fd,0,SEEK_SET);
	size2 = read(fd,buf_r,12);
	if (size2 <0)
		{
			printf("read  erro\n");
		}
	else
		{
			printf("读取长度：%d\n 文本内容是：%s\n",size2,buf_r);
		}
	close(fd);    
}
