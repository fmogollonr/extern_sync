#include "graph.h"

#ifdef _MSC_VER
#pragma warning(disable: 4661)
#endif

// Instantiations: <captype, tcaptype, flowtype>
// IMPORTANT: 
//    flowtype should be 'larger' than tcaptype 
//    tcaptype should be 'larger' than captype

#ifndef __INSTANCES_INC__
#define __INSTANCES_INC__

template class Graph<int,int,int>;
template class Graph<short,int,int>;
template class Graph<float,float,float>;
template class Graph<double,double,double>;

#endif // __INSTANCES_INC__
