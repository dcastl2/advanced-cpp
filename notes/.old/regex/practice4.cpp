// Use 
//
//  :%s/\. /\.  /g
//
// to put two spaces after a period instead of one. You can double-space
// the document by using:
//
//  :%s/$//g
//
//  is a new line.   is not ^M.  To get , you must do the following 
// keystroke: <Ctrl+v>, then <Enter>.

This is text in a paragraph. The periods after each sentence have one space
after, but we want for there to be two. We can use a substitution to do that.
We can also double-space by switching out an end-of-line with a carriage
return. These kinds of substitutions eliminate the need for us to manually
fix text in term papers, codes, etc. 
