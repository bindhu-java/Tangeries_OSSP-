open() is used to open the source and destination files.
read() reads data from the source file.
write() writes the data into the destination file.
close() closes both files.
The buffer buf[100] temporarily stores the file data.
User Space and Kernel Space

The program runs in user space.
When a system call is made, control moves from user space to kernel space.
The kernel performs the requested file operation.
Control then returns to user space.
This happens for open(), read(), write(), and close().
