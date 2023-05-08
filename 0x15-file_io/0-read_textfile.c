#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include <fcntl.h>

/**
 * read_textfile-Reads sting and returns the number of letters
 * @letters:Number of letters to read
 * @filename:string to be read 
 * Return- letters if successful and 0 if fails
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
            size_t letters;
            char *buffer = malloc(sizeof(char)*letters);
            ssize_t readfile , writefile;

            if (!buffer)
                        return (0);

            if (!filename)
                        return (0);
            
            int fd = open("filename",O_RDWR);
            
            if (fd<0)
                    close(fd);
                    return (0);
            
            readfile = read(fd,buffer,letters);
            if(readfile<0)
                    close(fd);
                    return (0);
            
            writefile = write(STDOUT_FILENO,buffer,readfile);
            if (writefile<0)
                    close(fd);
                    return (0);
            free(buffer);
	    if (writefile=readfile)
	            return (writefile);
	    else
	            return (0)

}



