#include "dog.h"
#include <stdio.h>

printf("Name: ");
if (d->name != NULL) {
    printf("%s\n", d->name);
} 
else {
    printf("(nil)\n");
}

printf("Age: ");
if (d->age != NULL) {
    printf("%s\n", d->age);
} else {
    printf("(nil)\n");
}

printf("Owner: ");
if (d->owner != NULL) {
    printf("%s\n", d->owner);
} else {
    printf("(nil)\n");
}

