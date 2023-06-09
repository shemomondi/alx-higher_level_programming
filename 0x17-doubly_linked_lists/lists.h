#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t dlistint_len(const dlistint_t *h);

#endif /* LISTS_H */

