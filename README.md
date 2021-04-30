# CSC3320_FinalLab
Lab 12 - containing all the lab assignments in System Level Programming Fall 2021 class.

@choang7
- Lab assignment requiring to submit source code will have a 'ReadMe.txt' file to instruct user on how to execute the program and a brief explaination on how the program works.
- Lab assignment requiring to submit the documentation has everything explained in the documentation itself. 
- Switch to 'master' branch to see the source code or documents of all the lab assignments.

General Instruction on how to execute '.c' file and shell script:
 * How to execute '.c' extension file:
	- install the essential packages on your system with the following command as root in your Linux Terminal:
		$ sude apt-get install build-essential
	- enter the following command to compile the '.c' extension file and make an executable version of the program:
		$ gcc [programName].c -o programName
		E.g: 
		$ gcc calcPrice.c -o calcPrice
	- Specify the paths that lead to the executable version of the program you have created above to execute the program.
		$ [path]/programName
		E.g: the the executable program for 'calcPrice.c' is located at home:
		$ ./calcPrice

 * How to execute '.sh' shell script file:
	- change your directory to the one containing the '.sh' file using cd command
	- set execute permission to the script file using chmod command:
		$ chmod +x [scriptName].sh
		E.g: 
		$ chmod +x getPhoneNumber.sh
	- run the script, make sure your path to the shell script is correct:
		$ ./[scriptName].sh
		E.g:
		4 ./getPhoneNumber.sh

LAB 7:
- calcPrice.c:
	take in the item ID, unit price, quantity, and the purchase date (mm/dd/yyyy) and output the total amount($)

- getPhoneNumber.c/getPhoneNumber.sh :
	take in the phone number in '(xxx)xxx-xxxx' format and output the phone number in 'xxx-xxx-xxxx' format.

LAB 9:
- getMostFreqChar.c:
	read the content of a text file named 'text.txt', and output the most frequence letter and its time of appearance.

- addressOfScalar.c:
	print out the address in the memory of a char variable and an integer variable.

- addressOfArray.c:
	print out the address in the memory for each element in an array and the array length/size.

LAB 10:
- splitTime.c:
	inputs the number of seconds and converts the second into '[hrs] hours [mins] mins [secs]' format.

- myStrcpy.c:
	copy the content of the second string in the argument into the first string in the argument.

- findStr.c:
	take in mutiple words from user input and output the smallest word and largest word in the list using 'strcmp'.

