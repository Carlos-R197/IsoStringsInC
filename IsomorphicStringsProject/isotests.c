#include "bdd-for-c.h"
#include "isostrings.h"
#include <stdbool.h>

spec("This program tests if given strings are isomorphic")
{
	it("Should return true since two strings with whitespace are isomorphic")
	{
		check(areIsomorphic(" ", " ") == true);
	}
	
	it("Should return true since egg and add are isomorphic")
	{
		check(areIsomorphic("egg", "add") == true);
	}
}