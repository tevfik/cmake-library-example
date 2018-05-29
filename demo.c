#include <stdio.h>
#include <stdlib.h> // free
#include <assert.h>

#include "str_util.h"

int main(void) {
        char *input = "verdim sezyumdiyoksiti lazerin beynine bin kere";
        char *expected = "erek nib eninyeb nirezal itiskoyidmuyzes midrev";
        char *result = str_reverse(input);

        assert(*result == *expected);

        printf("Alles klar!\n");

        free(result);

        return 0;
}