#ifndef CMATH_H
#define CMATH_H
#define BitGet(Num ,N) (Num>>(N-1))&1
#define BitSet(Num ,N)  Num = Num | (1<<(N-1))
#define BitToggle(Num ,N) Num = Num ^ (1<<(N-1)) 
#define BitClear(Num ,N) Num = Num & ~(1<<(N-1)) 
#endif