#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * swap -  swaps data from top t
 * @stack: stack given by
 * @line_cnt: ammount of
 *
 * Return: void
 */
void swap(stack_t **stk, unsigned int line_cnt)
{
	stack_t *tmp = NULL;
	int tmp_n = 0;

	if (!stk || !*stk || !((*stk)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}
	tmp = *stk;
	tmp_n = tmp->n;
	tmp->n = tmp_n;

	tmp->n = tmp->next->n;
	tmp->next->n = tmp_n;

}
