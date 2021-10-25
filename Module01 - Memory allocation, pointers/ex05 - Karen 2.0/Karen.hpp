# ifndef KAREN_H
# define KAREN_H

# include <string>
# include <iostream>

class	Karen
{
private:
	typedef void (*functions)();

public:
	Karen(void);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	complain(std::string level);
};
#endif