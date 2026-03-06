# Write an 80x86 assembly program that performs the following functions:
#
# Reads a set of integers from a file into a memory array. The data file name is to be read from the command line. You are welcome to use the code examples and macros to do this project.
#
# Format of the data file: Assume the file gives the number of data points on the first line. Every line following the first line contains exactly one value. The file is given in the Blackboard.
#
# Add all the integers that you have read and print out the sum on the screen.
#
# (Optional) You can construct your own data files for this in the format described above. We will test your code on our own examples.
#
# You may use the C library functions for this project. The relevant functions are fopen, fscanf and printf. Examples are posted on the webpage.

# gcc main.c sum_array.s -o lab4 -z noexecstack
# ./lab4 data.txt