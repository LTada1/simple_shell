### This Project focus on building a simple UNIX shell program.

This is a requirement to implement the knowledge of C programming basics. This project contains defined user functions,
do similar work compared to the same library function, example: copy-string does the work of strcpy. The project consist of files, all sums up the step by step function of a shell program.


## Program Breakdown
-----------------------------------
-----------------------------------
 
* 1. Handle many attributes of the shell yet.

* 2. This step Handle command lines with arguments, unlike the first, that only reads and prints out user input.

* 3. This step handle the PATH, which is the list of all directories, a shell access to executes a particular command.

* 4. This part implements the exit built-in that exits the shell. From the previous steps, the shell can not exit.

* 5. This step implement the env built-in that prints the current enviroment.

* 6. At this stage, we write a function that reads input from the command line, this function mimics the `getline` library function.

* 8. This step handle arguments for the built-in exit. Exit status also allowed at this point.

* 9. This step implemets the setenv and unsetenv built-in commands.

* 10. This step implement the builtin command cd.

* 11. This step handles the commands separator `;` which is a sequencing character.

* 12. This step handles the `&&` and `||` shell logical operators.

* 13. This step implemets the alias built-in command.

* 14. This step handles variables replacement; that is `$` variable.

* 15. Commenting `#` is handled at this stage.

* 16. This step handle the usage of simple_shell [filename]
