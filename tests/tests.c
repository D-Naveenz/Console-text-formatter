#include <stdio.h>
#include <conio.h>
#include <contf.h>
#include "ctf-tests.h"

void header()
{
    printlnC("Console Text Format lib - v1.1");
    printFText(textLeft, 50, NULL, 0, "Test v0.3");
    printFText(textRight, 50, NULL, 1, "Naveen Dharmathunga");
    separator();
}