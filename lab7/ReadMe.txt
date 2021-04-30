LAB 7

How to execute '.c' extension file:
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

How to execute '.sh' shell script file:
	- change your directory to the one containing the '.sh' file using cd command
	- set execute permission to the script file using chmod command:
		$ chmod +x [scriptName].sh
		E.g: 
		$ chmod +x getPhoneNumber.sh
	- run the script, make sure your path to the shell script is correct:
		$ ./[scriptName].sh
		E.g:
		4 ./getPhoneNumber.sh

calcPrice.c:
	take in the item ID, unit price, quantity, and the purchase date (mm/dd/yyyy) and output the total amount($)

getPhoneNumber.c/getPhoneNumber.sh :
	take in the phone number in '(xxx)xxx-xxxx' format and output the phone number in 'xxx-xxx-xxxx' format.




