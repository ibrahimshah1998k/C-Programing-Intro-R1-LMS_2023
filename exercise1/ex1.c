#include <string.h>
#include <stdio.h>
#include "ex1.h"
#include <stddef.h>
/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    int i, count;
    count = 0;
    i=0;
    while(str[i] != '\0')
    {
       
        if(str[i] == letter)
        {
            count++;
        }

        i++;
    }
    return count;
}
/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {

    if (dna_seq == NULL) {
        perror("Error");
    }
    /* Initialize the Counts in strctue to zero */
     dna_seq->A_count =0;
     dna_seq->C_count =0;
     dna_seq->G_count =0;
     dna_seq->T_count =0;
    /* Count frequency of symbols 'A', 'C', 'G' and 'T' in DNA */
    char *current;
    for(current = dna_seq->sequence; *current; ++current) {
        switch(*current){
            case 'A':
                ++dna_seq->A_count;
                break;
            case 'C':
                ++dna_seq->C_count;
                break;
            case 'G':
                ++dna_seq->G_count;
                break;
            case 'T':
                ++dna_seq->T_count;
                break;
            default:
                
                break;
        }
    }
    return;
}
