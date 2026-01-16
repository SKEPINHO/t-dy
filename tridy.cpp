
#include <stdio.h>
#include <iostream>

#include "dog.h"
#include "animal.h"

int main()
{
    //animal dunco(5, "Dunco");
    //dunco.makeSound();

    dog rex(3, "Rex", "German Shepher", 10000);
    rex.makeSound();

    return 0;
}
