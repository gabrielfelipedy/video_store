#ifndef _H_ACTIONS
#define _H_ACTIONS

#include "globconst.h"

movie_t* getMovie(state_t* s); 
void registerMovie(state_t* s);
void searchMovie(state_t* s);
void showMovies(state_t* s);
void saveMovies(state_t* s);
void loadMovies(state_t *s);
int deleteMovie(state_t *s, movie_t* ret);
void rentMovie(movie_t* ret);
void giveBack(movie_t* ret);
void generateReceive(state_t* s);

#endif