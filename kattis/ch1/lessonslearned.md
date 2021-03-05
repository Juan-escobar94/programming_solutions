# lessons learned while solving easy problem
* scanf("%d\n"):
  * scanf expects to read whitespace until encountering next non ws. from SO: 
    An '\n' - or any whitespace character - in the format string consumes an entire (possibly empty) sequence of whitespace characters in the input. So the scanf only returns when it encounters the next non-whitespace character, or the end of the input stream (e.g. when the input is redirected from a file and its end is reached, or after you closed stdin with Ctrl-D).
