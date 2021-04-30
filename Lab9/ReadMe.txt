LAB 9

How to execute '.c' extension file:
	- install the essential packages on your system with the following command as root in your Linux Terminal:
		$ sude apt-get install build-essential
	- enter the following command to compile the '.c' extension file and make an executable version of the program:
		$ gcc [programName].c -o programName
		E.g: 
		$ gcc getMostFreqChar.c -o getMostFreqChar
	- Specify the paths that lead to the executable version of the program you have created above to execute the program.
		$ [path]/programName
		E.g: the the executable program for 'getMostFreqChar.c' is located at home:
		$ ./getMostFreqChar

getMostFreqChar.c:
	read the content of a text file named 'text.txt', and output the most frequence letter and its time of appearance.

addressOfScalar.c:
	print out the address in the memory of a char variable and an integer variable.

addressOfArray.c:
	print out the address in the memory for each element in an array and the array length/size.




