

#ifndef ALIGNMENT_SCORING_LOAD_HEADER_SEEN
#define ALIGNMENT_SCORING_LOAD_HEADER_SEEN

#include "alignment_scoring.h"

void align_scoring_load_matrix(gzFile file, const char* file_path,
                               scoring_t* scoring, char case_sensitive);

void align_scoring_load_pairwise(gzFile file, const char* file_path,
                                 scoring_t* scoring, char case_sensitive);

#endif
