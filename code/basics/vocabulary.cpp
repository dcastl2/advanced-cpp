// preprocessor 
//  directive
#include <iostream>


// return   function    param.   param.
//  type      name       type     name                     
    int       sum      ( int       n  )  {           // <-- function signature


//     var.    var.    assg.    constant
//     type    name     op.
        int     s        =         0;


//      for        init.      cond.     upd./inc.
//    keyword      stmt.      stmt.      stmt.
        for     (int i=0;     i<n;       i++)


//           accum.    compound    counter
//                        op.
                s         +=          i;


//      return    return
//     keyword     value
        return       s;

    }                               


    int main() {

//  function    argument
//    call
      sum      (   10   );

    }
