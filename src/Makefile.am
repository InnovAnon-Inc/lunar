AM_CPPFLAGS = -D__STDC_INT64__

SUBDIRS = ../glitter
AM_CPPFLAGS += -I $(top_srcdir)/glitter/src

LIBLUNAR2_LIBADD = -lm -llunar

lib_LTLIBRARIES = liblunar2.la
liblunar2_la_SOURCES = tables.c
include_HEADERS = lunar2.h
liblunar2_la_LIBADD = $(LIBLUNAR2_LIBADD)
