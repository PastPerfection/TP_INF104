#ifndef _LINKED_LIST_HEADER_
#define _LINKED_LIST_HEADER_

#include "link-types.h"
#include <stdio.h>
#include <stdlib.h>

Link_t * new_link(Student_t student);
Link_t * chain(Link_t * beginning, Link_t * new_link);
void display_linked_list(Link_t * list);
void free_list(Link_t * list);
Link_t * sort (Link_t * beginning);
Link_t * search (Link_t * beginning, char * name_to_search);
Link_t * insert (Link_t * beginning, Link_t * new_link);
void read_file_content(Student_t * array, FILE * file);

#endif