
#include <unistd.h>
#include <fcntl.h>

void	print_sht(int desc)
{
	char c;

	while (read(desc, &c, 1) != 0)
		write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		desc;

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc != 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		desc = open(argv[1], O_RDONLY);
		if (desc != -1)
		{
			print_sht(desc);
			close(desc);
		}
	}
	return (0);
}
