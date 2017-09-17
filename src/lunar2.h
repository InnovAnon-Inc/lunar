#ifndef _LUNAR2_H_
#define _LUNAR2_H_

#ifdef __cplusplus
extern "C" {
#endif

__attribute__ ((leaf, nonnull (1, 6), nothrow))
void get_rise_set_times (
   double *rise_set, const int planet_no,
   double jd,
   const double observer_lat, const double observer_lon,
   const char *vsop_data) ;

__attribute__ ((const, nothrow, warn_unused_result))
int quadrant (double angle) ;

__attribute__ ((nothrow, warn_unused_result))
int get_table (
   int year, double lon, double lat,
   int month_start, int month_end, int time_zone) ;

#ifdef __cplusplus
}
#endif

#endif /* _LUNAR2_H_ */