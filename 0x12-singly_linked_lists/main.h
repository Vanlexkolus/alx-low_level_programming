#ifndef MAIN_H
#define MAIN_H
void before_main(void) __attribute__((constructor));
int main(void);
void before_main(void);
#endif
