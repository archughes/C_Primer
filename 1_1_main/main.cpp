int main ()
{
	return -1;

	/*
	In UNIX the command "echo $?" can be used to print the special shell variable $.  This variable is a uint8, so if -1 is issued then the output of the program in the shell is 2555, even though the main program defines it as an int.
	*/
}
