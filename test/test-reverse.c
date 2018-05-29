#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "str-util.h"

int main(void) {
        char *input = "verdim sezyumdiyoksiti lazerin beynine bin kere";
        char *expected = "erek nib eninyeb nirezal itiskoyidmuyzes midrev";
        char *result = str_reverse(input);

        return strcmp(result, expected);
}