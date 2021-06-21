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
	
	it("Should return false since weather and apple are not isomorphic")
	{
		check(areIsomorphic("weather", "apple") == false);
	}
	
	it("Should return true since paper and title are isomorphic")
	{
		check(areIsomorphic("paper", "title") == true);
	}
}