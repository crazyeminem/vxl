// This is brl/bbas/brdb/brdb_query_aptr.h
#ifndef brdb_query_aptr_h
#define brdb_query_aptr_h
//:
// \file

class brdb_query;

#include <iostream>
#include <memory>
#include <vcl_compiler.h>

typedef std::auto_ptr<brdb_query> brdb_query_aptr;


#endif // brdb_query_aptr_h
