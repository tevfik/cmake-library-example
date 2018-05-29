#include <stdlib.h> // calloc
#include <string.h>

#include "str-util.h"

char *str_reverse(char *str) {
        size_t len = strlen(str);
        char *result = calloc(len + 1, sizeof(char));

        for (size_t i = 0; i < len; ++i) {
                // old NULL should not be copied to new string
                result[i] = str[len - (i + 1)];
        }

        return result;
}
