LAB 10:

How to execute '.c' extension file:
	- install the essential packages on your system with the following command as root in your Linux Terminal:
		$ sude apt-get install build-essential
	- enter the following command to compile the '.c' extension file and make an executable version of the program:
		$ gcc [programName].c -o programName
		E.g: 
		$ gcc splitTime.c -o splitTime
	- Specify the paths that lead to the executable version of the program you have created above to execute the program.
		$ [path]/splitTime
		E.g: the the executable program for 'getMostFreqChar.c' is located at home:
		$ ./splitTime

splitTime.c:
	inputs the number of seconds and converts the second into '[hrs] hours [mins] mins [secs]' format.

myStrcpy.c:
	copy the content of the second string in the argument into the first string in the argument.

findStr.c:
	take in mutiple words from user input and output the smallest word and largest word in the list using 'strcmp'